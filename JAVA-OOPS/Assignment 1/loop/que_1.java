package loop;
import java.util.Scanner;


public class que_1 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int N = sc.nextInt();

        int sum = 0;
        System.out.print("First " + N + " natural numbers: ");
        for (int i = 1; i <= N; i++) {
            System.out.print(i + " ");
            sum += i;
        }
        System.out.println(" ");
        System.out.println("\nSum = : " + sum);
    }
}
