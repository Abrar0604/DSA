#include <iostream>
#include <math.h>
using namespace std;
class Solutions
{
    public:
    int n = 5;
    void p1()
    {
        cout << "Executing P1\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    void p2()
    {
        cout << "Executing P2\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i <= j; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    void p3()
    {
        cout << "Executing P3\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i <= j; i++)
            {
                cout << i + 1;
            }
            cout << endl;
        }
        cout << endl;
    }
    void p4()
    {
        cout << "Executing P4\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i <= j; i++)
            {
                cout << j + 1;
            }
            cout << endl;
        }
        cout << endl;
    }
    void pn()
    {
        cout << "Executing Pn\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = n; i > j; i--)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    void p6()
    {
        cout << "Executing P6\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = n; i > j; i--)
            {
                cout << -i + (n + 1);
            }
            cout << endl;
        }
        cout << endl;
    }
    void p7()
    {
        cout << "Executing P7\n";
        for (int j = 0; j < n; j++)
        {
            for (int i = 1; i <= 2 * n + 1; i++)
            {
                if (i <= n + j && i >= n - j)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    void p8()
    {
        cout << "Executing P8\n";
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 1; j < 2 * n + 1; j++)
            {
                if (j >= n - i && j <= n + i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    void p9()
    {
        cout << "Executing P9\n";
        for (int i = 0; i < 2 * n - 1; i++)
        {
            if (i < n)
            {
                for (int j = 1; j < 2 * n + 1; j++)
                {
                    if (j <= n + i && j >= n - i)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            else
            {
                for (int j = 1; j < 2 * n + 1; j++)
                {
                    if (j >= n - (2 * n - 2 - i) && j <= n + (2 * n - 2 - i))
                    {
                        cout << "*";
                    }
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    void p10()
    {
        cout << "Executing P10\n";
        for (int i = 0; i < 2 * n - 1; i++)
        {
            if (i <= n)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            else
            {
                for (int j = 0; j < 2 * n - 1 - i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    void p11()
    {
        cout << "Executing P11\n";
        bool f1 = 0;
        for (int i = 0; i < n; i++)
        {
            f1 = !f1;
            bool f2 = f1;
            for (int j = 0; j <= i; j++)
            {
                cout << f2;
                f2 = !f2;
            }
            cout << endl;
        }
        cout << endl;
    }
    void p12()
    {
        cout << "Executing P12\n";
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                for(int j=0;j<n;j++)
                cout<<"*";
                cout<<endl;
            }
            else{
                for(int j=0;j<n;j++){
                    if(j==0 || j==n-1)
                    cout<<"*";
                    else
                    cout<<" ";
                }
                cout<<endl;
            }
        }
        cout << endl;
    }
    void p13(){
        cout<<"Executing P13\n";
        for(int i=0;i<2*n-1;i++){
            if(i<n){
                for(int j=0;j<=i;j++)
                cout<<"*";
                for(int j=0;j<2*n-2*(i+1);j++)
                cout<<" ";
                for(int j=0;j<=i;j++)
                cout<<"*";
                cout<<endl;
            }
            else{
                for(int j=0;j<2*n-i-1;j++)
                cout<<"*";
                for(int j=0;j<2*(i-n+1);j++)
                cout<<" ";
                for (int j=0;j<2*n-i-1;j++)
                cout<<"*";
                cout<<endl;

            }
        }
        cout<<endl;
    }
    void p14(){
        cout<<"Executing P14\n";
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int bottom=(2*n-2)-i;
                cout<<n-min(min(top,bottom),min(left,right))<<" ";
            }
            cout<<endl<<endl;
        }
            cout<<endl;
    }
};
int main()
{
    Solutions o;
    o.n = 9;
    o.p1();
    o.p2();
    o.p3();
    o.p4();
    o.pn();
    o.p6();
    o.p7();
    o.p8();
    o.p9();
    o.p10();
    o.p11();
    o.p12();
    o.p13();
    o.p14();
}