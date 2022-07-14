public class stringx
{
	public static void main(String args[])
	{
		String str = new String("1234567890");
		int count = 0;
		while(true)
		{
			try { str.charAt(count); } 
			catch(StringIndexOutOfBoundsException e) { break; }
			count++;
		}
		System.out.println(count);
	}
}
