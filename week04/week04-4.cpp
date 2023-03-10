#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *p1,*p2;///和在一起的宣告法 都要打星星
    printf("a:%d b:%d\n",a,b);

    p1=&a;
    *p1=99;
    printf("a:%d,b:%d\n",a,b);

    p2=p1;
    *p2=77;
    printf("a:%d b:%d\n",a,b);
}
