#include <stdio.h>
int main(void) {
	/* ���K���5-1
	for (int i = 0; i < 10; i++) {
		printf("SPAM\n");
	}
	*/

	/* ���K���5-2
	for (int i = 1; i < 10; i++) {
		printf("%d ", i * 3);
	}
	*/

	/* ���K���5-3 
	int result = 1;
	for (int i = 1; i < 9; i++) {
		result = result * 2;
	}
	printf("%d", result);
	*/
	

	/* ���K���5-4
	int result = 1;
	for (int i = 1; i < 8; i++) {
		result = result * i;
	}
	printf("%d", result);
	*/

	/* ���K���5-5 
	int score, sum;
	sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("��������͂��Ă��������F");
		scanf_s("%d", &score);
		sum += score;
	}
	printf("%d", sum / 10);
	*/

	/* ���K���5-6
	int score,win, lose;
	win = lose = 0;
	for (int i = 0; i < 10; i++) {
		printf("0��1����͂��Ă��������F");
		scanf_s("%d", &score);
		if (score == 1) {
			win++;
		}
		else {
			lose++;
		}
	}
	printf("�����̑�����%d�ł�\n", win);
	printf("�����̑�����%d�ł�\n", lose);
	*/

	/* ���K���5-7 
	int giants_score,giants_total, tigars_score,tigars_total;
	giants_total = tigars_total = 0;
	for (int i = 1; i < 10; i++) {
		printf("%d��\�A���l�̓��_�́H�F", i);
		scanf_s("%d", &giants_score);
		giants_total += giants_score;
		printf("%d�񗠁A��_�̓��T�́H�F", i);
		scanf_s("%d", &tigars_score);
		tigars_total += tigars_score;		
	}
	printf("���l�F%d�_�A��_�F%d�_\n", giants_total, tigars_total);
	if (giants_total > tigars_total) {
		printf("���l�̏���\n");
	}
	else if (giants_total < tigars_total) {
		printf("��_�̏���\n");
	}
	else {
		printf("��������\n");
	}
	*/

	/* ���K���5-8
	int x, max;
	max = 0;
	for (int i = 0; i < 10; i++) {
		printf("���R��(���̐���)����͂��Ă��������F");
		scanf_s("%d", &x);
		if (x > max) {
			max = x;
		}
	}
	printf("���͂��ꂽ���̍ő�l��%d�ł�\n", max);
	*/

	/* ���K���5-9
	int x,max, min;
	max = 0;
	for (int i = 0; i < 10; i++){
		printf("��������͂��Ă��������F");
		scanf_s("%d", &x);
		if (x >= max) {
			max = x;
		}
		else {
			min = x;
		}
	}
	printf("���͂��ꂽ�����̍ő�l��%d�ł�\n", max);
	printf("���͂��ꂽ�����̍ŏ��l��%d�ł�\n", min);
	*/
	
	/* ���K���5-10
	int num;
	printf("������͂��Ă��������F");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("*\n");
	}
	*/

	/* ���K���5-11
	int num,count;
	count = 0;

	printf("������͂��Ă��������F");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("%d", count);
		count++;

		if (count == 10) {
			count = 0;
		}

	}
	*/

	/* ���K���5-12
	int result = 1;

	while(result < 10000){
		result = result * 3;
		printf("%d,", result);
	}
	*/


	/* ���K���5-13
	int num, sum;
	sum = 0;

	while (sum < 100){
		printf("��������͂��Ă��������F");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("���܂ł̍��v��%d�ł�", sum);
	*/

	/* ���K���5-14
	int score,strike,ball;
	score = strike = ball = 0;

	while ((strike < 3)||(ball < 4)) {
		printf("�X�g���C�N�F1 or �{�[���F2 ?�F");
		scanf_s("%d", &score);

		if (score == 1) {
			strike++;
		}
		else {
			ball++;
		}
	}

	printf("%d�{�[���A%d�X�g���C�N", ball, strike);
	*/

	/* ���K���5-15*/


	/* ���K���5-16 �f����1�܂��͎��g�ȊO�̖񐔂������Ȃ�����
	int num;

	printf("4�ȏ�̐�������͂��Ă��������F");
	scanf_s("%d", &num);
	for (int i = 4; i < num; i++) {

	}
	*/

	/* ���K���5-17
	int num;

	printf("2�ȏ�̐�������͂��Ă��������F");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++) {
		while (num % i == 1) {



		}
	}
	*/

	/* ���K���5-18
	int x = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			x = i * j;
			printf("%2d ", x);
		}
		printf("\n");
	}
	*/

	/* ���K���5-19
	int x, sum;
	sum = 0;
	do {
		printf("���l����͂��Ă�������(0�ŏI��)�F");
		scanf_s("%d", &x);
		sum += x;
	} while (x != 0);
	printf("����܂ł̍��v�l��%d�ł�", sum);
	*/

	/* ���K���5-20
	int x, sum, avr, count;
	sum = avr = count= 0;
	do {
		printf("���l����͂��Ă�������(0�ŏI��)�F");
		scanf_s("%d", &x);
		sum += x;
		count++;
	} while (x != 0);
	printf("����܂ł̍��v�l��%d�ł�", sum);
	avr = sum / (count-1);
	printf("���ϒl��%d�ł�", avr);
	*/

	/* ���K���5-21*/
	int num;

	printf("��������͂��Ă��������F");
	scanf_s("%d", &num);


	return 0;
}