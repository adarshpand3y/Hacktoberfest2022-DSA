import java.util.Arrays;

class Quicksort {

  static int partition(int array[], int l, int h) {
    
    int p = array[h];
    
    int i = (l - 1);

    for (int j = l; j < h; j++) {
      if (array[j] <= p) {

        i++;
        int tem = array[i];
        array[i] = array[j];
        array[j] = tem;
      }

    }
    int tem = array[i + 1];
    array[i + 1] = array[h];
    array[h] = tem;

    return (i + 1);
  }

  static void quickSort(int array[], int l, int h) {
    if (l < h) {

      int pi = partition(array, l, h);
      quickSort(array, l, pi - 1);
      quickSort(array, pi + 1, h);
    }
  }
}

class Main {
  public static void main(String args[]) {

    int[] data = { 8, 7, 2, 1, 0, 9, 6 };
    System.out.println("Unsorted Array");
    System.out.println(Arrays.toString(data));

    int size = data.length;

    Quicksort.quickSort(data, 0, size - 1);

    System.out.println(Arrays.toString(data));
  }
}
