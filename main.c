#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double l;

    scanf("%d", &n);
    scanf("%lf", &l);

    double area = ((n * l)*(l/(2*tan(M_PI/n))))/2;

    printf("%lf", area);

    return 0;
}
