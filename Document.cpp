#include <string>
#include <iostream>
#include <vector>
#include "Document.h"

using namespace std;
Document::Document(){
	currentLine = 0;
	addForward = false;
}

void Document::text(string text){
	while(currentLine > lines.size()){
		lines.push_back("");
	}
	//cout << "text!";
	if(addForward){
		vector<string>::iterator it;
		it = lines.begin();
		lines.insert (it+currentLine,text);
		currentLine++;
		
	}
}

void Document::p(){
	cout << lines[currentLine-1] << endl;
}

void Document::prec_p(){
	for(int i =0; i< lines.size(); i++){
		cout << lines[i] << endl;
	}		
}

void Document::n(){
	cout << currentLine << "	" << lines[currentLine-1] << endl;
}


void Document::i(){
	addForward = true;
	currentLine--;
}

void Document::d(){
	lines.erase(lines.begin() + currentLine-1);
	currentLine--;
}

void Document::c(){
	d();
	i();
}


void Document::a(){
	addForward = true;
}

void Document::num(int number){
	currentLine = number;
}
	
bool Document::inRange(int index){
	if(index < 0) return false;
	if(index >= lines.size()) return false;
	return true;
}

void Document::slesh_text(string text){
	for(int i= currentLine-1; i< lines.size(); i++){
		if(lines[i].find(text) !=  string::npos){
			currentLine = i+1;
			return;
		}
	}
	for(int i= 0; i< currentLine; i++){
		if(lines[i].find(text) !=  string::npos){
			currentLine = i+1;
			return;
		}
	}	
}

bool Document::replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}
	
void Document::s_slech_old_new(string oldText, string newText){
	replace(lines[currentLine-1], oldText, newText);
}
	
	
	
	
	
	