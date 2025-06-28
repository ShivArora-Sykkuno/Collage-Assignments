
import java.util.Scanner;

public class que_2 {
    public  static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two Numbers: ");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        System.out.println("Arithmetic Operations -->");
        System.out.println("Addition: " + (n1+n2));
        System.out.println("Subtraction: " + (n1-n2));
        System.out.println("Multiplication: " + (n1*n2));
        System.out.println("Division: " + (n1/n2));
        System.out.println("Remainder: " + (n1%n2));
        System.out.println(" ");

        System.out.println("Assignment Operations -->");
        n1  = 10;
        System.out.println("Now n1 is: " + n1);
        n1 += 8;
        System.out.println("Now n1 is: " + n1);
        n1 -= 3;
        System.out.println("Now n1 is: " + n1);
        n1 *= 4;
        System.out.println("Now n1 is: " + n1);
        n1 /= 2;
        System.out.println("Now n1 is: " + n1);
        System.out.println(" ");

        System.out.println("Comparisons Operations -->");
        System.out.println("n1  > n2: " + (n1 > n2));
        System.out.println("n1  < n2: " + (n1 < n2));
        System.out.println("n1  <= n2: " + (n1 <= n2));
        System.out.println("n1  => n2: " + (n1 >= n2));
        System.out.println("n1  == n2: " + (n1 == n2));
        System.out.println("n1  is not equal to n2: " + (n1 != n2));
        System.out.println(" ");


        if(n1 > 3 && n2 > 5){
            System.out.println("Both true");
        }else if(n1 > 3 || n2 > 5){
            System.out.println("At least one true");
        }else if(!(n1> 3)){
            System.out.println("N1 is dumb");
        }else{
            System.out.println("n2 is dumb");
        }
    }
}
