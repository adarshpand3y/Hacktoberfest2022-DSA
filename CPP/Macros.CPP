#include<iostream>

# define name "Chirag"
# define area(x) x*x
# define max 10

using namespace std;

int main()
{
    float x;

    cout << "This Computer belongs to :- " << name << endl << "Enter value (maximum value=" << max << ") :- ";
    cin >> x;
    cout << endl << "Area :- " << area(x) << endl;

    return 0;
}
