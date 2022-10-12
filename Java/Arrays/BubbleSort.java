
import java.util.Arrays;

public class BubbleSort {
	static void dscSort(int array[]) {
	    int size = array.length;
	    for (int i = 0; i < size - 1; i++)
	      for (int j = 0; j < size - i - 1; j++)
	        if (array[j] < array[j + 1]) {
	          int temp = array[j];
	          array[j] = array[j + 1];
	          array[j + 1] = temp;
	        }
	  }

	public static void main(String[] args) {
		int[] data = { 1, 4, 3, 5, 2, 7, 9 };
	    BubbleSort.dscSort(data);
	    System.out.println("Sorted Array in Descending Order:");
	    System.out.println(Arrays.toString(data));
	  }
	}
	


