import java.util.Scanner;

public class Assignment1
{
    public static void main(String args[])
    {
        int a, b, c, d = 1;
        System.out.print("Hello \n Welcome to this program ");
        System.out.print("Enter the number of rows : ");
        Scanner s=new Scanner(System.in);
        a=s.nextInt();
        d=a-1;
        for (c=1;c<=a;c++)
        {
            for (b=1;b<=d;b++)
            {
                System.out.print(" ");
            }
            d--;
            for (b=1;b<=2*c-1;b++)
            {
                System.out.print("*");
            }
            System.out.println(" ");
        }
        d=1;
        for (c=1;c<=a-1;c++)
        {
            for (b=1;b<=d;b++)
            {
                System.out.print(" ");
            }
            d++;
            for (b=1;b<=2*(a-c)-1;b++)
            {
                System.out.print("*");
            }
            System.out.println(" ");
        }
    }
}