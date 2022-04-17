package variables_dataTypes;

public class Exercise25 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double p = Double.parseDouble(args[0]);
		int t = Integer.parseInt(args[1]);
		float r = Float.parseFloat(args[2]);
		
		double value = Math.pow(p, (r*t));
		
		System.out.println("The value of your loan is " + value);
		

	}

}
