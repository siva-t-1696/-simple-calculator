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