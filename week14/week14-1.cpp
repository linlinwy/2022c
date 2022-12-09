#include <stdio.h>
int a=10;
void func()
{
    a=30;
    printf("func()¤¤ a§ï¦¨:%d\n",a);
}
int main()
{
    printf("main()¤¤ a¬O:%d\n",a);
    func();
    printf("main()¤¤ a¬O:%d\n",a);
}

