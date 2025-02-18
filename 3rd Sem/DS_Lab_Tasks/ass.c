#include<stdio.h>

int main() {
    int n,factorial=1,i;
    printf("Enter a positive Number : ");
    scanf("%d",&n);

    if(n<0){
        printf("Invalid Numbers.\n");
    } else {
        i = n;
        while (i > 0) {
            factorial *= i;
            i--;
        }

        printf("Factorial of %d is %d\n",n,factorial);
    }

    return 0;
}
