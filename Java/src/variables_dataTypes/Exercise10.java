package variables_dataTypes;

public class Exercise10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		char ch[] = {'M', 'y', ' ', 'J', 'a', 'v', 'a', ' ', 'E', 'x', 'a', 'm', 'p', 'l', 'e'};
		
		String str = String.copyValueOf(ch);
		System.out.println(str);
		
		str = String.copyValueOf(ch,3,4);
		System.out.println(str);
	}

}
