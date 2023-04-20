#include <stdio.h>
#include <math.h>

int main() {
    int a = 3, b = 27;
    float sa, sg;

    // знаходження середнього арифметичного
    sa = (a + b) / 2.0;
    printf("Середнє арифметичне: %.2lf\n", sa);

    // знаходження середнього геометричного
    sg = sqrt(a * b);
    printf("Середнє геометричне: %.2lf\n", sg);

    return 0;
}
