#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	double h; //  ����
	double w; // �ʺ�
	double d; // ����
	double A; //����

	printf("������ ���� ���� ���̸� �ѹ��� �Է�.");
	scanf("%lf %lf %lf",&h,&w,&d);

	A = h * d * w;

	printf("������ ���Ǵ� %.6lf�̴�.",A);

	return 0;



	

}