#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1) {
		//1.	���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d.
		//��������� ������� q � ������� r ��� �������, � �� d

		int a = 0, d = 0, q = 0, r = 0;
		printf("������� �������� a: ");
		scanf("%d", &a);

		printf("������� �������� d: ");
		scanf("%d", &d);

		q = a / d;

		r = a%d;

		printf("q = %d\nr = %d\n", q, r);

	}

	else if (n == 2) {

		//2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� 
		//����� ����, 12/x, ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y).

		int x = 0, y = 0, answer = 0;

		printf("������� �������� x: ");
		scanf("%d", &x);

		printf("������� �������� y: ");
		scanf("%d", &y);

		if (x == 0 && y == 0) {
			printf("0\n");
		}


		else if (y == 0 && x != 0) {
			answer = 12 / x;
			printf("%d\n", answer);
		}
		else if (x == 0 && y != 0) {
			answer = 12 / y;
			printf("%d\n", answer);
		}
		else if (x != 0 && y != 0) {
			answer = 144 / (x*y);
			printf("%d\n", answer);
		}

	}

	else if (n == 3) {
		//3.	�������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x

		int x = 0, y = 0, answer = 0;

		printf("������� �������� x: ");
		scanf("%d", &x);

		printf("������� �������� y: ");
		scanf("%d", &y);

		if (x > y) {
			answer = x - y;
			printf("%d\n", answer);
		}


		else if (y > x) {
			answer = y - x;
			printf("%d\n", answer);
		}

	}

	else if (n == 4) {
		//4.	�������� ������� double f(double x, double y), ������� ���������� x/y, 
		//���� x ������ y, ����� ���������� y/x. ��������������, ��� �������� ���������� ������ ����.  

		double x = 0, y = 0, answer = 0;

		printf("������� �������� x: ");
		scanf("%lf", &x);

		printf("������� �������� y: ");
		scanf("%lf", &y);

		if (x > 0 && x > y&&y > 0) {
			answer = x / y;
			printf("%lf\n", answer);
		}


		else if (y > 0 && y > x&&x > 0) {
			answer = y / x;
			printf("%lf\n", answer);
		}
	}

	else if (n == 5) {
		//5.	�������� ������� double f(double x, double y, double z), ������� ���������� m*n/k, 
		//��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. 
		//��������������, ��� �������� ���������� ������ ����

		double x = 0, y = 0, z = 0,answer = 0;

		printf("������� �������� x: ");
		scanf("%lf", &x);

		printf("������� �������� y: ");
		scanf("%lf", &y);

		printf("������� �������� z: ");
		scanf("%lf", &z);

		if (x <= 0 || y <= 0 || z <= 0) {

			printf("�������� ������� ��������� ������ ���� ������ 0 \n");
		}
		else if (x > y && x > z&&y > z) {

		
			answer = y*x / z;
			printf("%lf\n", answer);
		}
		else if (x > y && x > z&&z > y) {
			
			answer = z*x/y;
			printf("%lf\n", answer);
		}
	
			else if (y > x && y > z&&x>z) {
		
				answer = x*y / z;
				printf("%lf\n", answer);

			}
			else if (y > x && y > z&&z>x) {
			
				answer = z*y / x;
				printf("%lf\n", answer);

			}
			else if (z > x && z > y&&x>y) {
			
				answer = x*z / y;
				printf("%lf\n", answer);

			}
			else if (z > x && z > y&&y>x) {
			
				answer = y*z / x;
				printf("%lf\n", answer);

			}
	}

	else if (n == 6) {
		//6.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.

		int a = 0, b = 0, c = 0, answer = 0;
		printf("������� �������� a: ");
		scanf("%d", &a);

		printf("������� �������� b: ");
		scanf("%d", &b);

		printf("������� �������� c: ");
		scanf("%d", &c);

		if ((a < b) && (a < c)) {
			answer = a;
			printf("������� = %d\n", answer);
		}
		else if (b < a&&b < c) {
			answer = b;
			printf("������� = %d\n", answer);
		}

		else if (c < a&&c < b) {
			answer = c;
			printf("������� = %d\n", answer);
		}
	}

	else if (n == 7) {
		//7.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.

		int a = 0, b = 0, c = 0, answer = 0;
		printf("������� �������� a: ");
		scanf("%d", &a);

		printf("������� �������� b: ");
		scanf("%d", &b);

		printf("������� �������� c: ");
		scanf("%d", &c);

		if (a > b && a > c) {
			answer = a;
			printf("������� = %d\n", answer);
		}
		else if (b > a&&b > c) {
			answer = b;
			printf("������� = %d\n", answer);
		}

		else if (c > a&&c > b) {
			answer = c;
			printf("������� = %d\n", answer);
		}
	}

	else if (n == 8) {
		//8.	�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2+�2= z2, ����� ���������� false.

		double x = 0, y = 0, z = 0;

		printf("������� �������� x: ");
		scanf("%lf", &x);

		printf("������� �������� y: ");
		scanf("%lf", &y);

		printf("������� �������� z: ");
		scanf("%lf", &z);

		if ((x * 2) + (y * 2) == (z * 2)) {

			printf("true\n");
		}
		else if ((x * 2) + (y * 2) != (z * 2)) {

			printf("false\n");
		}
	}

	else if (n == 9) {
		//9.	�������� ������� bool f(int x, int y), ������� ���������� true, 
		//���� x ������� ������ �� y, ��� ��������, y ������� ������ �� x, ����� 
		//���������� false. ��������������, ��� �������� ���������� ������ ����.

		int x = 0, y = 0;

		printf("������� �������� x: ");
		scanf("%d", &x);

		printf("������� �������� y: ");
		scanf("%d", &y);

		if (x <= 0 || y <= 0) {

			printf("false\n");
		}

		else if ((x%y)==0|| (y%x) == 0) {

			printf("true\n");
		}


		else if ((x%y) != 0 || (y%x) != 0) {

			printf("false\n");
		}
	
		
	}

	else if (n == 10) {
		//10.	������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������.
		//�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� 
		//������������, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����

		int x = 0, y = 0,z=0;

		printf("������� �������� x: ");
		scanf("%d", &x);

		printf("������� �������� y: ");
		scanf("%d", &y);

		printf("������� �������� z: ");
		scanf("%d", &z);

		if (x <= 0 || y <= 0||z<=0) {

			printf("false\n");
		}

		else if (x>y&&x>z&&x>y+z) {

			printf("true\n");
		}
		else if (x > y&&x > z&&x < y + z) {

			printf("false\n");
		}

		else if (y>x&&y>z&&y>x + z) {

			printf("true\n");
		}
		else if (y>x&&y>z&&y<x + z) {

			printf("false\n");
		}

		else if (z>x&&z>y&&z>x + y) {

			printf("true\n");
		}
		else if (z>x&&z>y&&z<x + y) {

			printf("false\n");
		}

	}
}