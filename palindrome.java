import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = scan.nextInt();
        int rev = 0;
        int rem;
        int og;
        og = num;
        System.out.println("Entered Number: " + num);

        while (num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        // 
        if (rev==og) {
            System.out.println("\n\n"+og+"45 is palindrome.\n\n\n");
        }
        else 
            System.out.println("\n\n" + og + " is not palindrome.\n\n\n");
        return;     
    }
    
}
