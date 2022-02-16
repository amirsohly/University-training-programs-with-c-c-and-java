import java.util.Scanner;
public class GraduatedStudent {

        String firtName;
        String lastName;
        int SN;
        int yearOfGraduation;

        void getStudentInfo() {
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter your first name: ");
            this.firtName = sc.next();

            System.out.print("Enter your last name: ");
            this.lastName = sc.next();

            System.out.print("Enter your student number: ");
            this.SN = Integer.parseInt(sc.next());

            System.out.println("Enter year of graduation(upper than 1380): ");
            if (sc.nextInt() >= 1380) {
                this.yearOfGraduation = Integer.parseInt(sc.next());
            } else {
                System.out.println("Please Enter number more than 1380: ");
                this.yearOfGraduation = Integer.parseInt(sc.next());

            }
        }
}
