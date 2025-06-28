package loop;
import  java.util.Scanner;

public class que_13 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        long result = (long) Math.pow(x, y);

        System.out.println(result);
    }
}
