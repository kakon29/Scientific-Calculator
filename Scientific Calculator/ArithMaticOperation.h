#ifndef ARITHMATICOPERATION_H_INCLUDED

#define ARITHMATICOPERATION_H_INCLUDED

#include<iostream>

using namespace std;


//Additing Numbers


class AddOperation
{
protected:
    double a1;
public:
    AddOperation();
    friend istream& operator>>(istream& ,AddOperation& );
    friend ostream& operator<<(ostream& ,const AddOperation& );
    AddOperation operator+(AddOperation );
};
AddOperation::AddOperation()
{
    a1=0;
}
istream& operator>>(istream& in,AddOperation& A)
{
    cout << "Enter the number\n";
    in>>A.a1;
    return in;
}
AddOperation AddOperation::operator+(AddOperation A)
{
    AddOperation temp;
    temp.a1=a1+A.a1;
    return temp;
}
ostream& operator<<(ostream& out,const AddOperation& A)
{
    out<<"\n" << A.a1<<"\n\n";
}


//Subtracting Number


class SubOperation
{
protected:
    double a;

public:
    double Num;
    SubOperation();
    friend istream& operator<<(istream& ,SubOperation& );
    friend ostream& operator>>(istream& ,const SubOperation& );
    SubOperation operator-(SubOperation );
};
SubOperation::SubOperation()
{
    Num=0.0;
}
istream& operator>>(istream& in,SubOperation& S)
{
    cout << "Enter the number\n";
    in>>S.Num;
    return in;
}
SubOperation SubOperation::operator-(SubOperation S)
{
    SubOperation temp;
    temp.Num=Num-S.Num;
    return temp;
}
ostream& operator<<(ostream& out,const SubOperation& S)
{
    out<< "\n"<<S.Num<<"\n\n";
    return out;
}


//Multiplication Number


class MultiOperation
{
private:
    double Number;
public:
    MultiOperation();
    friend istream& operator>>(istream& ,MultiOperation& );
    friend ostream& operator<<(ostream& ,MultiOperation& );
    MultiOperation operator*(MultiOperation );
};
MultiOperation::MultiOperation()
{
    Number=0.0;
}
istream& operator>>(istream& in,MultiOperation& M)
{
    cout << "Enter the Number\n";
    in>>M.Number;
    return in;
}
MultiOperation MultiOperation::operator*(MultiOperation M)
{
    MultiOperation temp;
    temp.Number=Number*M.Number;
    return temp;
}
ostream& operator<<(ostream& out,MultiOperation& M)
{
    out << "\n" << M.Number<<"\n\n";
    return out;
}



//Dividing Number



class DividesOperation
{
private:
    double Number;
public:
    friend istream& operator>>(istream& ,DividesOperation& );
    friend ostream& operator<<(ostream& ,const DividesOperation& );
    DividesOperation operator/(DividesOperation );
};
istream& operator>>(istream& in,DividesOperation& D)
{
    cout << "Enter the number\n";
    in>>D.Number;
    return in;
}
DividesOperation DividesOperation::operator/(DividesOperation D)
{
    DividesOperation temp;
    temp.Number=Number/D.Number;
    return temp;
}

ostream& operator<<(ostream& out,const DividesOperation& D)
{
    out<<"\n"<<D.Number<<"\n\n";
    return out;
}


//Modulas number


class ModOperation
{

public:
    int  Number;
    ModOperation();
    friend istream& operator>>(istream& ,ModOperation& );
    friend ostream& operator<<(ostream& ,const ModOperation& );
    ModOperation operator%(ModOperation );
};
ModOperation::ModOperation()
{
    Number=0;
}
istream& operator>>(istream& in,ModOperation& M)
{
    cout << "Enter the number\n";
    in>>M.Number;
    return in;
}
ModOperation ModOperation::operator%(ModOperation M)
{
    ModOperation temp;
    temp.Number=Number%M.Number;
    return temp;
}
ostream& operator<<(ostream& out,const ModOperation& M)
{
    out << "\n"<<M.Number<<"\n\n";
    return out;
}


#endif // ARITHMATIHOPERATION_H_INCLUDED


