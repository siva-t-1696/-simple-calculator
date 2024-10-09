
void mul(int a ,int b)
{
    printf("The two numbers are a=%d b=%d\n",a,b);
    print("multiplication of two numbers result is a*b=\n",a*b);
}
void div(int a,int b)
{
    if(b==0)
    {
        printf("you will get floating point exception\n");
        return;
    }
    else
    {
        printf("division of two numbers is :%d\n",a/b);
    }
}
 // including header files

//sathish
void add(int a ,int b)
{
    printf("%d",a+b);
}
void sub(int a, int b)
{
    printf("%d",a-b);
}

//shrikanth

#include<stdio.h>          
#include<stdlib.h>

int main(int argc,char ** argv)     // including command line arguments
{
        if(argc!=4)                 // checking 3 proper inputs from user 
        {
            printf("./a.out num1  operator  num2\n");   // printing the error message 
            return 0;
        }
}

