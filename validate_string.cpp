#include <iostream>
#include <string>
using namespace std;
using std::string;

int main()
{
	string myname;
	string checkname;

	cout << "\nEnter your name: ";
	cin >> myname;
	cout << "Please confirm your name: ";
	
	cin >> checkname;	
	
	if (myname == checkname)
		{
			cout << "Exellent!" << endl;
		} else {
			cout << "Are you drunk?" << endl;
		}

	return 0;
}
