# include <stdio.h>
int main()
{
    int num,sum,pro,dig1,dig2,dig3,D;
    printf("Enter a three digit no:");
    scanf("%d",&num);
    if((num >= 100) && (num <= 999))
    {
        if(num % 10 == 0)
        printf("undefined");
        else
        {
            dig1 = num / 100;
            printf("%d",dig1);
            D = num % 100;
            dig2 = D / 10;
            printf("%d",dig2);
            dig3 = D % 10;
            printf("%d",dig3);
            sum = dig1 + dig2 + dig3;
            pro = dig1 * dig2 * dig3;
            if(sum % pro == 0)
            printf("divisible by product");
            else
            printf("Not Divisible.");
        }
    }
    else
    printf("Invalid input.");
    // if(sum % pro == 0)
    // printf("Divisible by product");
    // else
    // printf("not divisible by product ");
    return 0;
}