#include<bits/stdc++.h>
void reverse(string &str){
  stack<int>st;
  for(int i=0;i<str.length();i++){
    st.push(str[i]);
  }
  for(int i=0;i<str.length();i++){
    str[i]=st.top();
    st.pop();
  }
}
using namespace std;
int main(){
string str;
 cin>> str;
  reverse(str);
  cout<<str;


return 0;
}
