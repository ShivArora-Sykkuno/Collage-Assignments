package loop;
import  java.util.Scanner;

public class que_7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        boolean prime = true;

        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
        if (num <= 1) prime = false;

        if (prime)
            System.out.println("Prime");
        else
            System.out.println("Not Prime");
    }
}
