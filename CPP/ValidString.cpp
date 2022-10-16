
/*
Problem Statement
You are given string 'STR' consisting solely of "{","}","(",")","[" and "]".Determine whether the parenthesis are balanced.
Sample Input 1 :
2
[()]{}{[()()]()}
[(])
Sample Output 1 :
Balanced
Not Balanced
*/
#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        char ch=expression[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
            char top=s.top();
            if((ch==')' && top=='(') || 
            (ch=='}' && top=='{') ||
            (ch==']' && top=='[')){
                s.pop();
            }
            else{
                return false;
            }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str = "[()]{}{[()()]()}";
    if(isValidParenthesis(str)){
      cout<<"String is valid"<<endl;
    }
    else{
        cout<<"Not valid"<<endl;
    }
    return 0;
}
