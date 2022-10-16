public class bubblesort {
    void sort(int arr[]){
        int n = arr.length;

        for(int i=0 ; i<n-1 ; i++){
            for(int j=0 ; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    void print(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }

    void display(){

    }

    public static void main(String[] args){
        bubblesort b = new bubblesort();
        int arr[] = {64,34,24,12,11,90};
        b.sort(arr);
        b.print(arr);

    }
}
