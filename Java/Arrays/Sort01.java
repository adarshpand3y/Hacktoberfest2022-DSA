public class Sort01 {
	
public static void sort012(int[] arr){
    //Your code goes here
    int a[] = new int[arr.length];
    int nz =0; int nt = arr.length-1;
    for(int i=0; i<arr.length; i++){
        if(arr[i]==0){
            a[nz] = 0;
            nz++;
        }
        
        if(arr[i]==2){
            a[nt] = 2;
            nt--;
        }
    }
    
    
    while(nz<=nt){
        a[nz] = 1;
        nz++;
    }
    
    for(int k=0; k<arr.length; k++){
        arr[k] = a[k];
    }
}


public static void main(String[] args) {
    // TODO Auto-generated method stub

}

}