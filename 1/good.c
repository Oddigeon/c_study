#include <stdio.h>

double fun(double a, double b);

int main() {
    double x, y;

    if (scanf("%lf%lf", &x, &y) != 2 || getchar() != '\n') {
        printf("n/a");
    } else {
        if (fun(x, y) == 1) {
            printf("good");
        } else {
            printf("ne good");
        }
    }
}

double fun(double a, double b) {
    if (a * a + b * b < 25) {
        return 1;
    } else {
        return 0;
    }
}
