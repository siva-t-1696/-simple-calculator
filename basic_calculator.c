 // including header files

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
