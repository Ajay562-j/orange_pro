#include<stdio.h>
int main()
{
    int a=45;//normal variable declaration
    int *ptr;//pointer variable declaration
    ptr=&a;//pointer definition
    int **ptr1;//another or double pointer variable
    ptr1=&ptr;//double pointer definition
    printf("%d\n",a);//printing a value
    printf("%u\n",&a);//printing address of a variable
    printf("%u\n",ptr);
    printf("%u\n",*ptr);
    printf("%u\n",*(&a));
    printf("%u\n",&ptr);
    printf("%u\n",ptr1);
    printf("%d\n",**ptr1);
    return 0;
}
