#include <stdio.h>

int main(void){
	/* ���K���4-1,4-2
	int x, y;
	printf("x�̒l����͂��Ă��������F");
	scanf_s("%d", &x);
	printf("y�̒l����͂��Ă��������F");
	scanf_s("%d", &y);
	if (x > y) {
		printf("x��y���傫��");
	}else {
		printf("x��y��菬����");
	}
	*/
	/* ���K���4-3
	int x, y;
	printf("�����l��2���͂��Ă��������F");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x > y) {
		printf("�傫���̂�%d�ł�", x);
	}
	else {
		printf("�傫���̂�%d�ł�", y);
	}
	*/
	/* ���K���4-4
	int x, y;
	printf("x�̒l����͂��Ă��������F");
	scanf_s("%d", &x);
	printf("y�̒l����͂��Ă��������F");
	scanf_s("%d", &y);
	if (x > y) {
		printf("x��y���傫��");
	}
	else if (y > x) {
		printf("y��x���傫��");
	}
	else {
		printf("x��y�͓�����");
	}
	*/
	/* ���K���4-5
	int x;
	printf("���̐�������͂��Ă��������F");
	scanf_s("%d", &x);
	if ((x % 2) == 0) {
		printf("%d�͋����ł�", x);
	}
	else {
		printf("%d�͊�ł�", x);
	}
	*/
	/* ���K���4-6
	int x;
	printf("���܂��͕��̐�������͂��Ă��������F");
	scanf_s("%d", &x);
	if (x >= 0) {
		if ((x % 2) == 0) {
			printf("%d�͐��̋����ł�", x);
		}
		else {
			printf("%d�͐��̊�ł�", x);
		}
	}
	else {
		if ((x % 2) == 0) {
			printf("%d�͕��̋����ł�", x);
		}
		else {
			printf("%d�͕��̊�ł�", x);
		}
	}
	*/
	/* ���K���4-7
	int score;
	printf("�����̓_��(0�`100)����͂��Ă��������F");
	scanf_s("%d", &score);
	if (score >= 60) {
		printf("���i\n");
	}
	else {
		printf("�s���i\n");
	}

	if (score >= 80) {
		printf("�����ւ�悭�ł��܂����B\n");
	}
	else if ((score < 80) && (score >= 60)) {
		printf("�悭�ł��܂����B\n");
	}
	else {
		printf("����˂�ł����B\n");
	}

	if (score >= 80) {
		printf("�D\n");
	}
	else if ((score < 80) && (score >= 70)) {
		printf("��\n");
	}
	else if ((score < 70) && (score >= 60)) {
		printf("��\n");
	}
	else {
		printf("�s��\n");
	}
	*/
	/* ���K���4-8
	int mid_exam_score, final_exam_score;
	printf("���Ԏ���(0�`100)�̓_������͂��Ă��������F");
	scanf_s("%d", &mid_exam_score);
	printf("��������(0�`100)�̓_������͂��Ă��������F");
	scanf_s("%d", &final_exam_score);
	if ((mid_exam_score >= 60) && (final_exam_score >= 60)) {
		printf("���i");
	}
	else if ((mid_exam_score + final_exam_score) >= 130) {
		printf("���i");
	}
	else if (((mid_exam_score + final_exam_score) >= 100) && ((mid_exam_score >= 90) || (final_exam_score >= 90))) {
		printf("���i");
	}
	else {
		printf("�s���i");
	}
	*/
	/* ���K���4-9
	int youbi, ampm;
	printf("0:�ߑO�A1:�ߌ�A2:���\n");
	printf("��]�̎��ԑт���͂��Ă��������F");
	scanf_s("%d", &youbi);
	printf("0:���j�A1:���j�A2:�Ηj�A3:���j�A4:�ؗj�A5:���j�A6:�y�j\n");
	printf("��]�̗j������͂��Ă��������F");
	scanf_s("%d", &ampm);
	if (ampm == 0) {
		switch (youbi) {
			case 0:
				printf("�x�f");
				break;
			case 1:
				printf("��");
				break;
			case 2:
				printf("�x�f");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("�x�f");
				break;
			case 6:
				printf("��");
				break;
			default:
				break;
		}
	}
	else if (ampm == 1) {
		switch (youbi) {
			case 0:
				printf("�x�f");
				break;
			case 1:
				printf("��");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("�x�f");
				break;
			default:
				break;
		}
	}
	else {
		switch (youbi) {
			case 0:
				printf("�x�f");
				break;
			case 1:
				printf("��");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("�x�f");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("�x�f");
				break;
			default:
				break;
		}
	}
	*/

	/* ���K���4-9�͔͉�
	int day, zone, bopen;
	bopen = 1;

	printf("�j����I�����Ă�������\n0�F���j�A1�F���j�A2�F�Ηj�A3�F���j�A4�F�ؗj�A5�F���j�A6�F�y�j");
	scanf_s("%d", &day);
	printf("���ԑт�I�����Ă�������\n0�F�ߑO�A1�F�ߌ�A2�F���");
	scanf_s("%d", &zone);

	if (day == 0) {
		bopen = 0;
	}
	if (zone == 0 && ((day == 2) || (day == 5))) {
		bopen = 0;
	}
	else if (zone == 1 && day == 6) {
		bopen = 0;
	}
	else if (zone == 2 && ((day == 3) || (day == 6))) {
		bopen = 0;
	}

	if (bopen == 1) {
		printf("�f�Â��Ă��܂��B");
	}
	else {
		printf("�x�f�ł��B");
	}
	*/
	
	/* ���K���4-10
	int x, y;
	printf("����x�̒l����͂��Ă��������F");
	scanf_s("%d", &x);
	printf("����y�̒l����͂��Ă��������F");
	scanf_s("%d", &y);
	if ((x < y) && (((x % 2) == 0) && ((y % 2) == 0))) {
		printf("x��y��菬�����A���Ax��y�͋��ɋ����ł���B\n");
	}
	if ((x == y) && ((x < 0) && (y < 0))) {
		printf("x��y�͓������A���A���̐��ł���B\n");
	}
	if ((x < y) || ((x % 2) == 0)) {
		printf("x��y��菬�����A�܂��́Ax�͋����ł���B\n");
	}
	if (((x <= 10) || (x >= 100)) && ((y >= 10) && (y <= 100))) {
		printf("x��10�ȉ��܂���100�ȏ�ŁA���Ay��10�ȏォ��100�ȉ��ł���B\n");
	}
	if (!((x < 0) && (y < 0))) {
		printf("x��y�����̐��ł���A�ł͂Ȃ��B\n");
	}
	*/
	/* ���K���4-11
	int month;
	printf("�j����m�肽��������͂��Ă��������F");
	scanf_s("%d", &month);
	switch (month) {
		case 1:
			printf("1���F���U�A���l�̓�");
			break;
		case 2:
			printf("2���F�����L�O�̓�");
			break;
		case 3:
			printf("3���F�t���̓�");
			break;
		case 4:
			printf("4���F���a�̓�");
			break;
		case 5:
			printf("5���F���@�L�O���A�݂ǂ�̓��A���ǂ��̓�");
			break;
		case 6:
			printf("�j���͂���܂���");
			break;
		case 7:
			printf("�C�̓�");
			break;
		case 8:
			printf("�j���͂���܂���");
			break;
		case 9:
			printf("�h�V�̓��A�H���̓�");
			break;
		case 10:
			printf("�̈�̓�");
			break;
		case 11:
			printf("�����̓��A�ΘJ���ӂ̓�");
			break;
		case 12:
			printf("�V�c�a����");
			break;
		default:
			printf("����Ȍ��͂���܂���");
			break;
	}
	*/
	/* ���K���4-12
	int sushi;
	printf("1�F�܂���@2�F�T�[�����@3�F�͂܂��@4�F���܂��@5�F���с@6�F������@7�F���񂪂�@8�F�����@9�F����\n");
	printf("�D����齂�I��ł��������F");
	scanf_s("%d", &sushi);
	switch (sushi) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			break;

	}
	*/
	/* ���K���4-13 
	int month;
	printf("������m�肽��������͂��Ă��������F");
	scanf_s("%d", &month);
	switch (month) {
		case 1:
			printf("1���̓�����31���ł�\n");
			break;
		case 2:�@
			printf("2���̓�����28���ł�\n");
			break;
		case 3:
			printf("3���̓�����31���ł�\n");
			break;
		case 4:
			printf("4���̓�����30���ł�\n");
			break;
		case 5:
			printf("5���̓�����31���ł�\n");
			break;
		case 6:
			printf("6���̓�����30���ł�\n");
			break;
		case 7:
			printf("7���̓�����31���ł�\n");
			break;
		case 8:
			printf("8���̓�����31���ł�\n");
			break;
		case 9:
			printf("9���̓�����30���ł�\n");
			break;
		case 10:
			printf("10���̓�����31���ł�\n");
			break;
		case 11:
			printf("11���̓�����30���ł�\n");
			break;
		case 12:
			printf("12���̓�����31���ł�\n");
			break;
		default:
			printf("���͂��Ԉ���Ă��܂��B\n");
			break;
	}
	*/

	/* ���K���4-13�͔͉� */
	int month;

	printf("�����ł����H�F");
	scanf_s("%d", &month);

	switch (month) {
		case 2:
			printf("28���ł�");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30���ł�");
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31���ł�");
			break;
		default:
			printf("���͂��Ԉ���Ă��܂�");
			break;
	}
	return 0;
}


/*
void Sub() {
	int i, n;
	scanf("%d", &n);
	char hand[1000, 4] = [];
	for (i = 0; i < n; i++) {
		scanf("%s", hand[i, 1]);
		scanf("%s", hand[i, 2]);
		scanf("%s", hand[i, 3]);
		scanf("%s", hand[i, 4]);
	}
	int count;
	for (i = 0; i < n; i++;) {
		if (hand[i, 1] == hand[i, 2] == hand[i, 3] == hand[i, 4]) {
			printf("Four Card");
		}
		if ((hand[i, 1] == hand[i, 2] == hand[i, 3]) || (hand[i, 2] == hand[i, 3] == hand[i, 4])) {
			printf("Three Card");
		}
		if ((hand[i, 1] == hand[i, 2]) && (hand[i, 2] == hand[i, 3])) || ((hand[i, 2] == hand[i, 3]) && (hand[i, 3] == hand[i, 4])) {
			printf("Two Pair");
		}
		if (((hand[i, 1] == hand[i, 2]) && (hand[i, 2] |= hand[i, 3] |= hand[i, 4]))
			|| ((hand[i, 2] == hand[i, 3]) && (hand[i, 1] |= hand[i, 3] |= hand[i, 4]))
			|| ((hand[i, 3] == hand[i, 4]) && (hand[i, 1] |= hand[i, 2] |= hand[i, 3]))) {
			printf("One Pair");
		}
		if (hand[i, 1] |= hand[i, 2] |= hand[i, 3] |= hand[i, 4]) {
			printf("No Pair");
		}
	}
}
*/
