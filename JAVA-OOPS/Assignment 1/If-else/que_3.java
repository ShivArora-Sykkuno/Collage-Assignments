import java.util.Scanner;

public class que_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks out of 100");
        float marks = sc.nextFloat();
        if(marks>100)
            System.out.println("Enter Valid Marks");
        else if(marks > 90)
            System.out.println("A");
        else if(marks >80)
            System.out.println("B");
        else if(marks>70)
            System.out.println("C");
        else if(marks >60)
            System.out.println("D");
        else if (marks>50)
            System.out.println("E");
        else
            System.out.println("F");
    }
}
