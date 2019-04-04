#include<stdio.h>
#include<math.h>
int main() {
    int i, j, k, n=3;
    float b[3][4], x, y, z, c;
    for (i=0;i<n; i++) {
        for (j=0;j<=n;j++) {
            printf("Enter the 2D\n");
            scanf("%f", b[i][j]);
        }
    }

    for (j=0;j<n;j++) {
        for (i=0;i<b;i++) {
            if (i!=j) {
                c = b[i][j]/b[j][j];
                for (k=0;k<n;k++) {
                    b[i][k] = b[i][k] - c*b[j][k];
                }
            }
        }
    }
    x = b[2][3]/b[2][2];
    y = b[1][3]/b[1][1];
    z = b[0][3]/b[0][0];
    printf("The value of x, y, z are %f%f%f", x, y, z);
}
