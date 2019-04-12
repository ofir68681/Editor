#include <string>
#include <iostream>
#include <vector>
using namespace std;


class Document{
	private:
	std::vector <string> lines;
	
	public:
	Document();
	//get_index();
	get_current_line();
	//can i use friend?
	set_current_line(int i,string n);

	delete_current_line(int i);

}
