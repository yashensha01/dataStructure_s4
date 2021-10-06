import java.util.Scanner;


//Farenheit to celsius
public class celsiustofarenheit
{

	public static void main(String arg[] ) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Temp Convertion");
		System.out.println("1.Convert C to F \n"+"2 Convert F to C");
		System.out.println("Enter Your choice");
		int ch=scan.nextInt();	
		if(ch==1)
		System.out.println("\n\n\nEnter C value to Covert to F:");
		else if(ch==2)
		System.out.println("\n\n\nEnter F value to Covert to C:");
		else
		System.out.println("Invalid Choice...");
		int temp_value=scan.nextInt();
		int ans;
		switch(ch)
		{
		case 1:ans=(temp_value*9/5)+32;
		System.out.println("The Value of F is:"+ans+"C");
		break;
		case 2:ans=(temp_value-32)*5/9;
		System.out.println("The Value of C is: "+ans+"F");
		break;
		default:
		System.out.println("Invalid Choice...");
		break;
		}
			
	}

}


