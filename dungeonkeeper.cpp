#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){
	
	string exit;
	string action;
	string look;
	string equip;
	string use;
	string move;
	
	cout << "\nWelcome to DungeonKeeper0.001 Alpha\n" << endl;
	cout << "You find yourself in a dungeon, naked and cold...." << endl;
	cout << "In a corner in the room you see some stuff laying around,\nperhaps some of this could be useful and help me survive,\nin the present time I cannot be to picky!\n" << endl;
	cout << "A few feet in front of me there is a wodden door. What should I do?" << endl;
	cout << "If I wonder what I can do I should type 'options' and if stuck type 'hint' \n\n" << endl;

cout << "What should I do? : ";	
	cin >> action;

		if (action == "options"){
		cout << "At the moment you can use look, equip, use, move" << endl;
		} else {
	//	cout << "something went wrong " << endl;
		}

		if (action == "look"){
		cout << "you look around" << endl;
		} else {
	//	cout << "something went wrong " << endl;
		}

		if (action == "equip"){
		cout << "you equip yourself" << endl;
		} else {
	//	cout << "something went wrong " << endl;
		}

		if (action == "use"){
		cout << "you abuse yourself" << endl;
		} else {
	//	cout << "something went wrong " << endl;
		}

		if (action == "move"){
		cout << "you move around a bit" << endl;
		} else {
	//	cout << "something went wrong " << endl;
		}
	
		if (action == "exit"){
		cout << "goodbye!" << endl;
		return 0;
		} else {
	//	cout << "something went wrong " << endl;
		}

return 0;
}
