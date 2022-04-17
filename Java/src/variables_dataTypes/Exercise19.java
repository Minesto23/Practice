package variables_dataTypes;

public class Exercise19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1 = "hello world";
		String str2 = "Wello World";
		
		System.out.println("Comparing strings without ignore case");
		
		if (str1.equals(str2)) {
			System.out.println("The string are equals");
		}else {
			System.out.println("The string aren't equals");
		}
		
		System.out.println("Comparing strings with ignore case");
		
		if (str1.equalsIgnoreCase(str2)) {
			System.out.println("The string are equals");
		}else {
			System.out.println("The string aren't equals");
		}

	}

}
