// Kalkul.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "kalk.h"
#include <typeinfo>
using namespace std;

int main()
{
    
    double x = 0.0;
    double y = 0.0;
    double res = 0.0;
    char oper = '+';
    cout << "Consol\n\nMake datatype great again!\n\n";
    kalk c;
    while (true)
    {
        
        cin >> x >> oper >> y;
        //cout << cin.fail() << "\n";
        switch (cin.fail())
        {
        case 0:
            if (oper == ':' and y == 0)
            {
                cout << "Attempted to divide by Zero. \n";
                continue;
            }
            else
            {
                res = c.Calculate(x, oper, y);
                cout << "res: " << res << "\n";
                continue;
            }
        case 1:
            cin.clear();
            cin.ignore(32767,'\n');
            //cout << "case 1. cin.fail = " << cin.fail() << "\n";
            cout << "Data type error!\n";
            continue;
        }   
    }   
    return 0;

}