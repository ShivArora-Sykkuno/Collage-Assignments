package loop;
import java.util.Scanner;


public class que_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int sumEven = 0, productOdd = 1;
        boolean oddFound = false;

        while (num != 0) {
            int digit = num % 10;
            if (digit % 2 == 0) sumEven += digit;
            else {
                productOdd *= digit;
                oddFound = true;
            }
            num /= 10;
        }

        if (!oddFound)
            productOdd = 0;

        System.out.println("Sum of even digits: " + sumEven);
        System.out.println("Product of odd digits: " + productOdd);
    }
}
