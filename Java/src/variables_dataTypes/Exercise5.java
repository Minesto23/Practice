package variables_dataTypes;

import java.util.Scanner;

public class Exercise5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		float a1, a2, a3;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Please input a1: ");
		a1 = scan.nextFloat();
		System.out.println("Please input a2: ");
		a2 = scan.nextFloat();
		System.out.println("Please input a3: ");
		a3 = scan.nextFloat();
		
		System.out.println(a1 + a2 + a3);
		System.out.println(" " +a1 + a2 + a3);
		System.out.println(a1 + a2 + a3 + " This ");
		System.out.println(a1 +", " + a2 + " and " +a3);

	}

}
