#include <stdio.h>
#define MAX 100

int sumDigit(char []);

int main() {

    char text[MAX];
    int result;

    printf("Enter input: ");
    fgets(text, MAX, stdin);

    result = sumDigit(text);

    printf("Sum of digit char: %d", result);

    return 0;
}

int sumDigit(char t[]) {

    int i = 0;
    int sum = 0;

    while(t[i] != '\0') {

        if(t[i] >= '0' && t[i] <= '9') {
            sum += t[i] - '0';
        }

        i++;
    }

    return sum;
}
