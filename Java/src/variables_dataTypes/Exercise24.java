package variables_dataTypes;

public class Exercise24 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double r1 = 1 + (6-1) * Math.random();
		double r2 = 1 + (6-1) * Math.random();
		
		int dice1 =  (int) Math.round(r1);
		int dice2 =  (int) Math.round(r2);
		
		System.out.println("First dice: "+dice1);
		System.out.println("Second dice: "+dice2);
		System.out.println("Sum result: "+(dice1+dice2));

	}

}
