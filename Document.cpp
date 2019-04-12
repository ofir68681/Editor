#include <string>
#include <iostream>
#include "Document.h"


Document::Document(){}

//Document::get_index(){return i;}

Document::get_current_line(){return lines[i];}

Document::set_current_line(int i,string n){ lines[i]=n;}

Document::delete_current_line(int i){lines[i].erase();}
