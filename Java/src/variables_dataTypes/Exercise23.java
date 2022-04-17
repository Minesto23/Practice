package variables_dataTypes;

public class Exercise23 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int a = Integer.parseInt(args[0]);
		int b = Integer.parseInt(args[1]);
		
		double r = Math.random();
		double u = a + (b-a) *r;
		
		System.out.println("Random number between " + a + " and " + b + " is " +  u);

	}

}
