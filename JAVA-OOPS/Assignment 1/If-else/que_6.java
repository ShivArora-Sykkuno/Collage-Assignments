import java.util.Scanner;


public class que_6 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Salary: ");
        double basicSalary = sc.nextDouble();
        double da = basicSalary >= 10000 ? 0.40 * basicSalary : 0.30 * basicSalary;
        double ta = basicSalary >= 10000 ? 0.30 * basicSalary : 0.20 * basicSalary;
        double grossSalary = basicSalary + da + ta;
        System.out.println("Gross Salary: " + grossSalary);
    }
}

