#include<stdio.h>
#include<conio.h>
int sumf(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    printf("%d+%d = %d\n",n1,n2,sum);
}

int subf(int n1,int n2)
{
    int sub;
    sub=n1-n2;
    printf("%d-%d = %d\n",n1,n2,sub);
}

int mulf(int n1,int n2)
{
    int mul;
    mul=n1*n2;
    printf("%d*%d = %d\n",n1,n2,mul);
}

int divf(int n1,int n2)
{
    int div;
    div=n1/n2;
    printf("%d/%d = %d\n",n1,n2,div);
}

int main()
{
    int sum_num1,sum_num2;
    int sub_num1,sub_num2;
    int mul_num1,mul_num2;
    int div_num1,div_num2;
    int op;

    repeat :
    printf("\nENTER YOUR OPERATION : \n"
                        " 1 - ADDITION\n"
                        " 2 - SUBTRACTION\n"
                        " 3 - MULTIPLICATION\n"
                        " 4 - DIVISION\n"
                        " 5 - EXIT\n\n");             
    scanf("%d",&op);  

    switch (op)
    {
    case 1:
        printf("ENTER FIRST NUMBER : ");
        scanf("%d",&sum_num1);
        printf("ENTER SECOND NUMBER : ");
        scanf("%d",&sum_num2);
        sumf(sum_num1,sum_num2);
        goto repeat;
        break;

    case 2:
        printf("ENTER FIRST NUMBER : ");
        scanf("%d",&sub_num1);
        printf("ENTER SECOND NUMBER : ");
        scanf("%d",&sub_num2);
        subf(sub_num1,sub_num2);
        goto repeat;
        break;    
    
    case 3:
        printf("ENTER FIRST NUMBER : ");
        scanf("%d",&mul_num1);
        printf("ENTER SECOND NUMBER : ");
        scanf("%d",&mul_num2);
        mulf(mul_num1,mul_num2);
        goto repeat;
        break;

    case 4:
        printf("ENTER FIRST NUMBER : ");
        scanf("%d",&div_num1);
        printf("ENTER SECOND NUMBER : ");
        scanf("%d",&div_num2);
        divf(div_num1,div_num2);
        goto repeat;
        break;

    case 5:
        printf("\nTHANKS FOR USING CALCULATOR");

    default:
        break;
    }    
}





