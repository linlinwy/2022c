# 2022c
資傳一甲的程式設計 的程式倉庫
# week01

# 放假(中秋節)

# weeek02


# week06
## step01-0
考試九九乘法表 考前複習 考後檢討同學出錯的狀況
```cpp
{
    for(int a=1; a<=9; a++)
    {
            for(int b=1; b<=9; b++)
            {
                    printf("%d%d:%2d", b, a, a*b);
            }
            printf("\n");
    }
}
```
## step01-1畫星星-金字塔
使用的技巧,是用左手i來建立鷹架
```cpp

#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}

//上周的畫星星
//*****鷹架5
//**** 鷹架4
//***  鷹架3
//**   鷹架2
//*    鷹架1
```

## week01-2 五層樓星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star = i*2-1;
        for(int k=0; k<space; k++){
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf(" 鷹架:%d樓 %d空格 %d星\n", i, space, star);
    }
}
```
## week01-3 最大公因數 暴力法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數字: ");
    int a, b, c;
    scanf("%d %d",&a,&b);

    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的數字是:%d",b);

}
```
## week01-4 輾轉相除
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數字: ");
    int a, b, c;
    scanf("%d %d",&a,&b);

    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的數字是:%d",b);

}
```
## week01-5 除了0以外都成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立，所以甚麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管甚麼東西，幾乎都成立\n");
}
```


## week  07-1 很長很長的整數 

```cpp
#include <stdio.h>
int main()
{
    int n =1234567812345678;
    printf("%d\n",n);

    long long int a= 1234567812345678;
    printf("%lld\n",a);
}
```
## week 07-2 複習最大公因數 long long int版本

```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld",&a, &b);

    long long int ans;
    for(long long int i=1; i<=a; i++){
        if( a%i==0 && b%i==0) ans = i;
    }
    printf("答案是:%lld\n",ans);
}
```
## week 07-3 輾轉相除法:老大，老二，老三

```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld",&a, &b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}

## week 07-4 倒過來剝皮

```cpp
#include <stdio.h>
int main()
{
    int n=123456789;
    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;

    printf("個位數是%d\n",n%10);
    n = n/10;
}
```
## week 07-4c 迴圈，倒過來剝皮

```cpp
#include <stdio.h>
int main()
{
    int n=1234;

    while(n>0){
        printf("­Ó¦ì¼Æ¬O:%d\n",n%10);
        n=n/10;
    }
}
```
## week08-2 while迴圈畫三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n)
        {
            if(k<=n-i) printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```
## week08-3 判斷質數
```cpp
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
```
## week08-4 列出所有質數
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    for(int n=2; n<=a; n++)
    {
        int bad=0;
        for(int i=2; i<n; i++)
        {
            if(n%i==0) bad=1;
        }
        if(bad==0) printf("%d ",n);
    }
}
```
