#include <string>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include "Editor.h"

using namespace std;


int main(){
	Editor e;
	e.loop();
	
    return 0; 
	
}



  

Editor::Editor(): document(){}

void Editor::loop(){
	string a;
	while(1){
		getline(cin, a);
		//cout << a;
		if (!a.compare("Q"))
			break;
		
		handle(a);
	}
}

void Editor::handle(string line){
	//cout << "handle: " << line << endl;
	//choose which document function to call
	if(!line.compare("p")){
		document.p();
		return;
	}
	if(!line.compare("n")){
		document.n();
		return;
	}
	if(!line.compare("%p")){
		document.prec_p();
		return;
	}
	if(!line.compare("a")){
		document.a();
		return;
	}
	if(!line.compare("i")){
		document.i();
		return;
	}
	if(!line.compare("c")){
		document.c();
		return;
	}
	if(!line.compare("d")){
		document.d();
		return;
	}
	
	int num = 0;
	bool isAnumber;
	string s = line;
	try{
		num = stoi(s);
		isAnumber=true;
	}
	catch (std::invalid_argument const &e){
		isAnumber=false;
	}
	catch (std::out_of_range const &e){
		isAnumber=false;
	}

	if(isAnumber){
		document.num(num);
		return;
	}
	
	//check if line is a "/dir"
	if(line.size()==0){
		document.text(line);
		return;
		}
	
	if(line.at(0) == '/'){
		document.slesh_text(split(line, '/')[1]);
		return;		
	}
	if(line.at(0) == 's'){
		vector<string> arr = split(line, '/');
		if(arr.size() == 4){
			document.s_slech_old_new(arr[1], arr[2]);
			return;
		}
	}
	
	
	document.text(line);
	//currentLine++;
	
}




	
vector<string> Editor::split(string str, char splitBy){
	vector<string> words;
   string word = ""; 
   for (auto x : str) { 
       if (x == splitBy) {  
		   words.push_back(word);
           word = ""; 
       } 
       else{ 
           word = word + x; 
       } 
   }  
   words.push_back(word);
   return words;
} 
