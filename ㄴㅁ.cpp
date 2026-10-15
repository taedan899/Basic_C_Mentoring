#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>


int main()
{
	char id[10] = { 0 };
	char domain[10] = { 0 };
	char d1[3][4] = { "co" , "re" , "org" };
	char d2[2][3] = { "kr" , "jp" };
	int c;
	int d;
	

	printf("아이디 입력 >> ");
	scanf_s("%s", id,sizeof(id));

	printf("도메인 입력 >> ");
	scanf_s("%s", domain,sizeof(domain));

	printf("기관 선택(1.co 2.re 3.org) >>");
	scanf_s("%d", &c);

	printf("나라 선택(1. kr 2. jp) >>");
	scanf_s("%d", &d);

	
	printf("%s@%s.%s.%s", id, domain, d1[c - 1], d2[d - 1]);


	return 0;


}