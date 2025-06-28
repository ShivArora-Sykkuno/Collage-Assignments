
import java.util.Scanner;

class rectangle{
    private  double height;
    private  double width;

    rectangle(double height, double  width){
        this.height = height;
        this.width = width;    
    }
    
    public void area(){
        System.out.println("Area: " + (this.height * this.width));
    }
    public void perimeter(){
        System.out.println("Perimeter: " + (2 * (this.height + this.width)));
    }
}


public class que_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of test cases: ");
        int test = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < test; i++) {
            System.out.print("Enter the height: ");
            double h = sc.nextDouble();
            System.out.print("Enter the width: ");
            double w = sc.nextDouble();
            rectangle r = new rectangle(h, w);
            r.area();
            r.perimeter();
            System.out.println(" ");
        }
    }
}