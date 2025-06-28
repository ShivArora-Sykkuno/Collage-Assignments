public class pattern_4 {
    public static void main(String[] args) {
        System.out.println("Shiv Arora");
        for (int i = 1; i <= 4; i++) {
            for (char ch = 'A'; ch < 'A' + i; ch++) {
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }
}
