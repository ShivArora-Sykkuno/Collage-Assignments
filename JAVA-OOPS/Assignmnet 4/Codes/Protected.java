class Animal {
    protected String type = "Mammal"; // Protected variable

    protected void sound() {          // Protected method
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal {
    public void showDetails() {
        System.out.println("Accessing protected member from subclass:");
        System.out.println("Type: " + type); 
        sound();                
    }
}
public class Protected {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.showDetails(); // Accessing via subclass method
        // d.type = "Bird";  // !Not allowed outside subclass directly (though same package allows it)
        // d.sound();        // !Not recommended: should access via method
    }
}
