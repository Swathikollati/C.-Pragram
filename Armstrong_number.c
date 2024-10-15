#include <stdio.h>
void main() 
{
    int num, originalNum, rem, result = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        rem= originalNum % 10; 
        result += rem* rem* rem; 
        originalNum /= 10; 
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}



