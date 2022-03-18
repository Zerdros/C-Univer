#include <stdio.h>
#include <math.h>

void part_01()
{
    printf("Part One: \n");
    printf("\t1.1:\n");
    double a = 3.14159265358979323846, a1, a2, a3, l1, l2, l3, l4;
    int x5 = 49, x, x9 = 50, x99 = 10, x1 = 1, x2 = 13;
    a1 = acos(-1.0);
    printf("Number Pi is %.3f (const), math library %.3f.\n", a, a1);
    printf("\t1.3:\n");
    printf("Enter a number\n");
    //scanf("%d", &x);
    x = 3;
    printf("You enter a number: %d\n", x);
    printf("\t1.5: Print numbers in row with spaces.\n");
    printf("%d %d %d\n", x1, x2, x5);
    printf("\t1.7: Print three numbers in row, separe spaces.\n");
    printf("Enter three numbers:\n");
    a1 = 1.1; a2 = 1.23; a3 = 3.456;
    //scanf("%lf%lf%lf", &a1, &a2, &a3);
    printf("%f  %f  %f\n",a1, a2, a3);
    printf("\t1.9: Print pair in column.\n");
    printf("%d\n%d\n", x9, x99);
    printf("\t1.11:Print four numbers in column.\n");
    //scanf("%lf%lf%lf%lf", &l1, &l2, &l3, &l4);
    l1 = 1.1; l2 = 2.34; l3 = 4.32; l4 = 1.0;
    printf("Numbers:\n%.1f\n%.1f\n%.1f\n%.1f\n", l1, l2, l3, l4);
    printf("\t1.13: Print table all variants.\n");
    int e1 = 45, e2 = 1, e3 = 18, e4 = 17;
    printf("2 kg\t%d 1\t%d %d\n13 17\t19 %d\t5 %3d\n", e1, e3, e4, e2, e4);
    printf("\t1.14:Calculate statements and results.\n");
    x = -5;
    printf("(D) absolute (%d) = %d.\n", x, abs(x));
    l1 = 3.1;
    l2 = 5.0 * cos(l1);
    printf("(E) 5 * cos(%.3f) = %.3f.\n", l1, l2);
    l1 = -7.5 * pow((double)x, 2.0);
    printf("(G) -7.5 * %d ^ 2 = %.3f.\n", x, l1);
    x1 = 2; x2 = 3;
    l1 = (double)x1 * sqrt(2.0 * (double)x2);
    printf("(K) %d * sqrt(2 * %d) = %.3f.\n", x1, x2, l1);
}


int main()
{
    part_01();
    return 0;
}
