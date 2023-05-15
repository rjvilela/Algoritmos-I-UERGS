#include <stdio.h>
int i, j, k;
int main()
{
    for (i=0, j=1, k=2; i < k; i++) {
        k = k+i%2;
    }
    printf ("%d,%d, %d", i, j , k);
}