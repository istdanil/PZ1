
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <Windows.h>


void main() {
	char* locale = setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	printf("������ ��� ��������; \n");
	char input[50];
	int t1, t2, t3;

	fgets(input, sizeof(input), stdin);
	sscanf_s(input, "%d %d %d", &t1, &t2, &t3);

	float result = 1 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));

	printf("���, ���������� ��� �'������ ������ =%5.2f\n", result);

}