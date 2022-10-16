import java.util.Arrays;

public class MergeSortInPlaceCode {

    public static void main(String[] args) {

        int[]arr={4,6,7,4,3,1,1};
        MergeSortInPla(arr,0,arr.length);
        System.out.println(Arrays.toString(arr));
    }

    static void MergeSortInPla(int[] arr, int s, int e)
    {
        if (e-s==1)
            return;


        int m=s+(e-s)/2;

        MergeSortInPla(arr,s,m);
        MergeSortInPla(arr,m,e);

        Merge(arr,s,m,e);
    }

    static void Merge(int[] arr,int s, int m, int e) {

        int[]ans= new int[e-s];
        int index=0;
        int i=s;
        int j=m;

        while (i<m && j<e )
        {
            if(arr[i]<arr[j])
            {
                ans[index]=arr[i];
                i++;
                index++;
            }
            else
            {
                ans[index]=arr[j];
                j++;
                index++;
            }
        }

        while (i<m)
        {
            ans[index]=arr[i];
            i++;
            index++;
        }

        while (j<e)
        {
            ans[index]=arr[j];
            j++;
            index++;
        }

        for (int a=0; a<ans.length ; a++)
        {
            arr[s+a]=ans[a];
        }

    }
}
