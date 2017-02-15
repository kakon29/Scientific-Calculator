#ifndef NUMBERBASESYSTEM_H_INCLUDED

#define NUMBERBASESYSTEM_H_INCLUDED

#include<iostream>

#include "BinaryConversion.h"

#include "OctalConversion.h"

#include "HexConversion.h"

using namespace std;

class  Decimal
{
protected:
    int n;
    int a[100];
    int k;
    int base;

public:
    void InPut();
    void Calculation();
};
void Decimal::InPut()
{
    cout << "Enter the decimal number\n";
    cin>>n;
    cout << "Enter the required base\n";
    cin>>base;
}
void Decimal::Calculation()
{
    k=0;
    while(n!=0)
    {
        a[k]=n%base;
        n=n/base;
        k++;
    }
}
class Decimal_To_Octal:public Decimal
{
public:
    void Octal_Display()
    {
        cout<<"Octal=";
        for(int i=k-1; i>=0; i--)
            cout<<a[i];
        cout<<endl<<endl;
    }

};
class Decimal_To_Binary:public Decimal
{
public:
    void Binary_Display()
    {
        cout<<"Binary=";
        for(int i=k-1; i>=0; i--)
            cout<<a[i];
        cout<<endl<<endl;
    }

};
class Decimal_To_Hexadecimal:public Decimal
{
public:
    void Hex_Display()
    {
        cout<<"Hexadecimal=";
        for(int i=k-1; i>=0; i--)
        {
            if(a[i]==10)
                cout<<"A";
            else if(a[i]==11)
                cout << "B";
            else if(a[i]==12)
                cout << "C";
            else if(a[i]==13)
                cout << "D";
            else if(a[i]==14)
                cout << "E";
            else if(a[i]==15)
                cout << "F";
            else
                cout << a[i];
        }

        cout<<endl<<endl;
    }

};


#endif // NUMBERBASESYSTEM_H_INCLUDED
