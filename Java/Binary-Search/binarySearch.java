
public class binarySearch {

    public static void main(String[] args) {
            int[] arr= {90, 56, 45, 34, 23, 12, 11, 7, -1, -5};
            int target= 45;
            int ans= binarySearch(arr, target);
            System.out.println(ans);
        }
    
        //return the index
        static int binarySearch (int[] arr, int target){
            int start= 0;
            int end= arr.length -1;
    
            while (start <= end){
                //return middle element
                int mid= start + (end-start)/ 2;
    
            if (target < arr[mid]){
                start= mid + 1;
            }
            else if (target > arr[mid]){
                end= mid -1;
                    }
            else {
                return mid;
            }
        }
        //this means element doesnt exist
        return -1;
    }
    


    //CEILING AND FLOOR
    static int floor(int[] arr, int target)
    {
        int s = 0;
        int e = arr.length -1 ;
        while(s <= e)
        {

            if(target < arr[0]){
                return -1;
            }
            int mid = s + (e-s)/2;
            if(target == arr[mid])
            {
                return mid;
            }
//            if (isAsc){
                else if(target > arr[mid])
                {
                    s = mid+1;
                }

                else {
                    e = mid-1;
                }
//            }

//            else {
//                if(target < arr[mid])
//                {
//                    s = mid+1;
//                }
//
//                else if(target > arr[mid]){
//                    e = mid-1;
//                }
//            }
        }
        //        flooring
        return arr[e];

    }
}

