#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
//cin.ignore();
getline(cin, str);
//cin>>str;
int s = 0;

int n = str.length();
int e = n-1;

// for(int i=0;i<n;i++){
//       strr.push_back(s[i]);
// }

while(s<e){
    // if(str == ' ' && str == '\0'){

    
    swap(str[s++],str[e--]);
    
}

cout<<str<<endl;



return 0;
}
