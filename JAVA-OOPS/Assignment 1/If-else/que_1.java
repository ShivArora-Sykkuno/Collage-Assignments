import java.util.Scanner;

public class que_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int n1 = sc.nextInt();

        sc.nextLine(); // Consume the leftover newline character

        System.out.println("Enter a sting: ");
        String s1 = sc.nextLine();

        System.out.println("Enter a float number: ");
        float f1 = sc.nextFloat();

        System.out.println("Enter a ture/false: ");
        boolean b1 = sc.nextBoolean();

        System.out.println("Enter a byte: ");
        byte b2 = sc.nextByte();

        System.out.println("Enter a long float number: ");
        double d1 = sc.nextDouble();

        System.out.println("Enter a long number: ");
        long l1 = sc.nextLong();

        System.out.println("Enter a small number: ");
        short s2  = sc.nextShort();

        System.out.println("ALl the input values are : " + " " + n1 + " " + s1+ " " +f1+ " " +b1+ " " +b2+ " " +d1+ " " +l1+ " " +s2);
    }
}