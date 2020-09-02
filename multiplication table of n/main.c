#include<stdio.h>

int main() {

    int n;
    int n2;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the final multiply: ");
    scanf("%d", &n2);
    for (int i = 1; i <= n2; i++) {
        printf("\n %d * %d = %d", n, i, (n * i));

    }



}
