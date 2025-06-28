import test.*;

public class Public2 {
    public static void main(String[] args) {
        Public1 g = new Public1();    // ?Accessible anywhere
        g.sayHello();                   // ?Public method accessible
        System.out.println(g.message);  // ?Public variable accessible
    }
}