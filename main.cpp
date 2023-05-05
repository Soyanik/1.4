#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;
	Road();
};

int main() {
	cout << "Test v1.4: Ok.\n";
	
	TBook book1;
	
	book1.name = "War and peace";
	book1.author = "Lev Tolstoy";
	book1.count = "127";
	
	cout << "\nFirst book: \n";
	cout << "Name: " << book1.name << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Count: " << book1.count << endl;
	
	return 0;
}
