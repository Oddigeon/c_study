#include <stdio.h>

int max(int a, int b);

int main() {
    int x, y;

    if (scanf("%d %d", &x, &y) != 2 || getchar() != '\n') {
        printf("n/a");

        return 1;
    } else {
        printf("%d", max(x, y));
    }
}

int max(int a, int b) {
    int m = a;
    if (b > a) {
        m = b;
    }

    return m;
}