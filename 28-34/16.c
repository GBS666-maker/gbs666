#include <stdio.h>
int main() {
    int a[3][3] = {0}, i=0, j=1, n=1;
    while (n<=9) {
        a[i][j] = n++;
        int ni = (i-1+3)%3, nj = (j+1)%3;
        if (a[ni][nj] != 0) i = (i+1)%3;
        else { i=ni; j=nj; }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}