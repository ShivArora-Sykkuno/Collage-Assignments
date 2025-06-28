class temp{
    temp(String name, int age, String city){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("City: " + city);
    }
}
public class Constructor {
    public static void main(String[] args) {
        temp obj = new temp("Shiv", 20, "Indore");
    }
}