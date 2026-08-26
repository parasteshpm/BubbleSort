#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main();
int equals();

int main() {        // Calculating length of a str without library function

    char mystr[100];
    printf("Enter a string: ");
    scanf("%s", mystr);
    int length = 0;
    for (int i = 0; mystr[i] != '\0'; i++) {
        length++;
    }
    printf("Length of the string is: %d\n", length);
    equals();
}

int equals() {      // Comparing strings without library function

    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    for (int i = 0; str1[i] == str2[i]; i++) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            printf("The strings are equal.\n");
            return 1;
        }
        }
        printf("The strings are not equal.\n");
            return 0;
    }


