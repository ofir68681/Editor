#include <string>
#include <iostream>
#include "Editor.h"


int main(){
	Editor e;
	e.loop();
}


Editor::Editor(): document(){
	
}

void Editor::loop(){
	string a;
	while(1){
		getline(cin, a);
		//cout << a;
		if (!a.compare("Q"))
			break;
		if(a.compare(""))
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
		//document.c(); ???
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
		int num = stoi(s);
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
	
	document.text(line);
	//currentLine++;
	
		
	
	
}

