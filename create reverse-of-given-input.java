import java.util.Scanner;

public class ReverseString {
    public static String reverseString(String input) {
        char[] charArray = input.toCharArray();
        int left = 0;
        int right = charArray.length - 1;
        
        while (left < right) {
            // Swap characters at left and right pointers
            char temp = charArray[left];
            charArray[left] = charArray[right];
            charArray[right] = temp;
            
            // Move the pointers towards the center
            left++;
            right--;
        }
        
        return new String(charArray);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string to reverse: ");
        String userInput = scanner.nextLine();
        scanner.close();
        
        String reversedString = reverseString(userInput);
        System.out.println("Reversed string: " + reversedString);
    }
}
