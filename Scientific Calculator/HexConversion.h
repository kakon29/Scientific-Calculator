#ifndef HEXCONVERSION_H_INCLUDED

#define HEXCONVERSION_H_INCLUDED

#include<iostream>

#include<cmath>

#include<cstring>

using namespace std;

class Hex
{
protected:
    char str[100];
    int r[100];
    int n;
    int a[100];
    int k;
    int base;
    int d;
public:
    void Dec_Calculation();
    void SetValue();
    void InPut();
    void Calculation();
};
void Hex::InPut()
{
    cout << "Enter the Hexadecimal Value\n";
    cin>>str;
    cout<<"Enter The Base\n";
    cin>>base;
}
void Hex::SetValue()
{
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='A')
            r[i]=10;
        else if(str[i]=='B')
            r[i]=11;
        else if(str[i]=='C')
            r[i]=12;
        else if(str[i]=='D')
            r[i]=13;
        else if(str[i]=='E')
            r[i]=14;
        else if(str[i]=='F')
            r[i]=15;
        else
            r[i]=str[i]-'0';
    }
}
void Hex::Dec_Calculation()
{
    int l;
    l=strlen(str);
    int sum=0;
    int k=l-1;
    for(int i=0; i<l; i++)
    {
      sum=sum+(r[i]*pow(16,k));
      k--;
    }
    n=sum;
    d=sum;

}
void Hex::Calculation()
{
    k=0;
    while(n!=0)
    {
        a[k]=n%base;
        n=n/base;
        k++;
    }
}
class Hex_To_Octal:public Hex
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
class Hex_To_Decimal:public Hex
{
public:
    void Display()
    {
        cout << "Dec="<<d<<endl;
    }
};

class Hex_To_Binary:public Hex
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

#endif // HEXCONVERSION_H_INCLUDED
