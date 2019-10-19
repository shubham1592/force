import java.util.Scanner;

public class VariableAndStuff {

	public static void main(String[] args) {
		
		//Simple concatination of strings
		String s1 = "Welcome";
		String s2 = " ";
		String s3 = "Back";
		System.out.println(s1 + s2 + s3 + "\n");
		
		//using loop with boolean variable
		int n1 = 10;
		boolean x = true;
		while (x == true) {
			x = n1 > 5;
			System.out.println("kitna vella hai re tu");
			n1--;
			if (n1 == 7) {
				break;
			}
		}
		
		//Taking user input
		Scanner input = new Scanner(System.in);
		String text = input.nextLine();
		System.out.println(text);
		int num = input.nextInt();
		System.out.println(num);
		
		//Switch case usage

		        System.out.println("Please enter a command: \n");
		        String tex = input.nextLine();

		        switch (tex) {
		        case "start":
		            System.out.println("Machine started!");
		            break;

		        case "stop":
		            System.out.println("Machine stopped.");
		            break;

		        default:
		            System.out.println("Command not recognized");
		        }
		        
		        
		    }
}
