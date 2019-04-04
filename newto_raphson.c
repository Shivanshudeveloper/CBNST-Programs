#include<stdio.h>
#include<math.h>
float func(float x) {
    return pow(x,3)-4*x+9;
}

float funcd(float x) {
    return 3*pow(x,2)-4;
}
int main() {
    float x0, h, error, x1;
    int i, itr;
    printf("Enter the value of x0 error and iteration");
    scanf("%f%f%d", &x0, &error, &itr);
    for (i=1;i<itr;i++) {
        h = func(x0)/funcd(x0);
        x1 = x0 - h;
        printf("The iteration and error are %f%i", x1, i);
        if (fabs(h) < error) {
            printf("The iteration and error are %f%i", x1, i);
            return(0);
        }
        x0 = x1;
    }
    printf("insufficient iteration");
    return(1);
}
