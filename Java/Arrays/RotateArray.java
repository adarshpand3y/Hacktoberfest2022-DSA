public class RotateArray {
	
    public static void rotate(int[] arr, int d) {
            
            int i=0;
            int i1=arr.length;
            while(i<i1){
                int temp = arr[i];
                arr[i] = arr[i1-1];
                arr[i1-1] = temp;
                i1--;
                i++;
            }
            
            int j=arr.length-d;
            int j2=arr.length-1;
            while(j<j2){
                int temp = arr[j];
                arr[j] = arr[j2];
                arr[j2] = temp;
                j2--;
                j++;
            }
            
            int k=0;
            int m = arr.length-1-d;
            while(k<m){
                int temp = arr[m];
                arr[m] = arr[k];
                arr[k] = temp;
                m--;
                k++;
            }
            
        }
    
        public static void main(String[] args) {
            // TODO Auto-generated method stub
    
        }
    
    }
    