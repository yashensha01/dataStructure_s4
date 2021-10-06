import java.util.Scanner;

public class primenum {
    public static void main(String args[]) {
        Scanner scan = new Scanner (System.in);
        System.out.println("Enter a number");
        int num = scan.nextInt();
        int flag = 0;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            System.out.println("Entered number is prime.\n");
        }
        else {
            System.out.println("Entered number is not prime.\n");
        }

    }
}
