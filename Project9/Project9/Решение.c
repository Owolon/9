#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#define CRT_NO_SECURE_DEPRECATE
#define ROW 9
#define COL 9
#define A 30
#define B 60
//1
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int col, row;
	printf("\n");
	for (row = 1;row<=ROW;++row)
	{
		for (col = 1;col<=COL;++col)
			printf("%5d", col*row);
			printf("\n");
			}
	system("pause");
//1.2
/*
	int col, row;
	int COLa = 1;
	printf("\n");
	for (row = 1;row<=ROW;++row)
	{
		for (col = 1;col<=COLa;++col)
			printf("%5d", col*row);
			printf("\n");
			}
		COLa+=1
	system("pause");
*/
//1.3
	int s, e;
	printf("������� ������:");
	scanf_s("%d", &s);
	printf("������� �����:");
	scanf_s("%d", &e);
	for (int row = s; row <= e; ++row)
	{
		printf("%4d", row);
		if (row % 10 == 0)
		{
			printf("\n");
		}
	} 
//2
	while (1)
	{
		char a;
		double chislo,ch,g,v,m;
		int h = 0, h1 = 0, h2 = 0, h3 = 0, h4 = 0, f;
		printf("\n������� ������������ ������� �����:");
		scanf_s("%lf", &chislo); //���������� ����� \/
		ch = chislo;
		g = chislo;
		v = chislo;
		m = chislo;
		int n = 0;
//
		while (chislo > 1) //������� ���-�� ���� \/
		{
			n = n + 1;
			chislo = (double)chislo/10;
			if (chislo == 0)
			{
				break;
			}
		}
		printf("���-�� ����:%d\n", n);
//
		while (g > 1) // ������� 3 \/
		{
			if ((int)g % 10 == 3)
			{
				h = h + 1;
			}
			g = (double)g / 10;
		}
		printf("���-�� 3:%d\n", h);
//
		f = (int)v % 10;
		while (v > 1) // ������� ��������� ����� \/
		{
			if ((int)v % 10 == f)
			{
				h1 = h1 + 1;
			}
			v = (double)v / 10;
		}
		printf("���-�� ��������� ��������� �����:%d\n", h1);
//
		printf("������������ ��������� � ������ �����:\n");
		
		h3 = (int)(m / pow(10, n-2))%10;
		printf("��������� %d � ������ %d", f, h3);
		printf("\n������������:%d", h3*f);
//3 ��
		char w;
		int R;
		int z = 0, y = 0, c = 0, d = 0;

		printf("\n������� ������:");
		scanf_s("%d", &R);
		printf("������� ������ ��� ���������� ������:");
		scanf_s("\n%c", &w);
		//2*R - ��������� ������������
		//R - 
		c = (int)(R * cos(A));//������ ������������
		y = R/3;//���-�� �������� ������������
		z = c-y;//���-�� ��������
		int osn = 2 * R;

		for (int i = 1; i <=c; ++i)
		{
			for (int j = c; j > i; --j)
			{
				printf("_");
			}
			for (int k = 0; k < osn / 2; ++k)
			{
				if (k < i)
				{
					printf("\n%s", &w);
				}
				else
				{
					printf("_");
				}
			}
			printf(" \n");
		}
		printf("\n���������� ? (�� - y, ��� - n)");
		scanf_s("%c", &a, 2);
		if ((a = getchar()) == 'n') break;
	}
}
