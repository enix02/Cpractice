#include <stdio.h>

int main(void) {
	int x;
	x = 27;
	printf("%d歳\n", x);

	int year, month, day;
	year = 1992;
	month = 2;
	day = 20;
	printf("%d年 %d月 %d日\n", year, month, day);

	int y;
	y = 11;
	printf("x=%d\n", y);

	int a, b;
	a = 13, b = 17;
	printf("x=%d,y=%d\n", a, b);

	int j, k,tmp;
	j = 5, k = 7;
	
	tmp = j;
	j = k;
	k = tmp;

	printf("j=%d,k=%d\n", j, k);

	int z;
	scanf_s("%d", &z);
	printf("zの値は%d\n", z);
}