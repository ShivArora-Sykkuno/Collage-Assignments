class Person {
    private String name = "Shiv"; // Private variable

    private void displayName() {   // Private method
        System.out.println("Name: " + name);
    }

    public void show() {
        System.out.println("Accessing private member from within the class:");
        displayName();
    }
}

public class Private {
    public static void main(String[] args) {
        Person p = new Person();
        // p.name = "Bob";         // !Error: 'name' has private access
        // p.displayName();        // !Error: 'displayName()' has private access

        p.show(); // ?Allowed: public method accessing private members internally
    }
}