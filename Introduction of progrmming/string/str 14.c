//14. Write a program in C to combine two strings manually
#include <stdio.h>

void combineStrings(char* dest, const char* src1, const char* src2) {
    int i = 0, j = 0;

    // Copy src1 to dest
    while (src1[i] != '\0') {
        dest[j++] = src1[i++];
    }

    // Copy src2 to dest
    i = 0;
    while (src2[i] != '\0') {
        dest[j++] = src2[i++];
    }

    // Null-terminate the destination string
    dest[j] = '\0';
}

int main() {
    char str1[100], str2[100], combined[200];

    // Get input strings from user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove trailing newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Combine the strings
    combineStrings(combined, str1, str2);

    // Print the resulting string
    printf("Combined string: %s\n", combined);

    return 0;
}

