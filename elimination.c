int main() {
    int i, j, n=3, k;
    float b[3][4], c;
    float x, y, z;
    for (i=0;i<n; i++){
        for (j=0;j<=n;j++) {
            scanf("%f", &b[i][j]);
        }
    }

    for (j=0; j<n;j++) {
        for(i=0;i<n;i++) {
            if (i<j) {
                c = b[i][j]/b[j][j];
                for (k=0;k<=n;k++) {
                    b[i][k] = b[i][k] - c*b[j][k];
                }
            }
        }
    }
    x = b[2][3]/b[2][2];
    y = b[1][3] - b[1][2]*x/b[1][1];
    z = b[0][3] - b[0][2]*x - b[0][1]*y/b[0][0];
    printf("The value of x, y z are %f%f%f", x, y, z);
}
