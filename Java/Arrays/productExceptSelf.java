import java.util.Arrays;

// product of two arrays consisting the multiplicating their left preceders and right aheads except them

class productExceptSelf {

    public static void main(String[] args) {
        int[] input = {1,-1,2,4,7,-2,8,-3}; //

        int[] output = products(input);

        System.out.println(Arrays.toString(output)); //[-2688, 2688, -1344, -672, -384, 1344, -336, 896]
    }

     static int[] products(int[] nums) {
        int[] left=new int[nums.length];
        int[] right = new int[nums.length];

        left[0]=1;
        right[nums.length-1]=1;
        for(int i=1;i<nums.length;i++)
            left[i]=nums[i-1]*left[i-1];
        
        for(int i=nums.length-2;i>=0;i--)
            right[i]=nums[i+1]*right[i+1];
        
        for(int i=0;i<nums.length;i++)
            nums[i]=left[i]*right[i];

        return nums;
    }
}