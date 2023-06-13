#include "Home_Menu.h"

Home_Menu::Home_Menu()
{
    cv = new Vigenere_Cipher();
}

Home_Menu::~Home_Menu()
{
}

void Home_Menu::Start_Menu()
{
    op = 0;
    do
    {
        cout << "Cifra De Vigenere\nDigite\n 1 - Encriptar\n 2 - Descriptar\n 3 - Sair\nInsira aqui: ";
        cin >> op;
        system("cls");
        switch (op)
        {
        case 1:
            Encrypt_Menu();
            break;
        case 2:
            Descrypt_Menu();
            break;
        case 3:
            cout << "Obrigado por utilizar o programa - Cifra De Vigenere\n";
            system("pause");
            break;
        default:
            cout << "Opcao invalida\nInsira uma opcao valida!\n\n";
            system("pause");
            break;
        }
        system("cls");
    } while (op != 3);
    op = 0;
}

void Home_Menu::Encrypt_Menu()
{
    op = 0;
    do
    {
        cout << "Cifra De Vigenere\nEncriptar\n"
            << mode_of_use_and_rules
            << "Insira o texto para encriptar:\n"; cin.ignore();
        getline(cin, text);
        cout << "\n\nInsira a chave para encriptar:\n"; cin.ignore();
        getline(cin, key);
        cout << "\n\nResultdo d encriptacao:\n"<<cv->Start_Descript(text,key)<<endl<<endl;
        system("pause");
        system("cls");
        do
        {
            cout << "Digite\n 1 - Encriptar\n 2 - voltar\nInsira aqui: ";
            cin >> op;
            if (op != 1 && op != 2) 
            {
                cout << "Opcao invalida\nInsira uma opcao valida!\n\n";
                system("pause");
            }
            system("cls");
        } while (op != 1 && op != 2);
    } while (op != 2);
    key = "";
    text = "";
    op = 0;
}

void Home_Menu::Descrypt_Menu()
{
    op = 0;
    do
    {
        cout << "Cifra De Vigenere\Descriptar\n"
            << mode_of_use_and_rules
            << "Insira o texto para descriptar:\n"; cin.ignore();
        getline(cin, text);
        cout << "\n\nInsira a chave para descriptar:\n"; cin.ignore();
        getline(cin, key);
        cout << "\n\nResultdo d encriptacao:\n" << cv->Start_Encrypt(text, key) << endl << endl;
        system("pause");
        system("cls");
        do
        {
            cout << "Digite\n 1 - Descriptar\n 2 - voltar\nInsira aqui: ";
            cin >> op;
            if (op != 1 && op != 2)
            {
                cout << "Opcao invalida\nInsira uma opcao valida!\n\n";
                system("pause");
            }
            system("cls");
        } while (op != 1 && op != 2);
    } while (op != 2);
    key = "";
    text = "";
    op = 0;
}
