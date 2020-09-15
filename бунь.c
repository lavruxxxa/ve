// лаба.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{   
    int ms[]= { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < 10/2; i++)
    {
        int a;
            a = ms[10 - i];
            ms[10 - i] = ms[i];
            ms[i] = a;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ms[i] << " ";
    }
    return 0;
}