import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        if (isPalindrome(input)) {
            System.out.println("\"" + input + "\" is a palindrome.");
        } else {
            System.out.println("\"" + input + "\" is not a palindrome.");
        }
        
        scanner.close(); // Safe to close here since no further input is expected.
    }

    public static boolean isPalindrome(String str) {
        // Clean up the string by removing non-alphanumeric characters and converting to lowercase.
        str = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int left = 0;
        int right = str.length() - 1;
        
        // Compare characters from the start and the end.
        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                return false; // Return false if characters don't match.
            }
            left++;
            right--;
        }
        
        return true; // Return true if the string is a palindrome.
    }
}
