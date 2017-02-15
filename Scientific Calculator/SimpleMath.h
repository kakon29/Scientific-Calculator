#ifndef SIMPLEMATH_H_INCLUDED

#define SIMPLEMATH_H_INCLUDED

#include <iostream>

#include <cmath>

#define PI 3.14159265

using namespace std;

class Base
{
protected:
    double n1;
    double n;
    int n2;
public:
    void setValue(int );
    void setValue(double  );
    void setValue(double ,double );
    virtual void calculate()=0;
    double getValue();
    int getvalue();
};
class Angle:public Base
{
public:
    void calculate();
    void AngleInput();
    void AngleDisplay();
};
void Base::setValue(double r)
{
    n1=r;
}
void Angle::AngleInput()
{
    cout << "Enter the value\n";
    double r;
    cin>>r;
    setValue(r);
}
void Angle::calculate()
{
    cout << "1-cos\n2-sin\n3-tan\n4-inverse(cos)\n5-inverse(sin)\n6-inverse(tan)\n";
    int c;


    cin>>c;
    if(c==1)
        n1=cos(n1*PI/180.0);
    else if(c==2)
        n1=sin(n1*PI/180.0);
    else if(c==3)
        n1=tan(n1*PI/180.0);
    else if(c==4)
    {
        n1=cos(n1*PI/180.0);
        n1=1/n1;
    }
    else if(c==5)
    {
        n1=sin(n1*PI/180.0);
        n1=1/n1;
    }
    else if(c==6)
    {
        n1=tan(n1*PI/180.0);
        n1=1/n1;
    }


}
void Angle::AngleDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}
class Logarithm:public Base
{
public:
    void calculate();
    void LogInput();
    void LogDisplay();
};

void Logarithm::calculate()
{
    n1=log10(n1);
}
void Logarithm::LogDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}
void Logarithm::LogInput()
{
    cout << "Enter the value\n";
    double r;
    cin>>r;
    setValue(r);
}
class Exponential:public Base
{
public:
    void calculate();
    void ExpInput();
    void ExpDisplay();
};
void Exponential::ExpInput()
{
    cout << "Enter the value\n";
    double r;
    cin>>r;
    setValue(r);

}
void Exponential::calculate()
{
    n1=exp(n1);
}
void Exponential::ExpDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}
class Factorial:public Base
{
public:
    void FactInput();
    void calculate();
    void FactDisplay();
};
void Factorial::FactInput()
{
    cout << "Enter the value\n";
    int r;
    cin>>r;
    setValue(r);
}
void Base::setValue(int r)
{
    n2=r;
}
void Factorial::calculate()
{
    int f=1;
    for(int i=n2;i>0;i--)
    {
        f=f*i;
    }
    n2=f;
}
void Factorial::FactDisplay()
{
    cout << "Result = "<<n2<<endl<<endl;
}
class Squart:public Base
{
public:
    void SquInput();
    void calculate();
    void SquDisplay();
};
void Squart::SquInput()
{
    cout << "Enter The Value\n";
    double r;
    cin>>r;
    setValue(r);
}
void Squart::calculate()
{
    n1=sqrt(n1);
}
void Squart::SquDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}
class Power:public Base
{
public:
    void PowerInput();
    void calculate();
    void PowerDisplay();
};
void Power::PowerInput()
{
    cout << "Enter the base\n";
    double r;
    cin>>r;
    cout << "Enter the Power\n";
    double c;
    cin>>c;
    setValue(r,c);
}
void Base::setValue(double r,double c)
{
    n1=r;
    n=c;
}
void Power::calculate()
{
    n1=pow(n1,n);
}
void Power::PowerDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}
class Inverse:public Base
{
public:
    void InverseInput();
    void calculate();
    void InverseDisplay();
};
void Inverse::InverseInput()
{
    cout << "Enter the value\n";
    double r;
    cin>>r;
    setValue(r);
}
void Inverse::calculate()
{
    n1=1/n1;
}
void Inverse::InverseDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}
class Cuber:public Base
{
public:
    void CubeInput();
    void calculate();
    void CubeDisplay();
};
void Cuber::CubeInput()
{
    cout << "Enter the value\n";
    double r;
    cin>>r;
    setValue(r);

}
void Cuber::calculate()
{
    n1=cbrt(n1);
}
void Cuber::CubeDisplay()
{
    cout << "Result = "<<n1<<endl<<endl;
}


#endif // SIMPLEMATH_H_INCLUDED

