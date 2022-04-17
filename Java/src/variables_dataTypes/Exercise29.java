package variables_dataTypes;

public class Exercise29 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a = Integer.parseInt(args[0]);
		int b = Integer.parseInt(args[1]);
		
		int aux = a;
		
		System.out.println("a: " + a + " b: " + b);
		a=b;
		b=aux;
		System.out.println("a: " + a + " b: " + b);
		

	}

}
