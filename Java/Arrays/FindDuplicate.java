import java.util.HashSet;
import java.util.Set;

public class FindDuplicate
{
    public static void main(String[] args)
    {
        int ans = findDuplicate(new int[]{2,3,4,2,1});
        System.out.println(ans);
    }

    public static int findDuplicate(int[] nums)
    {
        //HashSet
        Set<Integer> visited = new HashSet<>();
        for(int i : nums)
        {
            if(visited.contains(i))
                return i;
            visited.add(i);
        }
        return -1;
    }
}