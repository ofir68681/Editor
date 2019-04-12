#include <string>
#include <iostream>
#include "Editor.h"



Editor::Editor(){
	Document();
	i=0;
}

Editor::loop(){
}


Editor::p(){
	cout<<get_current_line();

}

Editor::%p(){
	for(int k=0;k<lines.size();k++){
		cout<<lines[k];

	}

}

Editor::7(){
	i=7;

}

Editor::c(string n){
	set_current_line(i,n);

}

Editor::d(){
	delete_current_line(i);
}
