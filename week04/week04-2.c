#include <stdio.h>
int main()
{
	printf("��J�褸�~:");
	int n;
	scanf("%d",&n);
	if( n%400==0 ) printf("Yes");
	else if( n%100==0 ) printf("No");
	else if( n%4==0 ) printf("Yes");
	else printf("No");
}
