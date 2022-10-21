#include<iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c, n;
    cout << "Enter Number Of Elements :- ";
    cin >> n;

    cout << "Fibonacci Series :- " << endl;
    if (n == 1)
    {
        cout << a << endl;
    }
    else if (n == 2)
    {
        cout << a << endl << b << endl;
    }
    else
    {
        cout << a << endl << b << endl;
        for(int i=2; i<n; i++)
        {
            if(a>b)
            {
                b += a;
                cout << b << endl;
            }
            else
            {
                a += b;
                cout << a << endl;
            }
        }
    }

}
