#include <iostream>
#include <string>
using namespace std;

int main(){

	string test;
	string name;
	cout << "\nHello user, could you tell me your name? " << flush;
	/* cin >> name; */
	getline (cin, name);

	if (name == "")
	{
	    cout << "Sorry but I didn't quite get that, "
		 << "assigning default\n";
	    name = "John Doe";
	}
	else
	{
	    cout << "Thank you, " << name
		 << " for running this simple program!"
		 << endl;
	}
	cout << "\nType anything and press enter to end program. ";
	cin >> test;
	return 0;
}
