public class QuickSortAlgorithm {
	public static void quickSort(int[] A, int start, int end) {
		if(start<end) {
			int pivotIndex  = Partition(A, start, end);
			quickSort(A,start,pivotIndex-1);
			quickSort(A,pivotIndex+1,end);
		}
	}
	public static int Partition(int[] arr, int start, int end) {
		int pivot = arr[start];
		int storeIndex = start+1;
		for(int i=start+1;i<=end ;i++) {
			if(arr[i]<pivot) {				
				int temp =arr[i];
				arr[i] = arr[storeIndex];
				arr[storeIndex] = temp;
				storeIndex++;
				System.out.println("+++++++++++++++++++Internal SWAP TAKES PLACE+++++++++++++++++++++++++++++");
				for(int l=0;l<arr.length;l++) {
					System.out.print(arr[l]+" ");
				}
				System.out.println();
			}
		}
		if(start != storeIndex) {
		int temp =arr[start];
		arr[start] = arr[storeIndex-1];
		arr[storeIndex-1] = temp;
		System.out.println("+++++++++++++++++++External SWAP TAKES PLACE+++++++++++++++++++++++++++++");
		for(int l=0;l<arr.length;l++) {
			System.out.print(arr[l]+" ");
		}
		System.out.println();
		System.out.println("Iteration done");
		}
		return storeIndex-1;
	}
	public static void main(String args[]) {
		int[] arr= {24, 14, 14, 23, 27};
		System.out.println("*************************************************************************");
		System.out.print("Original Array -> ");
		for(int l=0;l<arr.length;l++) {
			System.out.print(arr[l]+" ");
		}
		System.out.print("        Pivot -> a[0] = "+arr[0]);
		System.out.println();
		System.out.println("*************************************************************************");
		quickSort(arr, 0, arr.length-1);
		System.out.println("*************************************************************************");
		System.out.print("Sorted Array -> ");
		for(int l=0;l<arr.length;l++) {
			System.out.print(arr[l]+" ");
		}
		System.out.println();
		System.out.println("*************************************************************************");
	}
}
