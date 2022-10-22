

class GFG {



static void Rotate(int arr[], int d, int n)
{

	int temp[] = new int[n];

	
	int k = 0;

	
	for (int i = d; i < n; i++) {
		temp[k] = arr[i];
		k++;
	}

	
	for (int i = 0; i < d; i++) {
		temp[k] = arr[i];
		k++;
	}

	
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}


static void PrintTheArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		System.out.print(arr[i]+" ");
	}
}
	public static void main (String[] args) {
		int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
		int N = arr.length;
		int d = 2;

		
		Rotate(arr, d, N);
		PrintTheArray(arr, N);
	}
}

// This code is contributed by Prajwal Gupta.
