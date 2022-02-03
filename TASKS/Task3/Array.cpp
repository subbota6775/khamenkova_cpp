#include<iostream>
#include<math.h>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
   
    cout << "Введите размер массива "; 
    int length,i;
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