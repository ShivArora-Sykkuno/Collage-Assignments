public class pattern_1 {
    public static void main(String[] args){
        int num = 1;
        System.out.println("Shiv Arora");
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(num++ + " ");
            }
            System.out.println();
        }
    }
}
