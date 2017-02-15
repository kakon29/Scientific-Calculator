#ifndef OCTALCONVERSION_H_INCLUDED

#define OCTALCONVERSION_H_INCLUDED

#include<iostream>

#include<cmath>

using namespace std;

class Octal
{
protected:
    int n;
    int base;
    int a[100];
    int k;
    int l;
    int m;
    int d;
public:
    void Dec_Calculation();
    void Calculation();
    void InPut();
};
void Octal::InPut()
{
    cout << "Enter the octal number\n";
    cin>>n;
    cout << "Enter the base\n";
    cin>>base;
}
void Octal::Calculation()
{
    k=0;
    while(n!=0)
    {
        a[k]=n%base;
        n=n/base;
        k++;
    }
}
void Octal::Dec_Calculation()
{
    int num;
    num=n;
    int r;
    int sum=0;
    int l=0;
    while(num!=0)
    {
        r=num%10;
        num/=10;
        sum=sum+(r*pow(8,l));
        l++;

    }
    d=sum;
    n=sum;

}
class Octal_To_Binary:public Octal
{
public:
    void Binary_Display()
    {
        cout<<"Bin=";
        for(int i=k-1; i>=0; i--)
            cout<<a[i];
        cout<<endl<<endl;
    }

};
class Octal_To_Decimal:public Octal
{
public:
    void Display()
    {
        cout << "Dec="<<d<<endl;
    }
};
class Octal_To_Hexadecimal:public Octal
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



#endif // OCTALCONVERSION_H_INCLUDED
