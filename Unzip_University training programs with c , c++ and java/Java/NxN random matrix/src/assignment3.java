import java.util.Random;
import java.util.Scanner;

public class assignment3 {

    public static void Matrix(int n) {
        int u ;
        int i,j;
        int[][] myList = new int[n][n];
        for (  i= 0 ;i<n ;i++){
            System.out.println("  ");
            for ( j = 0 ;j<n ;j++){
                Random a =new Random();
                myList[i][j]= a.nextInt(100);
                 u = myList[i][j];
                System.out.print(u+"  ");

            }
        }
       System.out.println("\n-------------------------------");
        for (i=0;i<n;i++)

            for (j=0; j<n; j++) {
                u = myList[i][j];
                System.out.print(u + "  ");
            }

            }

    public static void main(String[] args) {
        System.out.println("Please Enter A Number : ");
        Scanner s =new Scanner(System.in);
       int a=s.nextInt();
        Matrix(a);
    }
}
