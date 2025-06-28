final class Unalterable {
    private final String data = "This value cannot change"; // Final variable
    public final void display() { // Final method
        System.out.println(data);
    }
}
public class Final {
    public static void main(String[] args) {
        Unalterable obj = new Unalterable();
        obj.display();
    }
}
