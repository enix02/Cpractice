#include <stdio.h>

int main(void){
	/* 練習問題4-1,4-2
	int x, y;
	printf("xの値を入力してください：");
	scanf_s("%d", &x);
	printf("yの値を入力してください：");
	scanf_s("%d", &y);
	if (x > y) {
		printf("xはyより大きい");
	}else {
		printf("xはyより小さい");
	}
	*/
	/* 練習問題4-3
	int x, y;
	printf("整数値を2つ入力してください：");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x > y) {
		printf("大きいのは%dです", x);
	}
	else {
		printf("大きいのは%dです", y);
	}
	*/
	/* 練習問題4-4
	int x, y;
	printf("xの値を入力してください：");
	scanf_s("%d", &x);
	printf("yの値を入力してください：");
	scanf_s("%d", &y);
	if (x > y) {
		printf("xはyより大きい");
	}
	else if (y > x) {
		printf("yはxより大きい");
	}
	else {
		printf("xとyは等しい");
	}
	*/
	/* 練習問題4-5
	int x;
	printf("正の整数を入力してください：");
	scanf_s("%d", &x);
	if ((x % 2) == 0) {
		printf("%dは偶数です", x);
	}
	else {
		printf("%dは奇数です", x);
	}
	*/
	/* 練習問題4-6
	int x;
	printf("正または負の整数を入力してください：");
	scanf_s("%d", &x);
	if (x >= 0) {
		if ((x % 2) == 0) {
			printf("%dは正の偶数です", x);
		}
		else {
			printf("%dは正の奇数です", x);
		}
	}
	else {
		if ((x % 2) == 0) {
			printf("%dは負の偶数です", x);
		}
		else {
			printf("%dは負の奇数です", x);
		}
	}
	*/
	/* 練習問題4-7
	int score;
	printf("試験の点数(0～100)を入力してください：");
	scanf_s("%d", &score);
	if (score >= 60) {
		printf("合格\n");
	}
	else {
		printf("不合格\n");
	}

	if (score >= 80) {
		printf("たいへんよくできました。\n");
	}
	else if ((score < 80) && (score >= 60)) {
		printf("よくできました。\n");
	}
	else {
		printf("ざんねんでした。\n");
	}

	if (score >= 80) {
		printf("優\n");
	}
	else if ((score < 80) && (score >= 70)) {
		printf("良\n");
	}
	else if ((score < 70) && (score >= 60)) {
		printf("可\n");
	}
	else {
		printf("不可\n");
	}
	*/
	/* 練習問題4-8
	int mid_exam_score, final_exam_score;
	printf("中間試験(0～100)の点数を入力してください：");
	scanf_s("%d", &mid_exam_score);
	printf("期末試験(0～100)の点数を入力してください：");
	scanf_s("%d", &final_exam_score);
	if ((mid_exam_score >= 60) && (final_exam_score >= 60)) {
		printf("合格");
	}
	else if ((mid_exam_score + final_exam_score) >= 130) {
		printf("合格");
	}
	else if (((mid_exam_score + final_exam_score) >= 100) && ((mid_exam_score >= 90) || (final_exam_score >= 90))) {
		printf("合格");
	}
	else {
		printf("不合格");
	}
	*/
	/* 練習問題4-9
	int youbi, ampm;
	printf("0:午前、1:午後、2:夜間\n");
	printf("希望の時間帯を入力してください：");
	scanf_s("%d", &youbi);
	printf("0:日曜、1:月曜、2:火曜、3:水曜、4:木曜、5:金曜、6:土曜\n");
	printf("希望の曜日を入力してください：");
	scanf_s("%d", &ampm);
	if (ampm == 0) {
		switch (youbi) {
			case 0:
				printf("休診");
				break;
			case 1:
				printf("○");
				break;
			case 2:
				printf("休診");
				break;
			case 3:
				printf("○");
				break;
			case 4:
				printf("○");
				break;
			case 5:
				printf("休診");
				break;
			case 6:
				printf("○");
				break;
			default:
				break;
		}
	}
	else if (ampm == 1) {
		switch (youbi) {
			case 0:
				printf("休診");
				break;
			case 1:
				printf("○");
				break;
			case 2:
				printf("○");
				break;
			case 3:
				printf("○");
				break;
			case 4:
				printf("○");
				break;
			case 5:
				printf("○");
				break;
			case 6:
				printf("休診");
				break;
			default:
				break;
		}
	}
	else {
		switch (youbi) {
			case 0:
				printf("休診");
				break;
			case 1:
				printf("○");
				break;
			case 2:
				printf("○");
				break;
			case 3:
				printf("休診");
				break;
			case 4:
				printf("○");
				break;
			case 5:
				printf("○");
				break;
			case 6:
				printf("休診");
				break;
			default:
				break;
		}
	}
	*/

	/* 練習問題4-9模範解答
	int day, zone, bopen;
	bopen = 1;

	printf("曜日を選択してください\n0：日曜、1：月曜、2：火曜、3：水曜、4：木曜、5：金曜、6：土曜");
	scanf_s("%d", &day);
	printf("時間帯を選択してください\n0：午前、1：午後、2：夜間");
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
		printf("診療しています。");
	}
	else {
		printf("休診です。");
	}
	*/
	
	/* 練習問題4-10
	int x, y;
	printf("整数xの値を入力してください：");
	scanf_s("%d", &x);
	printf("整数yの値を入力してください：");
	scanf_s("%d", &y);
	if ((x < y) && (((x % 2) == 0) && ((y % 2) == 0))) {
		printf("xはyより小さく、かつ、xとyは共に偶数である。\n");
	}
	if ((x == y) && ((x < 0) && (y < 0))) {
		printf("xとyは等しく、かつ、負の数である。\n");
	}
	if ((x < y) || ((x % 2) == 0)) {
		printf("xはyより小さい、または、xは偶数である。\n");
	}
	if (((x <= 10) || (x >= 100)) && ((y >= 10) && (y <= 100))) {
		printf("xは10以下または100以上で、かつ、yは10以上かつ100以下である。\n");
	}
	if (!((x < 0) && (y < 0))) {
		printf("xもyも負の数である、ではない。\n");
	}
	*/
	/* 練習問題4-11
	int month;
	printf("祝日を知りたい月を入力してください：");
	scanf_s("%d", &month);
	switch (month) {
		case 1:
			printf("1月：元旦、成人の日");
			break;
		case 2:
			printf("2月：建国記念の日");
			break;
		case 3:
			printf("3月：春分の日");
			break;
		case 4:
			printf("4月：昭和の日");
			break;
		case 5:
			printf("5月：憲法記念日、みどりの日、こどもの日");
			break;
		case 6:
			printf("祝日はありません");
			break;
		case 7:
			printf("海の日");
			break;
		case 8:
			printf("祝日はありません");
			break;
		case 9:
			printf("敬老の日、秋分の日");
			break;
		case 10:
			printf("体育の日");
			break;
		case 11:
			printf("文化の日、勤労感謝の日");
			break;
		case 12:
			printf("天皇誕生日");
			break;
		default:
			printf("そんな月はありません");
			break;
	}
	*/
	/* 練習問題4-12
	int sushi;
	printf("1：まぐろ　2：サーモン　3：はまち　4：たまご　5：えび　6：いくら　7：えんがわ　8：あじ　9：いか\n");
	printf("好きな鮨を選んでください：");
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
	/* 練習問題4-13 
	int month;
	printf("日数を知りたい月を入力してください：");
	scanf_s("%d", &month);
	switch (month) {
		case 1:
			printf("1月の日数は31日です\n");
			break;
		case 2:　
			printf("2月の日数は28日です\n");
			break;
		case 3:
			printf("3月の日数は31日です\n");
			break;
		case 4:
			printf("4月の日数は30日です\n");
			break;
		case 5:
			printf("5月の日数は31日です\n");
			break;
		case 6:
			printf("6月の日数は30日です\n");
			break;
		case 7:
			printf("7月の日数は31日です\n");
			break;
		case 8:
			printf("8月の日数は31日です\n");
			break;
		case 9:
			printf("9月の日数は30日です\n");
			break;
		case 10:
			printf("10月の日数は31日です\n");
			break;
		case 11:
			printf("11月の日数は30日です\n");
			break;
		case 12:
			printf("12月の日数は31日です\n");
			break;
		default:
			printf("入力が間違っています。\n");
			break;
	}
	*/

	/* 練習問題4-13模範解答 */
	int month;

	printf("何月ですか？：");
	scanf_s("%d", &month);

	switch (month) {
		case 2:
			printf("28日です");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30日です");
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31日です");
			break;
		default:
			printf("入力が間違っています");
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
