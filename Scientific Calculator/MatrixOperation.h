#ifndef MATRIXOPERATION_H_INCLUDED

#define MATRIXOPERATION_H_INCLUDED

#include<iostream>

using namespace std;

class MatrixCalculate
{
protected:
    double mat[100][100];
    double row;
    double col;
public:
    MatrixCalculate();
    MatrixCalculate(double ,double );
    friend istream& operator>>(istream& ,MatrixCalculate& );
    friend ostream& operator<<(ostream& ,const MatrixCalculate& );
    MatrixCalculate operator+(MatrixCalculate& );
    MatrixCalculate operator-(MatrixCalculate& );
    MatrixCalculate operator*(MatrixCalculate& );
};
MatrixCalculate::MatrixCalculate()
{
    row=0;
    col=0;
}
MatrixCalculate::MatrixCalculate(double r,double c)
{
    row=r;
    col=c;
}
istream& operator>>(istream& in,MatrixCalculate& z)
{
    cout << "How many rows\n";
    in>>z.row;
    cout << "How many column\n";
    in>>z.col;
    cout << "Enter the element\n";
    for(int i=0; i<z.row; i++)
        for(int j=0; j<z.col; j++)
            in>>z.mat[i][j];
    return in;
}
ostream& operator<<(ostream& out,const MatrixCalculate& z)
{
    for(int i=0; i<z.row; i++)
    {
        for(int j=0; j<z.col; j++)
        {
            out << z.mat[i][j] << ' ';
        }
        out << "\n";
    }
    return out;
}
MatrixCalculate MatrixCalculate::operator+(MatrixCalculate& z)
{
    MatrixCalculate temp(row,col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            temp.mat[i][j]=mat[i][j]+z.mat[i][j];
        }
    }
    return temp;

}

MatrixCalculate MatrixCalculate::operator-(MatrixCalculate& z)
{
    MatrixCalculate sub(row,col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            sub.mat[i][j]=mat[i][j]-z.mat[i][j];
    }
    return sub;

}
MatrixCalculate MatrixCalculate::operator*(MatrixCalculate& z)
{

    MatrixCalculate temp(row,z.col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<z.col; j++)
        {
            temp.mat[i][j]=0;
            for(int k=0; k<col; k++)
            {
                temp.mat[i][j]+=mat[i][k]*z.mat[k][i];
            }
        }
    }
    return temp;
}


#endif // MATRIXOPERATION_H_INCLUDED
