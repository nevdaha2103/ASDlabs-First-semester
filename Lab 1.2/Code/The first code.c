#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int counter = 0;
    
  printf("Enter the value of n: ");
    counter++;
    scanf("%d", &n);
    counter++;
    double sumResult = 0;
    counter++;
    counter += 2;
    
  for (int i = 1; i <= n; i++) {
        counter += 3;
        double productResult = 1.0;
        counter++;
        int powerResult = 1;
        counter++;
        counter += 2;
        
    for (int j = 1; j <= i; j++) {
            counter += 3;
            powerResult *= i;
            counter++;
            productResult *= ((j + 1) * sin(j));
            counter += 5;

        }
        
    sumResult += productResult / (i * (i + 1));
        counter += 4;
    }
    
  printf("Result: %.7f\n", sumResult);
    counter++;
    printf("Operations Count: %d\n", counter);

    return 0;
}
