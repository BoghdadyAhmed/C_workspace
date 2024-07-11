#include <stdio.h>
int main()
{
     /*
     
     * multiplication 
     / division 
     % modulus 
     + addition 
     - subtraction 
     */



    int num;
    int num1;
    float num2;
    float num3;
    int res;

    num =10;
    num1 = 15;
    num2 = 5.5;
    num3 = 9.7;
    printf("division of num and num1 : %d \n",num / num1);
    printf("division of num and num2 : %f \n",num / num2);
    printf("division of num2 and num : %f \n",num2 / num);
    printf("division of num2 and num3 :%f \n",num2 / num3);
    printf("addition of num and num1 :%d\n ",num + num1);
    printf("modulus of division num and num1:%d\n", num1 % num);
    
res = (2+5)*(4-3);
printf("res=%d\n",res);
res = 5-2+13%10;
printf("res=%d\n",res);










    return 0;
}
