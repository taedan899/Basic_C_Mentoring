#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	double h; //  높이
	double w; // 너비
	double d; // 길이
	double A; //부피

	printf("상자의 가로 세로 높이를 한번에 입력.");
	scanf("%lf %lf %lf",&h,&w,&d);

	A = h * d * w;

	printf("상자의 부피는 %.6lf이다.",A);

	return 0;



	

}