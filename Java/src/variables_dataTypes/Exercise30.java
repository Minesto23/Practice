package variables_dataTypes;

public class Exercise30 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a = Integer.parseInt(args[0]);
		int b = Integer.parseInt(args[1]);
		System.out.println("a: " + a + " b: " + b);
		
		a+=b;
		b=a-b;
		a-=b;
		
		System.out.println("a: " + a + " b: " + b);
	}

}
