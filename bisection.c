#include<stdio.h>
#include<math.h>
double func (double x) {
    return pow(x,3)-4*x+9;
}
void bisection (double a, double b) {
    if (func(a)*func(b) >= 0) {
        printf("Wrong Roots");
        return;
    }
    double c = a;
    while((b-a) >= 0.00001) {
        c = (a+b)/2;
        if (func(c) == 0.0) {
            break;
        } else if(func(c)*func(b) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    printf("The Roots Are %lf", c);
}
int main() {
    double a = -5, b = 5;
    bisection(a, b);
    return 0;
}
