#include "Cifra_De_Vigenere.h"

//Cifra_De_Vigenere::Cifra_De_Vigenere()
//{
//}
//Cifra_De_Vigenere::~Cifra_De_Vigenere()
//{
//}
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//string Cifra_De_Vigenere::generateKey(string str, string key)
//{
//    int x = str.size();
//    for (int i = 0; ; i++)
//    {
//        if (x == i)
//            i = 0;
//        if (key.size() == str.size())
//            break;
//        key.push_back(key[i]);
//    }
//    return key;
//}
//string Cifra_De_Vigenere::cipherText(string str, string key)
//{
//    string cipher_text;
//    for (int i = 0; i < str.size(); i++)
//    {
//        char x = (str[i] + key[i]) % 26;
//        x += 'A';
//        cipher_text.push_back(x);
//    }
//    return cipher_text;
//}
//string Cifra_De_Vigenere::originalText(string cipher_text, string key)
//{
//    string orig_text;
//    for (int i = 0; i < cipher_text.size(); i++)
//    {
//        char x = (cipher_text[i] - key[i] + 26) % 26;
//        x += 'A';
//        orig_text.push_back(x);
//    }
//    return orig_text;
//}
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//string Cifra_De_Vigenere::Criar_Cifra(string frase, string chave)
//{
//	string cifra = "";
//	char letra = 0;
//	for (int i = 0; i < frase.length(); i++)
//	{
//		letra = (frase[i] + chave[i]) % tamanho;
//		cifra.push_back((letra + 'A'));
//	}
//	return cifra;
//}
//string Cifra_De_Vigenere::Decifrar_Cifra(string frase, string chave)
//{
//	string cifra = "";
//	char letra = 0;
//	int pos_chave = 0;
//	for (int i = 0; i < frase.length(); i++)
//	{
//		letra = (frase[i] - chave[i] + tamanho) % tamanho;
//		cifra.push_back((letra + 'A'));
//	}
//	return cifra;
//}
//string Cifra_De_Vigenere::Cifra_Para_O_Tamanho_Da_Frase(string frase, string chave)
//{
//	string aux_chave;
//	int pos_chave = 0;
//	for(int i=0;i<frase.length();i++)
//	{
//		aux_chave.push_back(chave[pos_chave]);
//		if (pos_chave < chave.length() - 1)
//		{
//			pos_chave++;
//		}
//		else
//		{
//			pos_chave = 0;
//		}
//	}
//	return aux_chave;
//}
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//string Cifra_De_Vigenere::Encriptar(string texto, string chave)
//{
//	transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
//	transform(chave.begin(), chave.end(), chave.begin(), ::toupper);
//	string texto_encriptado = "";
//	char letra;
//	int pos_chave = 0;
//	for (int i = 0; i < texto.length(); i++)
//	{ 
//		if (texto[i] >= 'A' && texto[i] <= 'Z') 
//		{
//			letra = (texto[i] + chave[pos_chave]) % 26;
//			texto_encriptado.push_back((letra + 'A'));
//			Posicao_Na_Chave(pos_chave, chave);
//		}
//		else 
//		{
//			texto_encriptado.push_back(texto[i]);
//		}
//	}
//	return texto_encriptado;
//}
//string Cifra_De_Vigenere::Descriptar(string texto, string chave)
//{
//	transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
//	transform(chave.begin(), chave.end(), chave.begin(), ::toupper);
//	string texto_descriptado = "";
//	char letra;
//	int pos_chave = 0;
//	for (int i = 0; i < texto.length(); i++)
//	{
//		if (texto[i] >= 'A' && texto[i] <= 'Z')
//		{
//			letra = (texto[i] - chave[pos_chave] + 26) % 26;
//			texto_descriptado.push_back((letra + 'A'));
//			Posicao_Na_Chave(pos_chave, chave);
//		}
//		else
//		{
//			texto_descriptado.push_back(texto[i]);
//		}
//	}
//	return texto_descriptado;
//}
//int Cifra_De_Vigenere::Posicao_Na_Chave(int pos_chave, string chave)
//{
//	do
//	{
//		pos_chave++;
//		if (pos_chave >= chave.length() - 1)
//		{
//			pos_chave = 0;
//		}
//	} while (chave[pos_chave] < 'A' && chave[pos_chave] > 'Z');
//	return pos_chave;
//}
//string Cifra_De_Vigenere::Recursao_Encriptar(string texto, string chave, int pos_chave, string& texto_encriptado, int posicao)
//{
//	if (posicao < texto.length())
//	{
//		char letra;
//		if (texto[posicao] >= 'A' && texto[posicao] <= 'Z')
//		{
//			letra = (texto[posicao] + chave[pos_chave]) % 26;
//			texto_encriptado.push_back((letra + 'A'));
//			pos_chave = Posicao_Na_Chave(pos_chave, chave);
//		}
//		else
//		{
//			texto_encriptado.push_back(texto[posicao]);
//		}
//		posicao++;
//		return Recursao_Encriptar(texto, chave, pos_chave, texto_encriptado, posicao);
//	}
//	return texto_encriptado;
//}
//string Cifra_De_Vigenere::Recursao_Descriptar(string texto, string chave, int pos_chave, string &texto_encriptado, int posicao)
//{
//	if (posicao < texto.length())
//	{
//		char letra;
//		if (texto[posicao] >= 'A' && texto[posicao] <= 'Z')
//		{
//			letra = (texto[posicao] - chave[pos_chave] + 26) % 26;
//			texto_encriptado.push_back((letra + 'A'));
//			pos_chave = Posicao_Na_Chave(pos_chave, chave);
//		}
//		else
//		{
//			texto_encriptado.push_back(texto[posicao]);
//		}
//		posicao++;
//		return Recursao_Descriptar(texto, chave, pos_chave, texto_encriptado, posicao);
//	}
//	return texto_encriptado;
//}
//string Cifra_De_Vigenere::Inicia_Encriptar(string texto, string chave)
//{
//	transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
//	transform(chave.begin(), chave.end(), chave.begin(), ::toupper);
//	if (!Verifica_Chave_E_Texto(texto,chave))
//	{
//		return "Chave ou texto invalidos";
//	}
//	string texto_encriptado = "";
//	cout << "\n\nencriptando\n\n";
//	return Recursao_Encriptar(texto, chave, 0, texto_encriptado, 0);
//}
//string Cifra_De_Vigenere::Inicia_Descriptar(string texto, string chave)
//{
//	transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
//	transform(chave.begin(), chave.end(), chave.begin(), ::toupper);
//	if (!Verifica_Chave_E_Texto(texto, chave))
//	{
//		return "Chave ou texto invalidos";
//	}
//	string texto_encriptado = "";
//	return Recursao_Descriptar(texto, chave, 0, texto_encriptado, 0);
//}
//
//bool Cifra_De_Vigenere::Verifica_Chave_E_Texto(string texto, string chave)
//{
//	for (int i = 0; i <= chave.length();i++) 
//	{
//		if (i >= chave.length()) 
//		{
//			return false;
//		}
//		if (chave[i] >= 'A' && chave[i] <= 'Z') 
//		{
//			break;
//		}
//	}
//	for (int i = 0; i <= texto.length(); i++)
//	{
//		if (i >= texto.length())
//		{
//			return false;
//		}
//		if (texto[i] >= 'A' && texto[i] <= 'Z')
//		{
//			break;
//		}
//	}
//	return true;
//}