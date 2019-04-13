#include <string>
#include <iostream>
#include "Document.h"

/* Ofir Katz 314962101 */ 
/* Ben Horn 208569848 */ 

class Editor{
	private:
	Document document;
	vector<string> split(string str, char splitBy);
	void handle(string line);
	
	public:
	Editor();
	void loop();


};
