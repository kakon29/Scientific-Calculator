/*
Nahid Hasan Kakon
Dept:CSE
Roll:1207029
*/
#include <iostream>

#include "ArithMaticOperation.h"

#include "MatrixOperation.h"

#include "SimpleMath.h"

#include "NumberBaseSystem.h"

#include "PermutationCombination.h"

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cout << "\n1-matrix\n2-simplemath\n3-NumberBaseSystem\n4-permutecombine\n5-ArithmaticOperation\n6-exit()\n";
        cin>>n;
        if(n==1)
        {
            MatrixCalculate ob[10],sum;

            while(1)
            {
                cout<<"\n\n\n1-Add\n2-Sub\n3-Mul\n4-exit()\n";
                int n;
                int i;
                cin>>i;
                if(i==1)
                {
                    cout << "How many matrix you want to add\n";
                    cin>>n;
                    cout << "Give the information of matrix no 1\n";
                    cin>>sum;
                    for(int i=0; i<n-1; i++)
                    {
                        cout << "Give the information of matrix no "<<i+2<<"\n";
                        cin>>ob[i];
                        sum=sum+ob[i];
                    }
                    cout<<"After Adding The Matrix is = \n"<<sum;

                }
                else  if(i==2)
                {
                    cout << "How many matrix you want to Subtract\n";
                    cin>>n;
                    cout << "Give the information of matrix no 1\n";
                    cin>>sum;
                    for(int i=0; i<n-1; i++)
                    {
                        cout << "Give the information of matrix no "<<i+2<<"\n";
                        cin>>ob[i];
                        sum=sum-ob[i];
                    }
                    cout<<"After Subtracting The Matrix is = \n"<<sum;

                }
                else if(i==3)
                {
                    cout << "How many matrix you want to Multiple\n";
                    cin>>n;
                    cout << "Give the information of matrix no 1\n";
                    cin>>sum;
                    for(int i=0; i<n-1; i++)
                    {
                        cout << "Give the information of matrix no "<<i+2<<"\n";
                        cin>>ob[i];
                        sum=sum*ob[i];
                    }
                    cout<<"After Multiplying The Matrix is = \n"<<sum;

                }
                else if(i==4)
                    break;
            }
        }
        else if(n==2)
        {
            Base *p;
            Angle A;
            Logarithm L;
            Exponential E;
            Factorial F;
            Squart S;
            Power P;
            Inverse I;
            Cuber C;
            int n;
            while(1)
            {
                cout << "1-Angle\n2-logarithm\n3-exponential\n4-factorial\n5-sqrt()\n6-pow()\n7-inverse number\n8-cube root\n9-exit()\n";
                cin>>n;
                if(n==1)
                {
                    p=&A;
                    A.AngleInput();
                    p->calculate();
                    A.AngleDisplay();

                }
                else if(n==2)
                {
                    p=&L;
                    L.LogInput();
                    p->calculate();
                    L.LogDisplay();
                }
                else if(n==3)
                {
                    p=&E;
                    E.ExpInput();
                    p->calculate();
                    E.ExpDisplay();
                }
                else if(n==4)
                {
                    p=&F;
                    F.FactInput();
                    p->calculate();
                    F.FactDisplay();
                }
                else if(n==5)
                {
                    p=&S;
                    S.SquInput();
                    p->calculate();
                    S.SquDisplay();
                }
                else if(n==6)
                {
                    p=&P;
                    P.PowerInput();
                    p->calculate();
                    P.PowerDisplay();
                }
                else if(n==7)
                {
                    p=&I;
                    I.InverseInput();
                    p->calculate();
                    I.InverseDisplay();
                }
                else if(n==8)
                {
                    p=&C;
                    C.CubeInput();
                    p->calculate();
                    C.CubeDisplay();
                }
                else if(n==9)
                    break;
            }
        }
        else if(n==3)
        {
            while(1)
            {
                cout << "What type you want to input\n";
                cout << "1-Dec\n2-Bin\n3-Oct\n4-Hex\n5-exit()\n";
                int n;
                cin>>n;
                if(n==1)
                {
                    while(1)
                    {
                        cout << "1-Decimal to Binary\n2-Decimal to Octal\n3-Decimal to Hexadecimal\n4-exit()\n";
                        int r;
                        cin>>r;
                        if(r==1)
                        {
                            Decimal_To_Binary ob;
                            ob.InPut();
                            ob.Calculation();
                            ob.Binary_Display();
                        }
                        else if(r==2)
                        {
                            Decimal_To_Octal ob;
                            ob.InPut();
                            ob.Calculation();
                            ob.Octal_Display();
                        }
                        else if(r==3)
                        {
                            Decimal_To_Hexadecimal ob;
                            ob.InPut();
                            ob.Calculation();
                            ob.Hex_Display();
                        }
                        else if(r==4)
                            break;
                    }

                }
                else if(n==2)
                {
                    while(1)
                    {
                        cout << "1-Binary to Decimal\n2-Binary to Octal\n3-Binary to Hexadecimal\n4-exit()\n";
                        int r;
                        cin>>r;
                        if(r==1)
                        {
                            Binary_To_Decimal ob;
                            ob.InPut();
                            ob.Dec_Calculation();
                            ob.Display();
                        }
                        else if(r==2)
                        {
                            Binary_To_Octal ob;
                            ob.InPut();
                            ob.Dec_Calculation();
                            ob.Calculation();
                            ob.Octal_Display();
                        }
                        else if(r==3)
                        {
                            Binary_To_Hexadecimal ob;
                            ob.InPut();
                            ob.Dec_Calculation();
                            ob.Calculation();
                            ob.Hex_Display();
                        }
                        else if(r==4)
                            break;
                    }
                }
                else if(n==3)
                {
                    while(1)
                    {
                        cout << "1-Octal to Decimal\n2-Octal to Binary\n3-Octal to Hexadecimal\n4-exit()\n";
                        int r;
                        cin>>r;
                        if(r==1)
                        {
                            Octal_To_Decimal ob;
                            ob.InPut();
                            ob.Dec_Calculation();
                            ob.Display();
                        }
                        else if(r==2)
                        {
                            Octal_To_Binary ob;
                            ob.InPut();
                            ob.Dec_Calculation();
                            ob.Calculation();
                            ob.Binary_Display();
                        }
                        else if(r==3)
                        {
                            Octal_To_Hexadecimal ob;
                            ob.InPut();
                            ob.Dec_Calculation();
                            ob.Calculation();
                            ob.Hex_Display();
                        }
                        else if(r==4)
                            break;
                    }
                }
                else if(n==4)
                {
                    while(1)
                    {
                        cout << "1-Hex to Decimal\n2-Hex to Binary\n3-Hex to Octal\n4-exit()\n";
                        int r;
                        cin>>r;
                        if(r==1)
                        {
                            Hex_To_Decimal ob;
                            ob.InPut();
                            ob.SetValue();
                            ob.Dec_Calculation();
                            ob.Display();
                        }
                        else if(r==2)
                        {
                            Hex_To_Binary ob;
                            ob.InPut();
                            ob.SetValue();
                            ob.Dec_Calculation();
                            ob.Calculation();
                            ob.Binary_Display();
                        }
                        else if(r==3)
                        {
                            Hex_To_Octal ob;
                            ob.InPut();
                            ob.SetValue();
                            ob.Dec_Calculation();
                            ob.Calculation();
                            ob.Octal_Display();
                        }
                        else if(r==4)
                            break;
                    }
                }
                else if(n==5)
                    break;
            }
        }
        else if(n==4)
        {
            while(1)
            {
                cout << "1-npr\n2-ncr\n3-exit()\n";
                int n;
                cin>>n;
                if(n==1)
                {

                    permute ob;
                    ob.InPut();
                    ob.permutecalculation();
                    ob.permuteDisplay();
                }
                else if(n==2)
                {
                    combine ob;
                    ob.InPut();
                    ob.combinecalculation();
                    ob.combineDisplay();
                }
                else if(n==3)
                    break;
            }
        }
        else if(n==5)
        {
            int Choice,A,S,M,D,Mo;
            while(1)
            {
                cout << "1-Add\n"<<"2-Sub\n"<<"3-Mul\n"<<"4-Div\n"<<"5-mod\n6-exit()\n";
                cin>>Choice;
                if(Choice==1)
                {
                    cout << "How many term you add ?\n";
                    cin>>A;
                    AddOperation Aob[100],Asum;
                    cin>>Asum;
                    for(int i=0; i<A-1; i++)
                    {
                        cin>>Aob[i];
                        Asum=Asum+Aob[i];

                    }
                    cout << Asum;

                }
                else if (Choice==2)
                {
                    cout << "How many term you subtract ?\n";
                    cin>>S;
                    SubOperation Sob[100],Ssub;
                    cin>>Ssub;
                    for(int i=0; i<S-1; i++)
                    {
                        cin>>Sob[i];
                        Ssub=Ssub-Sob[i];

                    }
                    cout << Ssub;
                }
                else if(Choice==3)
                {
                    cout << "How many term you Multiplication ?\n";
                    cin>>M;
                    MultiOperation Mob[100],Mmul;
                    cin>>Mmul;
                    for(int i=0; i<M-1; i++)
                    {
                        cin>>Mob[i];
                        Mmul=Mmul*Mob[i];

                    }
                    cout << Mmul;
                }
                else if(Choice==4)
                {
                    cout << "How many term you divide ?\n";
                    cin>>D;
                    DividesOperation Dob[100],Ddiv;
                    cin>>Ddiv;
                    for(int i=0; i<D-1; i++)
                    {
                        cin>>Dob[i];
                        Ddiv=Ddiv/Dob[i];

                    }
                    cout << Ddiv;
                }
                else if(Choice==5)
                {
                    cout << "How many term you modulas\n";
                    cin>>Mo;
                    ModOperation Moob[100],Mood;
                    cin>>Mood;
                    for(int i=0; i<Mo-1; i++)
                    {
                        cin>>Moob[i];
                        Mood=Mood%Moob[i];

                    }
                    cout<<Mood;
                }
                else if(Choice==6)
                    break;

            }
        }
        else if(n==6)
            break;

    }

}



