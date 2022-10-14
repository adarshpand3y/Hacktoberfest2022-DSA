public class Merge2SortedArray {
    public static int[] merge(int arr1[], int arr2[]) {
    	//Your code goes here
        int i=0;
        int j=0;
        int n1 = arr1.length;
        int n2 = arr2.length;
        int n3 = (n1+n2);
        int arr[] = new int[n3];
        int k=0;
        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
             k++;   
            i++;
            
        }else{
            arr[k] = arr2[j];
            k++;    
            j++;
        }
            
        }
        
        while(i<n1){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        
        while(j<n2){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        
        return arr;
            
    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}



    
}
