#include<stdio.h>
#include<math.h>
double func(double x) {
    return pow(x,3)-4*x+9;
}
void bisection(double a, double b) {
    if (func(a)*func(b) >= 0) {
        printf("Not Correct Root");
        return;
    } else if (func(a) == 0) {
        printf("The Roots are %lf", a);
    } else if (func(b) == 0) {
        printf("The Roots are %lf", b);
    }
    double c = a;
    while ((b-a) >= 0) {
        c = a*func(b)-b*func(a)/func(b)-func(a);
        if (func(c) == 0.0) {
            break;
        } else if (func(c)*func(b) < 0){
            b = c;
        } else {
            a = c;
        }
    }
    printf("The Roots Are %lf", c);
}
int main() {
    double a = -5, b = 5;
    (a>b)?bisection(a,b):bisection(b,a);
    return 0;
}
