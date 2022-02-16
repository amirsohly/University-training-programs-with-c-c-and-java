import java.util.Scanner;
public class Student {
    String firtName;
    String lastName;
    int SN;
    int passedCourse;
    void getStudentInfo() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your first name: ");
        this.firtName = sc.next();

        System.out.print("Enter your last name: ");
        this.lastName =sc.next();

        System.out.print("Enter your student number: ");
        this.SN = Integer.parseInt(sc.next());

        System.out.print("Enter number of passed courses(less than 250): ");
        if (sc.nextInt()<=250){
            this.passedCourse = Integer.parseInt(sc.next());
        }else{
            System.out.println("Please Enter number less than 250: ");
            this.passedCourse = Integer.parseInt(sc.next());

        }


    }
}
