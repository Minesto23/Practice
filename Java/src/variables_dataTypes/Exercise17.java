package variables_dataTypes;

public class Exercise17 {

	public static void main(String[] args) {
		
		String str = "This is my principal String that I'm going to split on parts";
		String[] tokens = str.split(" ");
		
		for(String s: tokens) {
			System.out.println(s);
		}
		
		str = "This program splits a string based on space";
		tokens = str.split("\\s+");
		
		for(String s: tokens) {
			System.out.println(s);
		}

	}

}
