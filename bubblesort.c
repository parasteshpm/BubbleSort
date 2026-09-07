#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char temp[20];
    int strings;
    int pass = 0;
    int j = 0;
    printf("Enter the number of strings(should be less than 12): ");
    scanf("%d", &strings);
    char inputnum[10][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    while (pass != strings - 1) {
    for (int i = 0; i < strings - 1; i++) {
        j = i + 1;
        if (strcmp(inputnum[j], inputnum[i]) < 0) {
            strcpy(temp, inputnum[i]);
            strcpy(inputnum[i], inputnum[j]);
            strcpy(inputnum[j], temp);
        }
    }
    pass++;
}
    for (int k = 0; k < strings; k++) {
        printf("The sorted string is: %s\n", inputnum[k]);
    }
}
