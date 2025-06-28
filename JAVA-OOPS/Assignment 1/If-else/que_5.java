

import java.util.Scanner;

public class que_5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter cost of a pen: ");
        double penCost = sc.nextDouble();
        double totalCost = penCost * 70;
        double discountPercentage = totalCost > 1000 ? 20 : 10;
        double discount = totalCost * discountPercentage / 100;
        double finalPrice = totalCost - discount;
        System.out.println("Price " + finalPrice);
    }
}


