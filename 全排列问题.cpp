#include <stdio.h>
int fact(int n);
int per(int n, int m);//per表示全排列
int main()
{
	int n, m;
	printf("元素n=");
	scanf_s("%d", &n);
	printf("取出元素m=%d");
	scanf_s("%d", &m);
	printf("%d\n", per(n, m));
}
int fact(int n)
{
	if (n < 0)
		return 0;
	else if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
int per(int n,int m)
{
	int A;
	A = fact(n) / fact(n - m);
	return A;
}