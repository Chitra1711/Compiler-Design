#include <stdio.h>

int main()
{
    int n;
    float a,b;
    int temp;
    printf("Select the operation to perform");
    printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. power");
    scanf("%d",&n);
    printf("Enter the two numbers: ");
    scanf("%f %f",&a,&b);
    switch(n){
        case 1 : printf("%f", a+b);
        break;
        case 2 : printf("%f", a-b);
        break;
        case 3 : printf("%f", a*b);
        break;
        case 4 : printf("%f", a/b);
        break;
        case 5: temp = a;
        while(b>1){
            a*=temp;
            b--;
        }
        printf("%f",a);
        break;
        default: printf("Enter correct operator");
    }
    return 0;
}
