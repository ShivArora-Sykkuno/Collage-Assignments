import java.util.Arrays;
public class Median{
    public static void main(String[] args) {
        int[] arr1 = {1, 3, 5, 7, 1, 13, 15};
        int[] arr2 = {2, 4, 6, 8, 10, 12, 14};
        int n1 = arr1.length;
        int n2 = arr2.length;
        int[] merged = new int[n1 + n2];
        System.arraycopy(arr1, 0, merged, 0, n1);
        System.arraycopy(arr2, 0, merged, n1, n2);
        Arrays.sort(merged);
        double median;
        int n = merged.length;
        if (n % 2 == 0) {
            median = (merged[n/2 - 1] + merged[n/2]) / 2.0;
        } else {
            median = merged[n/2];
        }
        System.out.println("Merged Array: " + Arrays.toString(merged));
        System.out.println("Median: " + median);
    }
}
