#include <string>
#include <iostream>
#include "Document.h"


class Editor{
	private:
	Document document;
	void handle(string line);
	
	public:
	Editor();
	void loop();


};
