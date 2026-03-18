#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double aniezi(double x);
double bernulli(double x);
double gip(double x);

int main(){
    double pi = PI;

    for (int i = 0; i < 42; i++){

        double step = -pi + (2 * pi / 41) * i;

        double a = aniezi(step);
        double b = bernulli(step);
        double c = gip(step);

        printf("%.7lf |", step);
        printf("%.7lf |", a);
        printf("%.7lf |", b);
        printf("%.7lf\n", c);

    }

    return 0;
}

double aniezi(double x){

    return (pow(1, 3) / (pow(1, 2) + x * x));

}

double bernulli(double x){

    return sqrt((sqrt(pow(1, 4) + 4 * pow(x, 2) * 1)) - x * x - 1);
}

double gip(double x){

    return 1 / (x * x);
}