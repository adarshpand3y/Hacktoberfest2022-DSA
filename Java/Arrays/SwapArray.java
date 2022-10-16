public class SwapArray {
    public static void main(String[] args) {
        int one = 5, two = 4;
        int arr[] = { 1, 2, 3, 4, 5 };
        // Numbers not reversed
        System.out.println(one + " " + two);
        swapInt(one, two);
        System.out.println(one + " " + two);

        // Numbers Reversed
        System.out.println(arr[3] + " " + arr[4]);
        swapArray(arr, 3, 4);
        System.out.println(arr[3] + " " + arr[4]);
    }

    public static void swapInt(int one, int two) {
        int temp = one;
        one = two;
        two = temp;
    }

    public static void swapArray(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
