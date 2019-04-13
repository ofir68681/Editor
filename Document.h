#include <string>
#include <iostream>
#include <vector>
using namespace std;


class Document{
	private:
	std::vector <string> lines;
	int currentLine;
	bool addForward;
	
	public:
	void text(string text);
	void p();
	void prec_p();
	void n();
	void d();
	void a();
	void i();
	void num(int number);
	//void c();
	
	Document();
	//get_index();
	string get_current_line();
	//can i use friend?
	void set_current_line(int i,string n);
	
	void delete_current_line(int i);

};
