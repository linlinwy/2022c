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
## week08-1 用兩個for迴圈畫三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            if(k<=n-i) printf(" ");
            else printf("*");
        }
        printf("\n");
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
## week10-1 判斷質數
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};

    printf("a[0]:\n",a[0]);
    printf("a[1]:\n",a[1]);
    printf("a[2]:\n",a[2]);
    printf("a[3]:\n",a[3]);

}
```
## week10-2 倒過來的迴圈
```cpp
#include <stdio.h>
int main()
{
    int a[4] ={10,20,30,40};

    for(int i=0; i<4; i++)
    {
        printf("a[%d] :%d\n", i, a[i]);
    }
    for(int i=3; i>=0; i--)
    {
        printf("%d ",a[i]);

    }

}
## week10-3 陣列
```cpp
#include <stdio.h>
int main()
{
	int a[100];
	//scanf("%d",&a[100]);
	
	for(int i=0; i<100; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=99; i>=0; i--)
	{
		printf("%d\n",a[i]);
	}
}
```
## week11-1 三數排列
```cpp
#include <stdio.h>
int main()
{
    int a=90, b=80;
    printf("a:%d b:%d\n",a,b);

    int temp=a;
    a=b;
    b=temp;

    printf("a:%d b:%d\n",a,b);
}
```
## week11-2 三數比大小排列
```cpp
#include <stdio.h>
int main()
{
    int a=90, b=80, c=70;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
## week11-3 百數排列
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};

    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10; i++)
    {
        if(a[i]>a[i+1]);
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
}
```
## week11-4 泡泡排序法
```cpp
