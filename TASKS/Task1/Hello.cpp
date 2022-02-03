#include<iostream> 

using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    cout << "Введите число" << endl;
    cin >> a;

    if (a > 7)
    {
        cout << "Привет!" << endl;
    }

}