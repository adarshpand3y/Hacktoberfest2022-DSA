#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int len, flag = 0, l;
    char a[100];

    cout << "Enter a word :- ";
    cin >> a;

    len = strlen(a);

    for(int i=0; i<len/2; i++)
    {
        for(int j=len-1; j>=len/2; j--)
        {
            if(j == len-i-1)
            {
                if(a[i] != a[j])
                {
                    flag = 1;
                }
            }
        }
    }

    if(flag == 0)
        cout << "Palingdrome";
    else
        cout << "Not Palindrome";
}
