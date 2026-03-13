#include <stdio.h>
#define MAX 100

int main() {

    char str[MAX], remove[MAX];
    char result[MAX];
    int i, j = 0, k;
    int count;

    printf("Enter string: ");
    fgets(str, MAX, stdin);

    printf("Enter characters to remove: ");
    fgets(remove, MAX, stdin);

    for(k = 0; remove[k] != '\0'; k++) {

        if(remove[k] == '\n')
            break;

        count = 0;
        j = 0;

        for(i = 0; str[i] != '\0'; i++) {

            if(str[i] == remove[k]) {
                count++;
            }
            else {
                result[j] = str[i];
                j++;
            }
        }

        result[j] = '\0';

        if(count > 0)
            printf("'%c' removed %d time(s)\n", remove[k], count);
        else
            printf("'%c' not found\n", remove[k]);

        for(i = 0; result[i] != '\0'; i++)
            str[i] = result[i];

        str[i] = '\0';
    }

    printf("Result string: %s\n", str);

    return 0;
}
