#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M, N;
    int a[20][20];
    int used[201] = {0};   
    int i, j, num;

    scanf("%d %d", &M, &N);

    srand(time(NULL));     

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {

            do {
                num = rand() % 101 + 100; 
            } while (used[num] == 1);

            a[i][j] = num;
            used[num] = 1;
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
