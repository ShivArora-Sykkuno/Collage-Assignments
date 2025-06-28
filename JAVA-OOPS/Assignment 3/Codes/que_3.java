import java.util.Scanner;
class Base{
    public void calculateArea(){
        System.out.println("This is the base class");
    }
}

class Circle extends  Base{
    private  double  radius;
    Circle(double radius){
        this.radius = radius;
    }
    @Override
    public  void calculateArea(){
        System.out.println("Area: " + (3.14 * this.radius * this.radius));
    }
}

class Triangle extends Base{
    private double breadth;
    private  double height;

    Triangle(double b, double h) {
        this.breadth = b;
        this.height =h;
    }
    @Override
    public void calculateArea(){
        System.out.println(("Area: " + ((double) 1 / 2 * this.breadth * this.height)));
    }
}

class Rectanglee extends Base{
    private final double height;
    private final double width;

    Rectanglee(double h, double  w){
        this.height = h;
        this.width = w;
    }
    
    @Override
    public void calculateArea(){
        System.out.println("Area: " + (this.height * this.width));
    }
}

public class que_3 {
    public static int main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of test cases: ");
        int test = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < test; i++) {
            System.out.println("Enter the shape number\n 1. Circle\n 2.Rectangle\n 3.Triangle");
            int flag = sc.nextInt();
            switch (flag) {
                case 1:
                    System.out.print("Enter radius of circle: ");
                    double r = sc.nextDouble();
                    Circle c = new  Circle(r);
                    c.calculateArea();
                    System.out.println();
                    break;
                case 2:
                    System.out.print("Enter length: ");
                    double l = sc.nextDouble();
                    System.out.print("Enter breadth: ");
                    double b = sc.nextDouble();
                    Rectanglee rec = new Rectanglee(l, b);
                    rec.calculateArea();
                    System.out.println();
                    break;
                case 3:
                    System.out.print("Enter length: ");
                    double le = sc.nextDouble();
                    System.out.print("Enter height: ");
                    double hei = sc.nextDouble();
                    Triangle tri = new Triangle(le, hei);
                    tri.calculateArea();
                    System.out.println();
                    break;
            }
        }
    }
    return 0;
}