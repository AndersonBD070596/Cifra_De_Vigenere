#include "Vigenere_Cipher.h"
bool Vigenere_Cipher::Check_Key_And_Text(string text, string key)
{
	for (int i = 0; i <= key.length(); i++)
	{
		if (i >= key.length())
		{
			return false;
		}
		if (key[i] >= 'A' && key[i] <= 'Z')
		{
			break;
		}
	}
	for (int i = 0; i <= text.length(); i++)
	{
		if (i >= text.length())
		{
			return false;
		}
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			break;
		}
	}
	return true;
}
int Vigenere_Cipher::Key_Position(int key_pos, string key)
{
	do
	{
		key_pos++;
		if (key_pos >= key.length() - 1)
		{
			key_pos = 0;
		}
	} while (key[key_pos] < 'A' && key[key_pos] > 'Z');
	return key_pos;
}
string Vigenere_Cipher::Start_Encrypt(string text, string key)
{
	transform(text.begin(), text.end(), text.begin(), ::toupper);
	transform(key.begin(), key.end(), key.begin(), ::toupper);
	if (!Check_Key_And_Text(text, key))
	{
		return "Chave ou texto invalidos";
	}
	string encrypted_text = "";
	return Recursion_Encrypt(text, key, 0, encrypted_text, 0);
}
string Vigenere_Cipher::Start_Descript(string text, string key)
{
	transform(text.begin(), text.end(), text.begin(), ::toupper);
	transform(key.begin(), key.end(), key.begin(), ::toupper);
	if (!Check_Key_And_Text(text, key))
	{
		return "Chave ou texto invalidos";
	}
	string encrypted_text = "";
	return Recursion_Descript(text, key, 0, encrypted_text, 0);
}
string Vigenere_Cipher::Recursion_Encrypt(string text, string key, int key_pos, string& encrypted_text, int position)
{
	if (position < text.length())
	{
		char letra;
		if (text[position] >= 'A' && text[position] <= 'Z')
		{
			letra = (text[position] + key[key_pos]) % 26;
			encrypted_text.push_back((letra + 'A'));
			key_pos = Key_Position(key_pos, key);
		}
		else
		{
			encrypted_text.push_back(text[position]);
		}
		position++;
		return Recursion_Encrypt(text, key, key_pos, encrypted_text, position);
	}
	return encrypted_text;
}
string Vigenere_Cipher::Recursion_Descript(string text, string key, int key_pos, string& encrypted_text, int position)
{
	if (position < text.length())
	{
		char letra;
		if (text[position] >= 'A' && text[position] <= 'Z')
		{
			letra = (text[position] - key[key_pos] + 26) % 26;
			encrypted_text.push_back((letra + 'A'));
			key_pos = Key_Position(key_pos, key);
		}
		else
		{
			encrypted_text.push_back(text[position]);
		}
		position++;
		return Recursion_Descript(text, key, key_pos, encrypted_text, position);
	}
	return encrypted_text;
}