//Ramesh
void mul(int a ,int b)
{
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
    int x = atoi(argv[1]);
    int y = atoi(argv[3]);

    char ch = argv[2][0];

    switch(ch)
        {
            case '+' : add(x,y); break;
            case '-' : sub(x,y); break;
            case '/' : div(x,y); break;
            case '*' : mul(x,y); break;
            default : printf("Invalid option\n");
            return 0;
        }
}

