package variables_dataTypes;

public class Exercise3 {

	public static void main(String[] args) {
	
		int x = 0x80000000;
		
		System.out.println(x);
		
		x = x >>> 31;
		
		System.out.println(x);
	
	}

}
