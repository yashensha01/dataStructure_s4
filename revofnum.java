import java.util.Scanner;

public class revofnum {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num= scan.nextInt();
        int rev = 0;
        int rem;
        System.out.println("Entered Number: "+num);

        while (num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        System.out.println("Reversed Number: "+rev);
}    
}
