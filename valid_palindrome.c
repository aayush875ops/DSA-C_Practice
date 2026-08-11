#include <stdio.h>
#include <string.h>

int isPalindrome(char word[]) {
    int length = strlen(word);
    int left = 0;
    int right = length - 1;

    while (left < right) {
        
        if (word[left] != word[right]) {
            return 0;
        }
        left++;
        right--;
    }

        return 1; }

int main() {
    char word1[] = "radar";
    char word2[] = "college";

    if (isPalindrome(word1)) {
        printf("%s is a valid palindrome\n", word1);
    } else {
        printf("%s is NOT a palindrome\n", word1);
    }

    if (isPalindrome(word2)) {
        printf("%s is a valid palindrome\n", word2);
    } else {
        printf("%s is NOT a palindrome\n", word2);
    }

    return 0;
}