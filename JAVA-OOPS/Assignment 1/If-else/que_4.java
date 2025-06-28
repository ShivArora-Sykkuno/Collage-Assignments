//WAP to take input age of person and check he is eligible for marriage or not.

import java.util.Scanner;

public class que_4 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter age");
        int age = sc.nextInt();
        if (age > 21)
            System.out.println("You can get married");
        else
            System.out.println("Should focus on your studies");
    }
}
