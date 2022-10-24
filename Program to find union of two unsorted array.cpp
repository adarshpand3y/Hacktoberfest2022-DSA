#include<iostream>
using namespace std;

int main()
{
  int n1,n2,i,j,flag;
  cout<<"Enter the no. of elements of the 1st array: ";
  cin>>n1;
  
  /* declaring arr1 of size n1 */
  int arr1[n1];
  cout<<"\nEnter the elements of the 1st array: ";
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  
  cout<<"\nEnter the no. of elements of the 2nd array: ";
  cin>>n2;
  
  /* declaring arr2 of size n2 */
  int arr2[n2];
  cout<<"\nEnter the elements of the 2nd array: ";
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
  
  /* printing elements that are either in array1 or in array2 */
  cout<<"\nUnion of the two arrays: ";
  
  /* First print all the elements of array1 */
  for(i=0;i<n1;i++)
  {
    cout<<arr1[i]<<" ";
  }
  
  /* Then print all the elements that are in array2 but not in array1 */
  for(j=0;j<n2;j++)
  {
    flag=0;
    for(i=0;i<n1;i++)
    {
      if(arr1[i]==arr2[j])
      {
        flag=1;
        break;
      }
    }
    /* flag!=1 means element of array2 is not present in array1 */
    if(flag!=1)
    {
      cout<<arr2[j]<<" ";
    }
    
  }
  
  return 0;
}
