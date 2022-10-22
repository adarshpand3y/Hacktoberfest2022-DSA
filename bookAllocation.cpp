bool isPossible(int n, int m, vector<int> time, long long int mid)
{
    //N days, M cha[ter, time seconds for each chapeter]
    
    long long int daySum = 1;
    long long int timeSum = 0;
    for(int i=0; i< m; i++){
        if(timeSum+time[i] <= mid){
            timeSum+=time[i];
        }
        else{
            daySum++;
            
            if(daySum>n || time[i]>mid){
                return false;
            }
            
            timeSum=time[i];
        }
    }
    return true;    
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{    
    // Write your code here.
    long long  s = 0;
    long long int sum =0;
    for(int i=0; i<time.size(); i++){
        sum+=time[i];
    }
    long long  e = sum;
    
    long long  ans=-1;
    while(s<=e){
        long long  mid = s + (e-s)/2;
    if (isPossible(n,m,time,mid)){
        ans = mid;
        e = mid-1;
    }else{
        s = mid+1;
    }
    }
    return ans;    
}
//