#include<iostream> 
#include<math.h>

using namespace std;

void main()
{
    system("chcp 1251 >> null");

    int a;
    cout << "Введите число" << endl;
    cin >> a;

    if (a > 7)
    {
        cout << "Привет!" << endl;
    }

    const string name = "Вячеслав";
    string input_name;
    cout << "\nВведите ваше имя" << endl;
    cin >> input_name;

    if (input_name == name)
    {
        cout << "Привет, " << input_name;
    }
    else
    {
        cout << "Нет такого имени ";
    }

    cout << "\n\nВведите размер массива ";
    int length, i;
    cin >> length;

    int* array = new int[length];
    for (i = 0;i < length;i++)
    {
        cout << "Элемент массива " << i + 1 << " = ";
        cin >> array[i];
    }
    cout << "\nЭлементы массива кратных трем = ";
    int count = 0;
    for (i = 0;i < length;i++)
    {
        if (array[i] % 3 == 0)
        {
            cout << array[i] << " ";
            count++;
        }

    }
    cout << "\nКоличество элементов кратных трем = " << count;
}