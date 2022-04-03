#include <stdio.h>
#include <math.h>

void part_01(void)
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
    printf("\t1.15:Calculate statements and results.\n");
    x = -1; x1 = 4;
    a3 = (double)x / (pow(x1, 2));
    printf("(A) (%d) / (%d ^ 2) = %.3f.\n", x, x1, a3);
    x1 = 2; x2 = 3;
    x = pow(2, pow(x1, x2));
    printf("(K) 2 ^ (%d ^ %d) = %d.\n", x1, x2, x);
    x = 1; x1 = 3;
    a3 = 5.45 * (((double)x + 2.0 * (double)x1) / (2.0 - (double)x));
    printf("(D) 5.45 * (%d + 2 * %d) / (2 - %d) = %.3f.\n", x, x1, x, a3);
    printf("\t1.16:Calculate statements and results.\n");
    a2 = 3.14; x = 2; x1 = 4;
    a3 = 0.5 * x * x1 * cos(a2);
    printf("(I) (1 / 2) * %d * %d * cos(%.3f) = %.3f.\n", x, x1, a2, a3);
    x = 2; x1 = 3; x2 = 4;
    a3 = (double)(x + x1) / (double)(x1 + x2);
    printf("(J) (%d + %d) / (%d + %d) = %.3f.\n", x, x1, x1, x2, a3);
    l1 = 2.3;
    l2 = fabs(2.0 * sin(l1)) - (3.0 * fabs(l1 / 2.0));
    printf("(O) abs (2 * sin (%.3f)) - 3 * abs(%.3f / 2) = %.3f.\n", l1, l1, l2);
    printf("\t1.17:Calculate statements and results.\n");
    a3 = 3.14;
    l1 = sqrt(1.0 - pow(sin(a3), 2.0));
    printf("(O) sqrt(1 - sin(%.3f) ^ 2) = %.3f.\n", a3, l1);
    x = 2; x1 = 4; x5 = 6; x9 = 5;
    a3 = (x * pow(x1, 2.0) / 2.0) + x * x5 * x9;
    printf("(G) (%d * %d^2 / 2) + %d*%d*%d = %.3f.\n", x, x1, x, x5, x9, a3);
    x = -3;
    x1 = abs(x) + abs(x + 1);
    printf("(S) absolute(%d) + absolute(%d + 1) = %d.\n", x, x, x1);
    x = -3;
    x1 = abs(1 - abs(x));
    printf("(T) absolute(1 - absolute(%d)) = %d.\n", x, x1);
    x = 2;
    //x1 = 45; Warning
    x1 = -25;
    x1 = x1 + x;
    printf("\t1.18: S: 45 => S: -25 => S: S + %d = %d.\n",x, x1);
    //x = 0;  Warning
    x1 = 30;
    x2 = x1 - 5;
    x1 = 2 * x2;
    x = x1 - 100;
    printf("\t1.20: S: 0 => K: 30 => D: K - 5 => K: 2 * D => S: K - 100 = %d.\n", x);
    // Вычисление по известным формулам
    l1 = 3.4;
    l2 = 7.0 * pow(l1, 2.0) - 3.0 * l1 + 6.0;
    printf("\t1.22: Function: y = 7 * (x ^ 2) - 3 * x + 6 = %.3f.\n", l2);
    l1 = 2.4;
    l2 = (pow(l1, 2.0) + 10) / (sqrt(pow(l1, 2.0)  + 1));
    printf("\t1.23: Function: y = ((%.3f ^ 2) + 10) / sqrt((%.3f ^ 2) + 1)= %.3f.\n", l1, l1, l2);
}

int main(void)
{
    part_01();

    return 0;
}
