#include <math.h>
#include <stdio.h>

double equation(double a);

int main() {
    double x;

    if (scanf("%lf", &x) != 1) {
        printf("n/a");
    } else if (x <= -10) {
        printf("n/a");
    } else if (x == 0) {
        printf("n/a");
    } else {
        printf("%.1f", equation(x));
    }

    return 0;
}

double equation(double a) {
    double p1 = 7e-3 * pow(a, 4);
    double p2 = ((22.8 * pow(a, 1 / 3) - 1e3) * a + 3) / (a * a / 2);
    double p3 = a * pow((10 + a), (2 / a));

    return p1 + p2 - p3 - 1.01;
}