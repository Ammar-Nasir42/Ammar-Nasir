#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string mytring;
	int x;
	cout << "writing to the file";
	cout << "enter your name:";
	getline(cin, mystring);
	cout << "enter your age:";
	cin >> x;
	ofstream data;
	data.open("students_data.text");
	if (data)
	{
		data << mystring << endl << x;
	}
	ifstream data_r;
	data_r.open(students_data.text)
		if (data_r)
		{
			getline(cin, mystring)
				cout << mystring;
			data_r << age;
			cout << endl << age;

		}
}

