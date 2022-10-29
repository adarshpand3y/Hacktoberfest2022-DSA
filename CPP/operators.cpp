//Types of operators present in C++

#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"OPERATORS IN C++ :"<<endl;
    cout<<"Following are the types of operaters in c++ :-"<<endl;
    //Arithematic operators
    cout<<"The value of a + b is "<< a+b <<endl;
    cout<<"The value of a-b is "<< a-b <<endl;
    cout<<"The value of a*b is "<< a*b <<endl;
    cout<<"The value of a/b is "<< a/b <<endl;
    cout<<"The value of a%b is "<< a%b <<endl;
    cout<<"The value of a++ is "<< a++ <<endl;
    cout<<"The value of a-- is "<< a-- <<endl;
    cout<<"The value of ++a is "<< ++a <<endl;
    cout<<"The value of --a is "<< --a <<endl;
    cout<<endl;
    //assinment operaters --> used to assign values to variables
    // int a=3,b=9;
    // char d="d";

    //comparison operators
    cout<<"Following are the comparison in c++:-"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;


   //Logical '&' operators:
    cout<<"Following are the logical & operator in c++:-"<<endl;
    cout<<"The value of ((a==b) && (a<b)) logical operator is "<<((a==b) && (a<b))<<endl;

//Logical '||' operators:
    cout<<"Following are the logical || operator in c++:-"<<endl;
    cout<<"The value of ((a==b) || (a<b)) logical operator is "<<((a==b) || (a<b))<<endl;

//Logical 'not' operators:
    cout<<"Following are the logical 'not' operator in c++:-"<<endl;
    cout<<"The value of this logical 'not' operator (!(a==b)) is :"<<(!(a==b))<<endl;

    return 0;
}
