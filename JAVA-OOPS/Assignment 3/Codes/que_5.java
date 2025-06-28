class Calc {
    public void multiply(int a, int b) {
        int result = a * b;
        System.out.println("Multiplication of two integers: " + result);
    }
    public void multiply(float a, float b) {
        float result = a * b;
        System.out.println("Multiplication of two floats: " + result);
    }
    public void multiply(int a, int b, float c) {
        float result = (a * b) * c;
        System.out.println("Multiplication of two integers and a float: " + result);
    }
}
public class que_5{
    public static void main(String[] args) {
        Calc calculator = new Calc();
        System.out.println("Int, Int");
        calculator.multiply(5, 4);
        System.out.println("Float, Float");
        calculator.multiply(3.5f, 2.2f);
        System.out.println("Int, Int, Float");
        calculator.multiply(2, 3, 1.5f);
    }
}
