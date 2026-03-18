#include <math.h>
#include <stdio.h>
#define NMAX 30

int input(int *a, int *n);
double mean(int *a, int n);
double variance(int *a, int n);
int find_num(int *a, int n, double mean_v, double variance_v);

int main() {
    int n, data[NMAX];
    if (input(data, &n) == 0) {
        printf("%d", find_num(data, n, mean(data, n), variance(data, n)));
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int *n) {
    char c;

    if (scanf("%d%c", n, &c) != 2 || c != '\n' || *n <= 0 || *n > NMAX) {
        return 1;
    } else {
        for (int *p = a; p - a < *n; p++) {
            if (scanf("%d", p) != 1) {
                return 1;
            }
        }
    }
    if (scanf("%c", &c) != 1 || c != '\n') {
        return 1;
    }

    return 0;
}

double mean(int *a, int n) {
    double sum = 0;

    for (int *p = a; p - a < n; p++) {
        sum += *p;
    }

    return sum / n;
}

double variance(int *a, int n) {
    double sum = 0;

    for (int *p = a; p - a < n; p++) {
        sum += (pow((*p - mean(a, n)), 2));
    }

    return sum / n;
}

int find_num(int *a, int n, double mean_v, double variance_v) {
    for (int *p = a; p - a < n; p++) {
        if (*p % 2 == 0 && *p >= mean_v && *p <= mean_v + 3 * sqrt(variance_v) && *p != 0) {
            return *p;
        }
    }

    return 0;
}