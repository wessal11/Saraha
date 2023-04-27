#include "Program.h"

#include <iostream>

void Program::loginMenu()
{
	printCentered("S a r a h a");
	printCentered("Annonymously send and receive messages.");
	cout << "Welcome!" << endl;
	cout << "Do you have an account?\n\n" << endl; //bug here, two newlines fix it but why?
	cout << "1. Yes\n"
		<< "2. No\n";
	cin >>choice;

	switch (choice) {
	case 1:
		printCentered("L o g   i n");
		login();
		break;
	case 2:
		printCentered("S i g n   u p");
		signup();
		break;
	default:
		cout << "Invalid entry, try again!";
	}
}

void Program::userMenu()
{
	cout << "1. Send a message\n"
		<< "2. Inbox\n"
		<< "3. Favorites\n"
		<< "4. Sent messages\n"
		<< "5. My contacts\n"
		<< "6. Logout\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
		//send a message
		break;
	case 2:
		//inbox
		break;
	case 3:
		//favorites
		break;
	case 4:
		//sent messages
		break;
	case 5:
		//contacts
		break;
	case 6:
		//logout
		break;
	default:
		cout << "Invalid entry, try again!";
	}
}
User Program::getUser(int id)
{
	User user;
	auto it = users.find(id);
	user = it->second;
	return user;
}

void Program::printCentered(string str)
{
	int maxwidth = 70;
	stringstream ss;
	int padding = maxwidth - str.size() / 2;
	for (int i = 0; i < padding;  i++) 
	{
		ss << " ";
	}
	ss << str;
	for (int i = 0; i < padding; i++)
	{
		ss << " ";
	}
	cout << ss.str() << endl;
}

void Program::signup() { //wessal salah
	string name, pass;
	cout << "Please, enter your user name: \n";
	cin.ignore();
	getline(cin, name);
	cout << "Enter your password: \n";
	cin >> pass;
	users[u.id] = User(name ,pass);
	cout << "Congratulation!!\nYou now have an account";
}

void Program::login() { //wessal salah
	unordered_map<int, User>::iterator it;
	string name, pass;
	cout << "Enter your user name: \n";
	cin.ignore();
	getline(cin, name);
	cout << "Enter your password: \n";
	cin >> pass;
	it = users.begin();
	while (it != users.end()) {
		if (name == users[u.id].username && pass == users[u.id].password)
		{
			cout << "Welcome back! " << users[u.id].username << "\n";
			break;
		}
		else {
			cout << "the username or password is incorrect!\nplease try again\n";
		}
	}
}