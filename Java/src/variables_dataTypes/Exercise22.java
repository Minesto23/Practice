package variables_dataTypes;

public class Exercise22 {

	public static void main(String[] args) {
		
		double x = Double.parseDouble(args[0]);
		
		double r = Math.pow(Math.cos(x), 2) + Math.pow(Math.sin(x), 2); 
		
		double r1 = Math.cos(x)*Math.cos(x) + Math.sin(x)*Math.sin(x);
		
		System.out.println(r);
		System.out.println(r1);
	}

}
