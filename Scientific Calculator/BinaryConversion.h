#ifndef BINARYCONVERSION_H_INCLUDED

#define BINARYCONVERSION_H_INCLUDED

#include<iostream>

using namespace std;

class Binary
{
protected:
  long  long  int a[100];
  long  long  int k;
  long  long  int n;
  long  long  int base;
  long  long  int d;
public:
    void InPut();
    void Dec_Calculation();
    void Calculation();
};
void Binary::InPut()
{
    cout << "Enter the Binary Number\n";
    cin>>n;
    cout << "Enter the required base\n";
    cin>>base;
}
void Binary::Dec_Calculation()
{
    int remainder,limit,dec=0,i=1;
    limit=n;
    while(limit!=0)
    {
        remainder=limit%10;
        limit=limit/10;
        dec+=remainder*i;
        i=i*2;
    }
    n=dec;
    d=dec;
}
void Binary::Calculation()
{
    k=0;
    while(n!=0)
    {
        a[k]=n%base;
        n=n/base;
        k++;
    }
}
class Binary_To_Octal:public Binary
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
class Binary_To_Decimal:public Binary
{
public:
    void Display()
    {
        cout << "Dec="<<d<<endl;
    }
};
class Binary_To_Hexadecimal:public Binary
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



#endif // BINARYCONVERSION_H_INCLUDED
