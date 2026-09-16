 #include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int f = 60, g = 70, h = 80, i = 90, j = 100;

    int sum = a + b * c + d + e, sub = a - b * c - d + e, mul = a * b - c * d * e;
    
    
    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);

    return 0;
}
