#ifndef PERMUTATIONCOMBINATION_H_INCLUDED

#define PERMUTATIONCOMBINATION_H_INCLUDED

#include<iostream>

using namespace std;

class base
{
public:
    int n;
    int r;
    int p;
    int c;
    int l;
    int q;
    int m;
public:
    int fact(int j);
    void InPut();

};
void base::InPut()
{
    cout << "Enter the n\n";
    cin>>n;
    cout << "Enter the r\n";
    cin>>r;
}
class permute:public base
{
public:
    void permutecalculation();
    void permuteDisplay()
    {
        cout << "Result="<<q/l<<endl;
    }
};
int base::fact(int j)
{
    int f=1;
    for(int i=j; i>0; i--)
        f=f*i;
    return f;
}
void permute::permutecalculation()
{
    q=fact(n);
    c=n-r;
    l=fact(c);
}
class combine:public base
{
public:
    void combinecalculation();
    void combineDisplay();
};

void combine::combinecalculation()
{
     q=fact(n);
    c=n-r;
    l=fact(c);
    m=fact(r);
}
void combine::combineDisplay()
{
    int a=l*m;
    cout << "Result="<<q/a<<endl;
}


#endif // PERMUTATIONCOMBINATION_H_INCLUDED
