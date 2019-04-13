#include <string>
#include <iostream>
#include <vector>
#include "Document.h"

using namespace std;
Document::Document(){
	currentLine = 0;
	addForward = false;
}

//Document::get_index(){return i;}

string Document::get_current_line(){return lines[currentLine];}

void Document::set_current_line(int i,string n){ lines[i]=n;}

void Document::delete_current_line(int i){lines[i].erase();}

void Document::text(string text){
	//cout << "text!";
	if(addForward){
		vector<string>::iterator it;
		it = lines.begin();
		lines.insert (it+currentLine,text);
		currentLine++;
	}
}

void Document::p(){
	if(currentLine > 0)
		cout << lines[currentLine-1] << endl;
}

void Document::prec_p(){
	for(int i =0; i< lines.size(); i++){
		cout << lines[i] << endl;
	}		
}

void Document::n(){
}


void Document::i(){
}

void Document::d(){
}

void Document::a(){
	addForward = true;
}

void Document::num(int number){
	currentLine = number;
}
	
	
	
	
	
	
	
	
	