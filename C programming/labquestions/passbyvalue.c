#include<stdio.h>
int passbyvalue(int num);
int main()
{
    int a=10;
    printf("Before calling function, a=%d.\n",a);

    passbyvalue(a);
    printf("After calling function, a=%d.\n",a);

}
int passbyvalue(int num)
{
    num=20;
    return num;
}