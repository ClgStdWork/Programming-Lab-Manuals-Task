#include <stdio.h>
int ReverseOrder(int *num);
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    ReverseOrder(&number);
    printf("Reversed number: %d\n", number);
    return 0;
}

int  ReverseOrder(int *num) {
    int reversed = 0;
    int original = *num;

    while (original != 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }

   return *num = reversed; 
}


