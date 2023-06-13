#pragma once
#include "Vigenere_Cipher.h"
using namespace std;
class Home_Menu
{
	int op = 0;
	string mode_of_use_and_rules = "\nModo de uso:\nO texto e chave devem possuir no minimo um caracter de A a Z.\nCaracteres especiais e digitos permanecem na mesma posicao.\nO resultado e dado com letras maiusculas.\n\n";
	string key = "";
	string text = "";
	Vigenere_Cipher *cv;
public:
	Home_Menu();
	~Home_Menu();
	void Start_Menu();
	void Encrypt_Menu();
	void Descrypt_Menu();
};