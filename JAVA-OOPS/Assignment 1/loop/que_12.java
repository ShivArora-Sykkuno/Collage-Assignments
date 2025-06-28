package loop;
import  java.util.Scanner;

public class que_12 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt(), sum = 0, originalNum = num;
        int length = String.valueOf(num).length();

        while (num != 0) {
            int digit = num % 10;
            sum += (int) Math.pow(digit, length);
            num /= 10;
        }

        if (sum == originalNum) {
            System.out.println("Armstrong");
        } else {
            System.out.println("Not Armstrong");
        }
    }
}
