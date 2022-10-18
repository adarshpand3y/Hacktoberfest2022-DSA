public class orderAgnosticBinarySearch {
    public static void main(String[] args) {
        int[] arr = {90,79,18,12,6,4,3,1};
        int target = 6;
        int ans = orderAgnosticBS(arr,target);
        System.out.println(ans);
    }

    static int orderAgnosticBS(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        boolean isAsc = arr[start]<arr[end];

        while(start<=end){
            //int mid = (start+end)/2;//can go outta integer range
            //better way
            int mid = start + (end-start)/2;
            if(target == arr[mid]){
                return mid;
            }
            if(isAsc){
                if(target<arr[mid]){
                    end = mid-1;
                } else if(target>arr[mid]){
                    start = mid+1;
                }
            } else{
                if(target>arr[mid]){
                    end = mid-1;
                } else if(target<arr[mid]){
                    start = mid+1;
                }
            }
        } return -1;
    }
}