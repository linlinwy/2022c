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
## week11-4 最肥的數字
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};

    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    for(int i=0; i<10-1; i++) printf("%d ",a[i]);
    printf("\n");


    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    for(int i=0; i<10-1; i++) printf("%d ",a[i]);
    printf("\n");


    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
}
```
## week11-5 泡泡排序法
```cpp
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};

int main()
{
    //int a[10]={90,80,70,60,50,40,30,20,10,0};

    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int k=0; k<10-1; k++)
    {
        for(int i=0; i<10-1; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
    }
}
```
## week12-1 選擇排序法
```cpp
#include <stdio.h>
int a[5]={5,4,3,2,1};
int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<5; i++) printf("%d ",a[i]);
}
```
## week12-2 宣告
```cpp
#include <stdio.h>
int main()
{
    int a;//宣告整數a
    int b=10;//宣告整數b裡面放10
    int c[3];//宣告整數陣列c有3格
    int d[3]{10,20,30};//軒告整數陣列d有3格 放10 20 30 
    int g[2][3];//宣告二微陣列
    int h=[2][3]={10,20,30},{40,50,60};
    //宣告二微陣列 左手i右手j
}
```
## week12-3 左手右手
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={{10,20,30},{40,50,60}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## week12-3 矩陣乘法
```cpp
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			c[i][j]=0;
			for(int k=0; k<n; k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
## week13-1 股票最佳買點與賣點
```cpp
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int left,right;
	int ans=-99999999;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[j]-a[i]>ans)
			{
				ans=a[j]-a[i];
				left=a[i];
				right=a[j];
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",right,left,ans);
}
```
## week13-2 數學歸納法
```cpp
#include <stdio.h>
int a[50];
int main()
{
    a[0]=0;
    a[1]=1;

    for(int i=2; i<45; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0; i<45; i++)
    {
        printf("%d ",a[i]);
    }
}
```
## week13-3 矩陣轉180
```cpp
#include <stdio.h>
int a[200][200];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");

	for(int i=n-1; i>=0; i--)
	{
		for(int j=m-1; j>=0; j--)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}
```
## week13-4 function 函式
```cpp
#include <stdio.h>

int addnum(int a,int b)
{
    return a+b;
}
int main()
{
    int ans=addnum (2,3);
    printf("addnum(2,3) 會得到 %d\n",ans);
}
```
## week14-1
```cpp
#include <stdio.h>
int a=10;
void func()
{
    a=30;
    printf("func()中 a改成:%d\n",a);
}
int main()
{
    printf("main()中 a是:%d\n",a);
    func();
    printf("main()中 a是:%d\n",a);
}
```
## week14-2
```cpp
#include <stdio.h>
int a=10;
void func()
{
    int a=20;
    printf("func()裡的a是:%d\n",a);
    a=30;
    printf("func()中 a改成:%d\n",a);
}
int main()
{
    printf("main()中 a是:%d\n",a);
    func();
    printf("main()中 a是:%d\n",a);
}
```
## week14-3
```cpp
#include <stdio.h>
int n=30;
int funcA(int a, int b)
{
    printf("funcA()的a,b是:%d %d\n",a,b);
    return a+b;
}
int funcB(int n)
{
    printf("funcB()的n是:%d\n",n);
    int ans=funcA(n,n);
    return ans;
}
int main()
{
    int a=10, b=20;
    funcB(b);
    funcA(a,b);
    printf("main()的a,b是:%d %d\n",a,b);
}
```
## week14-4 複習輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);

    while(1)
    {
        c=a%b;
        printf("%d%d%d\n",a,b,c);

        if(c==0) break;
        a=b;
        b=c;
    }
    printf("%d"),b;

}
```
## week14-5 函式
```cpp
#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;

    return gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans = gcd(a,b);
    printf("%d",ans);
}
```
## week15-1 複習浮點數
```cpp
#include <stdio.h>
int main()
{
    printf("Hello World");

    char line[]="Hello World";

    printf("整數 %d\n",100);
    printf("浮點數 %f\n",3.141592653589793238462643393279);
    printf("%s 字串\n",line);
}
```
## week15-2 單引號
```cpp
#include <stdio.h>
int main()
{
    printf("%c : %d\n",65,65);
    printf("%c : %d\n",66,66);
    printf("%c : %d\n",67,67);
    printf("%c : %d\n",'A','A');
    printf("%c : %d\n",'B','B');
    printf("%c : %d\n",'C','C');
    printf("上面用數字 64 及單引號'a'的結果都一樣\n");
    printf("%c : %d\n",97,97);
    printf("%c : %d\n",'a','a');
}
```
## week15-3 單引號
```cpp
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');

    char line[]="Hello World AAA";

    for(int i=0;      ;i++){
        char c=line[i];
        if(c==0) break;
        printf("=%c",c);
    }
}
```
## week15-4 字數反串
```cpp
#include <stdio.h>
char line [3000];
int main()
{
    printf("請輸入一堆字母，不要有空格喔:");
    scanf("%s",line);
    int N=0;
    for(int i=0; line[i]!=0; i++)
    {
        N++;
    }
    for(int i=N-1; i>=0; i--)
    {
        printf("%c",line[i]);
    }
}
```
## week16-1 scanf()的細節
```cpp
#include <stdio.h>
int main()
{
    char line[300];
    char * p=line;

    int n=10;
    int *p2=&n;

    float f=3.1415926;
    float *p3=&f;
    ///scanf("%d",&n);
    char c='A';
    char *p4=&c;
}
```
## week16-2 字串相關函式
```cpp
#include <stdio.h>
#include <string.h>
int main()
{
    char line[20]="Hello";
    int N = strlen(line);
    printf("Hello字串的長度:%d\n",N);

    char line2[20];
    strcpy(line2 ,line );
    printf("line2得到:%s\n",line2);

    printf("比較字串strcmp(line,line2)得到%d\n",strcmp(line,line2));
}
```
## week16-3 股票
```cpp
#include <stdio.h>
int a[2000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int max=-99999999,buy,sell;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[j]-a[i]>max)
			{
				max=a[j]-a[i];
				buy=i;
				sell=j;
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",a[sell],a[buy],max);
}
```
## week01-1 愛心
```cpp
//(x*x+y*y-1)^3-x*x*y*y*y<0裡面
size(400,400);//視窗大小
fill(255,0,0);//紅色
noStroke();  //不要用外框的stroke
//ellipse(200,200,100,150);先試橢圓
for(int i=0; i<400; i++){
  for(int j=0; j<400; j++){
    float x=(j-200)/100.0;
    float y= -(i-200)/100.0;
    if( (x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1) -x*x*y*y*y <0){
      ellipse (j,i,2,2);
    }
  }
}
```
## week01-2 先讀入字母 在讀入整數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入字母: ");
    char c;
    scanf("%c",&c);
    printf("你輸入 %c\n",c);

    printf("請輸入整數: ");
    int a;
    scanf("%d",&a);
    printf("你輸入 %d\n",a);
}
```
## week01-3 字串
```cpp
#include <stdio.h>
int main()
{
    char c;
    printf("請輸入字串: ");
    char line [40];
    scanf("%s",line );
    printf("你讀入了: %s\n",line);

}
```
## week01-4
```cpp
#include <stdio.h>
#include <string.h>
int main()
{
	char line[40];
	int total=0;
	while(scanf("%s",line)==1){
		int ans=0;
		int N = strlen(line);
		for(int i=0; i<N; i++)
		{
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		total += ans;
	}
	printf("Total: %d\n",total);
}
```
## week02-1 while + scanf() ==2
```cpp
#include <stdio.h>

int main()
{
	int a,b;
	while( scanf("%d%d",&a,&b)==2){
		int ans = b-a;

		printf("%d\n",ans);
	}


}
```
## week02-2 if() to compare big and small
```cpp
#include <stdio.h>
//10 12
//10 14
//100 200
//300 400
//500 300

int main()
{
	int a,b;
	while( scanf("%d%d",&a,&b)==2){
		int ans = b-a;
		if(a>b) ans=a-b;
		if(b>a) ans=b-a;
		printf("%d\n",ans);
	}


}
```
## week02-3 long long int
```cpp
#include <stdio.h>

int main()
{

    long long int a,b;
///很長很長的整數 改用long long int
	while( scanf("%lld%lld",&a,&b)==2){
		long long int ans =b-a;
		if(ans<0) ans=a-b;
		///if(a>b) ans=a-b;
		///if(b>a) ans=b-a;		
    printf("%lld\n",ans);
   }
}

///32位元進入64位元，發生IntelAMD之爭
///64 x86 程式可互相相容 (int用32位元)
///42,9496,7296 42億
```
## week02-4 c++
```cpp
#include <iostream> //#include <stdio.h>


int main()
{
	long long int a,b;

	while( std::cin >> a>>b){
//while(scanf ("%lld%lld",&a,&b)==2){
		long long int ans = a-b;
		if(ans<0) ans = b-a;
		//printf("%lld\n",ans);
		std::cout << ans << std::endl;
	}


}
```
## week02-5  c++使用 name
```cpp
#include <iostream>
using namespace std

int main()
{
	long long int a,b;

	while(cin >> a>>b){
		long long int ans = a-b;
		if(ans<0) ans = b-a;
		cout << ans << endl;
	}


}
```
## week03-1
```cpp
#include <stdio.h>
int main()
{
	char line [30];
	while(scanf("%s",line)==1){
		printf("%s",line);
		printf(" -- is not a palindromes.\n\,");
	}
}
```
## week03-2 迴文
```cpp
#include <stdio.h>
#include <string.h>
int main()
{
    char line[30];
    scanf("%s",line);
    int N=strlen(line);
    int bad=0;
    for(int i=0; i<N; i++)
    {
        if(line[i]!=line[N-1-i]) bad=1;
    }
    if(bad==1) printf("他不是迴文\n");
    else printf("他是迴文\n");
}
```
