import java.util.Scanner;

public class Assignment8 {

    public static void add() {

            System.out.println("Are you graduated (y/n) ?");
            Scanner sc = new Scanner(System.in);
            String Choice = sc.next();

            switch (Choice) {
                case "n": {
                    Student s = new Student();
                    s.getStudentInfo();
                    F f = new F();
                    f.createFile();
                    f.writeFile(s.firtName, s.lastName, s.SN, s.passedCourse);
                    break;
                }
                case "y": {
                    GraduatedStudent s = new GraduatedStudent();
                    s.getStudentInfo();
                    F f = new F();
                    f.createFile();
                    f.writeFile(s.firtName, s.lastName, s.SN, s.yearOfGraduation);
                    break;

                }
                default:
                    System.exit(0);
                    break;
            }

        }
    public static void main(String[] args) {
        while (true){
        F f = new F();
            f.readFile();
            System.out.println("Do you want add ?(yes/press any key to exit the program!)");
            Scanner sc = new Scanner(System.in);
            String Choice = sc.next();

            switch (Choice) {
                case "yes":
                    Assignment8.add();
                    break;
                default:
                    System.exit(0);
                    break;
            }

        }
    }
}
