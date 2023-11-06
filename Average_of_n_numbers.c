#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    
    for (int i = 0; i < n; i++) {
        double num;
        scanf("%lf", &num);
        sum += num;
    }

    double average = sum / n;
    printf("Average: %.2lf\n", average);

    return 0;
}
