package variables_dataTypes;

public class Exercise27 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "Today is a beautiful day to programming on Java, so take a cup of coffe and turn on the pc.";
		String search = ".";
		
		int index = str.lastIndexOf(search);
	
		System.out.println("The last index is: " + index);
	}

}
