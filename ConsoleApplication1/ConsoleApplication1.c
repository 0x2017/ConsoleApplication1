#include <stdio.h>
#include <windows.h>

int main(void)
{
	int kor, math, eng;
	int sum;
	float avg;

	printf("국어 점수를 입력하세요: ");
	scanf_s("%d", &kor);
	printf("수학 점수를 입력하세요: ");
	scanf_s("%d", &math);
	printf("영어 점수를 입력하세요: ");
	scanf_s("%d", &eng);

	sum = kor + math + eng;
	printf("총점은 %d 입니다.\n", sum);

	avg = (kor + math + eng) / 3.0;
	printf("평균 점수는 %f 입니다.", avg);

	Sleep(30000);

	return 0;
}