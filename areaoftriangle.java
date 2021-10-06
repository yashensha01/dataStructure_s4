import java.util.Scanner;

public class areaoftriangle
{
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        float s;
        double area;
        System.out.println("Enter 3 sides of triangle\n");
        float a = scan.nextInt();
        float b = scan.nextInt();
        float c = scan.nextInt();
        s = (a + b + c) / 2;
        area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.println("\nS=" + s);
        System.out.println("\nArea=" + area);
    }
                 
} 
