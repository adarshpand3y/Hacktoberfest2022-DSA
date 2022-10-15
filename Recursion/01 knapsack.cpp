#include <bits/stdc++.h> 
using namespace std; 
  

int knapSack(int W, int wt[], int val[], int n) 
{ 
  
    // Base Case 
    if (n == 0 || W == 0) 
        return 0; 
  

    if (wt[n] > W) 
        return knapSack(W, wt, val, n - 1); 
  
 
    else
        return max( 
            val[n] + knapSack(W - wt[n],  
                                    wt, val, n - 1), 
            knapSack(W, wt, val, n - 1)); 
} 
  
// Driver code 
int main() 
{ 

   int n;
   cin>>n;
   int W;
   cin>>W;
   int val[n];
   int wt[n];
   
   for(int i = 0 ; i < n ; i++){
   cin>>val[i];
   }
   for(int i = 0 ; i < n ; i++){
   cin>>wt[i];
   }
   
 
    cout << knapSack(W, wt, val, n); 
    return 0; 
} 
