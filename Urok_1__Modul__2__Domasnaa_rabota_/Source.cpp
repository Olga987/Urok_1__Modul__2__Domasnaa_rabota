#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 1) {
		//1.	Дано натуральное (целое неотрицательное) число, а и целое положительное число d.
		//Вычислить частное q и остаток r при делении, а на d

		int a = 0, d = 0, q = 0, r = 0;
		printf("Введите значение a: ");
		scanf("%d", &a);

		printf("Введите значение d: ");
		scanf("%d", &d);

		q = a / d;

		r = a%d;

		printf("q = %d\nr = %d\n", q, r);

	}

	else if (n == 2) {

		//2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба 
		//равны нулю, 12/x, если y равен 0, 12/y, если x равен 0, иначе 144/(x*y).

		int x = 0, y = 0, answer = 0;

		printf("Введите значение x: ");
		scanf("%d", &x);

		printf("Введите значение y: ");
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
		//3.	Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x

		int x = 0, y = 0, answer = 0;

		printf("Введите значение x: ");
		scanf("%d", &x);

		printf("Введите значение y: ");
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
		//4.	Напишите функцию double f(double x, double y), которая возвращает x/y, 
		//если x больше y, иначе возвращает y/x. Предполагается, что значения параметров больше нуля.  

		double x = 0, y = 0, answer = 0;

		printf("Введите значение x: ");
		scanf("%lf", &x);

		printf("Введите значение y: ");
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
		//5.	Напишите функцию double f(double x, double y, double z), которая возвращает m*n/k, 
		//где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел. 
		//Предполагается, что значения параметров больше нуля

		double x = 0, y = 0, z = 0,answer = 0;

		printf("Введите значение x: ");
		scanf("%lf", &x);

		printf("Введите значение y: ");
		scanf("%lf", &y);

		printf("Введите значение z: ");
		scanf("%lf", &z);

		if (x <= 0 || y <= 0 || z <= 0) {

			printf("Значение каждого параметра должно быть больше 0 \n");
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
		//6.	Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.

		int a = 0, b = 0, c = 0, answer = 0;
		printf("Введите значение a: ");
		scanf("%d", &a);

		printf("Введите значение b: ");
		scanf("%d", &b);

		printf("Введите значение c: ");
		scanf("%d", &c);

		if ((a < b) && (a < c)) {
			answer = a;
			printf("Меньшее = %d\n", answer);
		}
		else if (b < a&&b < c) {
			answer = b;
			printf("Меньшее = %d\n", answer);
		}

		else if (c < a&&c < b) {
			answer = c;
			printf("Меньшее = %d\n", answer);
		}
	}

	else if (n == 7) {
		//7.	Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.

		int a = 0, b = 0, c = 0, answer = 0;
		printf("Введите значение a: ");
		scanf("%d", &a);

		printf("Введите значение b: ");
		scanf("%d", &b);

		printf("Введите значение c: ");
		scanf("%d", &c);

		if (a > b && a > c) {
			answer = a;
			printf("Большее = %d\n", answer);
		}
		else if (b > a&&b > c) {
			answer = b;
			printf("Большее = %d\n", answer);
		}

		else if (c > a&&c > b) {
			answer = c;
			printf("Бщльшее = %d\n", answer);
		}
	}

	else if (n == 8) {
		//8.	Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2+у2= z2, иначе возвращает false.

		double x = 0, y = 0, z = 0;

		printf("Введите значение x: ");
		scanf("%lf", &x);

		printf("Введите значение y: ");
		scanf("%lf", &y);

		printf("Введите значение z: ");
		scanf("%lf", &z);

		if ((x * 2) + (y * 2) == (z * 2)) {

			printf("true\n");
		}
		else if ((x * 2) + (y * 2) != (z * 2)) {

			printf("false\n");
		}
	}

	else if (n == 9) {
		//9.	Напишите функцию bool f(int x, int y), которая возвращает true, 
		//если x делится нацело на y, или наоборот, y делится нацело на x, иначе 
		//возвращает false. Предполагается, что значения параметров больше нуля.

		int x = 0, y = 0;

		printf("Введите значение x: ");
		scanf("%d", &x);

		printf("Введите значение y: ");
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
		//10.	Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других.
		//Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть сторонами 
		//треугольника, иначе возвращает false. Предполагается, что значения параметров больше нуля

		int x = 0, y = 0,z=0;

		printf("Введите значение x: ");
		scanf("%d", &x);

		printf("Введите значение y: ");
		scanf("%d", &y);

		printf("Введите значение z: ");
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