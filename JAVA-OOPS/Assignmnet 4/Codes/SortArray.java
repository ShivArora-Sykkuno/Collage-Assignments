import java.util.Arrays;
public class SortArray {
    public static void main(String[] args) {
        int[] arr = {5, 2, 8, 1, 3};
        System.out.println("Original Array: " + Arrays.toString(arr));
        Arrays.sort(arr); 
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }
}
