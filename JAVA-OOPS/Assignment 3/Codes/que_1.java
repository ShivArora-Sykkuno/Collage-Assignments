import java.time.LocalDate;
import java.time.Period;
import java.util.Scanner;

class Employee {
    private String name;
    private int salary;
    private int year;
    private int month;
    private int date;

    Employee(String name, int salary, int year, int month, int date) {
        this.name = name;
        this.salary = salary;
        this.year = year;
        this.month = month;
        this.date = date;
    }

    public void yearOfServices() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the end year (YYYY): ");
        int endYear = sc.nextInt();
        System.out.print("Enter the end month (MM): ");
        int endMonth = sc.nextInt();
        System.out.print("Enter the end day (DD): ");
        int endDay = sc.nextInt();

        LocalDate hireDate = LocalDate.of(year, month, date);
        LocalDate endDate = LocalDate.of(endYear, endMonth, endDay);

        Period differPeriod = Period.between(hireDate, endDate);
        int yearsOfService = differPeriod.getYears();
        
        System.out.println("Years of Service: " + yearsOfService + " years");

    }
}

public class que_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of test cases: ");
        int test = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < test; i++) {
            System.out.print("Enter the name of the employee: ");
            String name = sc.nextLine();

            System.out.print("Enter the salary: ");
            int salary = sc.nextInt();

            System.out.print("Enter hire year (YYYY): ");
            int hireYear = sc.nextInt();
            System.out.print("Enter hire month (MM): ");
            int hireMonth = sc.nextInt();
            System.out.print("Enter hire day (DD): ");
            int hireDay = sc.nextInt();
            sc.nextLine();

            Employee e = new Employee(name, salary, hireYear, hireMonth, hireDay);
            e.yearOfServices();
        }

        sc.close();
    }
}
