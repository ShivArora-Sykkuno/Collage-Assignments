public class pattern_9 {
    public static void main(String[] args) {
        System.out.println("Shiv Arora");
        for (int i = 1; i <= 5; i++) {
            int num = i + 1;
            for (int j = 0; j < i; j++) {
                System.out.print(num++ + " ");
            }
            System.out.println();
        }
    }
}