public class pattern_6 {
    public static void main(String[] args) {
        System.out.println("Shiv Arora");
        int num = 1;
        char ch = 'A';
        for (int i = 1; i <= 4; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(num++ + "" + ch++ + " ");
            }
            System.out.println();
        }
    }
}