class reverseString { 
	public static void main (String[] args) { 
		String str= "Saksham", nstr=""; 
		char ch; 
		
	System.out.print("Original word: Saksham");
	for (int i=0; i<str.length(); i++) 
	{ 
		ch= str.charAt(i);
		nstr= ch+nstr;
	} 
	System.out.println("Reversed word: "+ nstr); 
	} 
} 