#pragma once
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Vigenere_Cipher
{
public:
	bool Check_Key_And_Text(string, string);
	int Key_Position(int, string);
	string Start_Encrypt(string, string);
	string Start_Descript(string, string);
	string Recursion_Encrypt(string, string, int, string&, int);
	string Recursion_Descript(string, string, int, string&, int);

};