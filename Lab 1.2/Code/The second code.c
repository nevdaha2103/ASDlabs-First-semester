#include <stdio.h>
#include <math.h>

double productResults[1000] = {0};
double calculateProduct(int i, int count) {
    if (productResults[i] != 0) {
        count += 2;
        return productResults[i];
    }

    double result = 1.0;
    int powerResult = 1;
    count += 4;
    for (int j = 1; j <= i; j++) {
        count += 5;
        powerResult *= i;
        result *= ((j + 1) * sin(j));
    }

    productResults[i] = result;
    count += 3;
    return result;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double sumResult = 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        sumResult += calculateProduct(i, count) / (i * (i + 1));
        count += 7;
    }

    printf("Result: %.7f\n", sumResult);
    count += 2;
    printf("Operations Count: %d\n", count);

    return 0;
}
