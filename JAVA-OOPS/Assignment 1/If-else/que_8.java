import java.util.Scanner;
 class Maxing {
    public static int findMax(int num1, int num2) {
        return Math.max(num1, num2);
    }
    public static int findMax(int num1, int num2, int num3) {
        int maxOfTwo = findMax(num1, num2);
        return Math.max(maxOfTwo, num3);
    }

}


public class que_8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two or three numbers: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        if (sc.hasNextInt()) {
            int num3 = sc.nextInt();
            System.out.println("The maximum is: " + Maxing.findMax(num1, num2, num3));
        } else {
            System.out.println("The maximum is: " + Maxing.findMax(num1, num2));
        }
    }
}
