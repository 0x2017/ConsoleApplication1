#include <stdio.h>
#include <windows.h>

int main(void)
{
	int kor, math, eng;
	int sum;
	float avg;

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &kor);
	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &math);
	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &eng);

	sum = kor + math + eng;
	printf("������ %d �Դϴ�.\n", sum);

	avg = (kor + math + eng) / 3.0;
	printf("��� ������ %f �Դϴ�.", avg);

	Sleep(30000);

	return 0;
}