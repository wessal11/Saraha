#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include "User.h"

using namespace std;

class Program
{
	int choice;
	User u;
	unordered_map<int, User> users;
public:
	//menu functions
	void loginMenu();
	void userMenu();
	void signup(); //wessal
    void login();
	//helper functions
	User getUser(int id);
	void printCentered(string str);

};

