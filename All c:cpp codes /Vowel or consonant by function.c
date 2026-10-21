#include <stdio.h>
#include <ctype.h>   // for tolower()

int checkVowel(char ch) {
    ch = tolower(ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        return 1;   // vowel
    } else {
        return 0;   // consonant
    }
}

int main() {
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) {

        if (checkVowel(ch)) {
            printf("%c is a vowel\n", ch);
        } else {
            printf("%c is a consonant\n", ch);
        }

    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}

