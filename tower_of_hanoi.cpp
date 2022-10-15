#include<bits/stdc++.h>
using namespace std;
void t(int n,int a, int b, int c){

    if(n>0){
        t(n-1,a,c,b);
        cout<<"("<<a<<" "<<c<<")"<<endl;
        t(n-1,b,c,a);
    }

}
int main(){

t(3,1,2,3);
return 0;
}
