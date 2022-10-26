package RecursionPrint;

public class BoardPath {
static int count=0;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
printBoardPath(0,10," ");
	}

public static void printBoardPath(int curr,int end,String ans)
{
	if(curr==end)
	{   System.out.println(++count+") "+ans);
		return; 
	}
	if(curr>end)
		return;
	
	for(int dice=1;dice<=6;dice++)
	{
		printBoardPath(curr+dice,end,ans+dice);
	}
}

}
