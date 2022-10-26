package Stacks;

import java.util.Stack;

public class BalancedBracket {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    String str="{{(a+b-c)}} + {{a}+b{}+a+g_f(sda)}";
     System.out.println(isBalanced(str));
	}
public static boolean isBalanced(String str)
{
	Stack<Character> stack=new Stack<>();
	for(int i=0;i<str.length();i++)
	{
		if(str.charAt(i)=='{' || str.charAt(i)=='[' || str.charAt(i)=='(')
		{
			stack.push(str.charAt(i));
		}
		else if(str.charAt(i)=='}' || str.charAt(i)==']' ||  str.charAt(i)==')')
		{
			if(stack.isEmpty())
				return false;
				if(str.charAt(i)=='}')
				{
					if(stack.peek()=='{')
					{
						stack.pop();
					}
					else
					{
						return false;
					}
				}
				//
				if(str.charAt(i)==']')
				{
					if(stack.peek()=='[')
					{
						stack.pop();
					}
					else
					{
						return false;
					}
				}
				//
				if(str.charAt(i)==')')
				{
					if(stack.peek()=='(')
					{
						stack.pop();
					}
					else
					{
						return false;
					}
				}
		}
		else
		{
			//do nothing
		}
	}
	if(stack.isEmpty())
		return true;
	else
		return false;
}
}
