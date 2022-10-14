#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    int n=0,i=0,j=0,k=0;
    printf("Input Order of equations (n*n) : ");
    scanf("%d",&n); 
    double arr[n][n+1], ans[n];
    for (i=0;i<n;i++){
        printf("\n%d> ",(i+1));
        for(j=0;j<n+1;j++){
            if(j!=n)
                printf("Input Value of %c%d : ",(65+j),(i+1));
            else
                printf("Input Value of OUT : ");
            scanf("%lf",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (abs(arr[i][i])<abs(arr[j][i])){
                for (k=0;k<n+1;k++){
                    double tmp=arr[i][k];
                    arr[i][k]=arr[j][k];
                    arr[j][k]=tmp;
                }
            }
        }
    }
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            double tmp=arr[j][i]/arr[i][i];
            for (k=0;k<=n;k++){
                arr[j][k]=arr[j][k]-tmp*arr[i][k];
            }
        }
    }
    for (i=n-1;i>=0;i--){
        ans[i]=arr[i][n];
        for (j=i+1;j<n;j++){
            if (j!=i){
                ans[i]=ans[i]-arr[i][j]*ans[j];
            }
        }
        ans[i]=ans[i]/arr[i][i];
    }
    printf("\nSolution:-");
    for(i=n-1;i>=0;i--){
        printf("\nx%d = %lf",n-i,ans[i]);
    }
}