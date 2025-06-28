import java.util.Scanner;

class Emmployee {
    private double salary;
    public Emmployee(double salary) {
        this.salary = salary;
    }
    public void work() {
        System.out.println("Employee is working.");
    }
    public double getSalary() {
        return salary;
    }
}

class HRManager extends Emmployee {
    public HRManager(double salary) {
        super(salary);
    }
    @Override
    public void work() {
        System.out.println("HR Manager is managing employees.");
    }
    public void addEmployee() {
        System.out.println("HR Manager is adding a new employee.");
    }
}

public class que_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of test cases: ");
        int test = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < test; i++) {
            System.out.print("Enter the salary: ");
            long sal = sc.nextLong();
            HRManager hr = new HRManager(sal);
            hr.work();
            hr.addEmployee();
            System.out.println("Salary: " + hr.getSalary());
        }
    }
}