#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是恨孤獨的質樹:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) bad=1;
    }
        if(bad==0) printf("%d是質數(沒有壞掉的)",n);
        else  printf("%d不是質數(早就壞了)",n);
}
