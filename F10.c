/*Input a word and display number of lowercase. Use user defined function to solve this.*/

#include <stdio.h>
#include <string.h>

int count_lowercase(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }
    return count;
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    int lowercase_count = count_lowercase(word);

    printf("Number of lowercase letters: %d\n", lowercase_count);

    return 0;
}