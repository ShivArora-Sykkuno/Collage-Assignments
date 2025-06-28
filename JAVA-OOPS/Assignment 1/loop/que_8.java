package loop;
import  java.util.Scanner;

public class que_8 {
    public static void main(String[] args){
        for (int num = 2; num <= 100; num++) {
            boolean prime = true;
            for (int i = 2; i <= Math.sqrt(num); i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime) System.out.print(num + " ");
        }
    }
}
