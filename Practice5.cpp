#include <stdio.h>
int main(void) {
	/* 練習問題5-1
	for (int i = 0; i < 10; i++) {
		printf("SPAM\n");
	}
	*/

	/* 練習問題5-2
	for (int i = 1; i < 10; i++) {
		printf("%d ", i * 3);
	}
	*/

	/* 練習問題5-3 
	int result = 1;
	for (int i = 1; i < 9; i++) {
		result = result * 2;
	}
	printf("%d", result);
	*/
	

	/* 練習問題5-4
	int result = 1;
	for (int i = 1; i < 8; i++) {
		result = result * i;
	}
	printf("%d", result);
	*/

	/* 練習問題5-5 
	int score, sum;
	sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("整数を入力してください：");
		scanf_s("%d", &score);
		sum += score;
	}
	printf("%d", sum / 10);
	*/

	/* 練習問題5-6
	int score,win, lose;
	win = lose = 0;
	for (int i = 0; i < 10; i++) {
		printf("0か1を入力してください：");
		scanf_s("%d", &score);
		if (score == 1) {
			win++;
		}
		else {
			lose++;
		}
	}
	printf("勝ちの総数は%dです\n", win);
	printf("負けの総数は%dです\n", lose);
	*/

	/* 練習問題5-7 
	int giants_score,giants_total, tigars_score,tigars_total;
	giants_total = tigars_total = 0;
	for (int i = 1; i < 10; i++) {
		printf("%d回表、巨人の得点は？：", i);
		scanf_s("%d", &giants_score);
		giants_total += giants_score;
		printf("%d回裏、阪神の特典は？：", i);
		scanf_s("%d", &tigars_score);
		tigars_total += tigars_score;		
	}
	printf("巨人：%d点、阪神：%d点\n", giants_total, tigars_total);
	if (giants_total > tigars_total) {
		printf("巨人の勝ち\n");
	}
	else if (giants_total < tigars_total) {
		printf("阪神の勝ち\n");
	}
	else {
		printf("引き分け\n");
	}
	*/

	/* 練習問題5-8
	int x, max;
	max = 0;
	for (int i = 0; i < 10; i++) {
		printf("自然数(正の整数)を入力してください：");
		scanf_s("%d", &x);
		if (x > max) {
			max = x;
		}
	}
	printf("入力された中の最大値は%dです\n", max);
	*/

	/* 練習問題5-9
	int x,max, min;
	max = 0;
	for (int i = 0; i < 10; i++){
		printf("整数を入力してください：");
		scanf_s("%d", &x);
		if (x >= max) {
			max = x;
		}
		else {
			min = x;
		}
	}
	printf("入力された整数の最大値は%dです\n", max);
	printf("入力された整数の最小値は%dです\n", min);
	*/
	
	/* 練習問題5-10
	int num;
	printf("個数を入力してください：");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("*\n");
	}
	*/

	/* 練習問題5-11
	int num,count;
	count = 0;

	printf("個数を入力してください：");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("%d", count);
		count++;

		if (count == 10) {
			count = 0;
		}

	}
	*/

	/* 練習問題5-12
	int result = 1;

	while(result < 10000){
		result = result * 3;
		printf("%d,", result);
	}
	*/


	/* 練習問題5-13
	int num, sum;
	sum = 0;

	while (sum < 100){
		printf("整数を入力してください：");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("今までの合計は%dです", sum);
	*/

	/* 練習問題5-14
	int score,strike,ball;
	score = strike = ball = 0;

	while ((strike < 3)||(ball < 4)) {
		printf("ストライク：1 or ボール：2 ?：");
		scanf_s("%d", &score);

		if (score == 1) {
			strike++;
		}
		else {
			ball++;
		}
	}

	printf("%dボール、%dストライク", ball, strike);
	*/

	/* 練習問題5-15*/


	/* 練習問題5-16 素数は1または自身以外の約数を持たない数字
	int num;

	printf("4以上の整数を入力してください：");
	scanf_s("%d", &num);
	for (int i = 4; i < num; i++) {

	}
	*/

	/* 練習問題5-17
	int num;

	printf("2以上の整数を入力してください：");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++) {
		while (num % i == 1) {



		}
	}
	*/

	/* 練習問題5-18
	int x = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			x = i * j;
			printf("%2d ", x);
		}
		printf("\n");
	}
	*/

	/* 練習問題5-19
	int x, sum;
	sum = 0;
	do {
		printf("数値を入力してください(0で終了)：");
		scanf_s("%d", &x);
		sum += x;
	} while (x != 0);
	printf("これまでの合計値は%dです", sum);
	*/

	/* 練習問題5-20
	int x, sum, avr, count;
	sum = avr = count= 0;
	do {
		printf("数値を入力してください(0で終了)：");
		scanf_s("%d", &x);
		sum += x;
		count++;
	} while (x != 0);
	printf("これまでの合計値は%dです", sum);
	avr = sum / (count-1);
	printf("平均値は%dです", avr);
	*/

	/* 練習問題5-21*/
	int num;

	printf("数字を入力してください：");
	scanf_s("%d", &num);


	return 0;
}