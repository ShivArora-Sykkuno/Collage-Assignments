class temp {
    static int count = 5; // Static variable
    static void display() { // Static method
        System.out.println("Static count value: " + count);
    }
}
public class Static {
    public static void main(String[] args) {
        temp.display(); // Calling static method directly using class name
        System.out.println("Accessing static variable: " + temp.count);
    }
}
