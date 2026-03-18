#include <stdio.h>
#define NMAX 10

int input(int *a);
void sorting(int *a);
void output(int *a);

int main() {
    int data[NMAX];
    if (input(data) == 0) {
        sorting(data);
        output(data);
    } else {
        printf("n/a");
        return 1;
    }

    return 0;
}

int input(int *a) {
    char c;

    for (int *p = a; p - a < NMAX; p++) {
        if (scanf("%d", p) != 1) {
            return 1;
        }
    }

    if (scanf("%c", &c) != 1 || c != '\n') {
        return 1;
    }

    return 0;
}

void sorting(int *a) {
    int x = 0;
    int c = 1;
    while (c == 1) {
        c = 0;
        for (int *p = a; p - a < NMAX - 1; p++) {
            for (int *i = a; i - a < NMAX - 1; i++) {
                if (*i > *(i + 1)) {
                    x = *i;
                    *i = *(i + 1);
                    *(i + 1) = x;
                    c = 1;
                }
            }
        }
    }
}

void output(int *a) {
    for (int *p = a; p - a < NMAX; p++) {
        printf("%d", *p);
        if (p - a + 1 != NMAX) {
            printf(" ");
        }
    }
}