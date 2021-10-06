import java.util.Scanner;
    public class arithmatic
{ public static void main(String args[]) 
    {  Scanner s=new Scanner (System.in);
      System.out.println("enter two Integers"); 
     int num1 = s.nextInt();
     int num2 = s.nextInt();
     System.out.println("\nChoose option\n"+"1.Addition\n"+"2.Subtraction\n"+"3.Multiplication\n"+"4.Division\n"+"Enter your choice\n");
         int ch= s.nextInt();
      float sum=0;
       switch(ch)
        { 
              case 1: sum=num1+num2;
             System.out.println(sum); 
             break;
              case 2: sum=num1-num2;
               System.out.println(sum); 
               break; 
               case 3: sum= num1*num2;
                System.out.println(sum); 
                break; 
                case 4: sum=num1/num2; 
                System.out.println(sum); 
                break; 
                default: 
                System.out.println("Invalid choice");
        }
    }
} 