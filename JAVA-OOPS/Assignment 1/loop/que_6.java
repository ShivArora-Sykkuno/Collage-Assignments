package loop;
import  java.util.Scanner;

public class que_6 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt(), product = 1;

        while (num != 0) {
            product *= num % 10;
            num /= 10;
        }

        System.out.println("Product of digits: " + product);
    }
}
