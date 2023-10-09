public class BinarySearch {

    // Function to perform binary search
    static int binarySearch(int arr[], int target) {
        int left = 0, right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Check if the target is at the middle element
            if (arr[mid] == target)
                return mid;
            
            // If the target is greater, ignore the left half
            if (arr[mid] < target)
                left = mid + 1;
            
            // If the target is smaller, ignore the right half
            else
                right = mid - 1;
        }
        
        // Target element is not in the array
        return -1;
    }

    public static void main(String[] args) {
        int arr[] = { 2, 3, 4, 10, 40 };
        int target = 10;
        int result = binarySearch(arr, target);

        if (result == -1)
            System.out.println("Element not found in the array");
        else
            System.out.println("Element found at index " + result);
    }
}
