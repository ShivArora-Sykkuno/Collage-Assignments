import java.util.Scanner;
public class SearchElement {
    public static void main(String[] args) {
        int[] arr = {10, 25, 30, 45, 50, 12, 34, 13, 90, 100, 200, 323, 32, 34, 45, 56, 78, 90, 109};
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter element to search: ");
        int key = sc.nextInt();
        boolean found = false;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                System.out.println(key + " found at index " + i);
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println(key + " not found in the array.");
        }
        sc.close();
    }
}
