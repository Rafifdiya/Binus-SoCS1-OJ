#include <stdio.h>

int main() {
    double L, B, H;
    scanf("%lf %lf %lf", &L, &B, &H);
    
    //Luas permukaan
    double area = (B * H) + (3 * L * B);
    
    printf("%.3lf\n", area);
    
    return 0;
}

