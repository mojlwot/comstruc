#include <stdio.h>

long convert(long h, long m, long s);

long convert(long h, long m, long s) {
    return (h * 3600) + (m * 60) + s;
}

int main() {
    long h, m, s;
    long total;

    scanf("%ld %ld %ld", &h, &m, &s);

    total = convert(h, m, s);

    printf("%ld\n", total);

    return 0;
}
