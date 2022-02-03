#include<iostream>

using namespace std;

void main()
{
    system("chcp 1251 >> null");   

    const string name = "Вячеслав";
    string input_name;
    cout << "Введите ваше имя" << endl;
    cin >> input_name;

    if (input_name == name)
    {
        cout << "Привет, " << input_name;
    }
    else
    {
        cout << "Нет такого имени ";
    }
}
