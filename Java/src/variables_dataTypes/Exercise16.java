package variables_dataTypes;

public class Exercise16 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "this is the string that I'm going to compare";
		StringBuffer bufferstr = new StringBuffer("this is the string that I'm going to compare");
				
		if (str.contentEquals(bufferstr)) {
			System.out.print("The string contain String buffer");
		}else {
			System.out.println("The string doesn't contain String buffer");
		}

	}

}
