#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int *pi, i = 5;
	char *ph, h = '+';
	float *pf, f = 2.1f;
	double *pj, j = 1.3;

	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
	printf("%lu\n", sizeof(ph));
	printf("%lu\n", sizeof(pj));

	float PI = 3.14159, *p1, *p2;
	p1 = p2 = &PI;
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);

	char *pb, b = '+';
	pb = &b;
	printf("По адресу %p хранится *ptr=%c\n", pb, *pb);
	pb++;
	printf("По адресу %p хранится *ptr=%c\n", pb, *pb);
	pb--;
	printf("По адресу %p хранится *ptr=%c\n", pb, *pb);

	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };
	float *ptr_a=&array;
	printf("%p, %p, %p\n", array, &array[0], ptr_a);
	printf("%f\n", *ptr_a);
	ptr_a++;
	printf("%f\n", *ptr_a);
	ptr_a += 4;
	printf("%f\n", *ptr_a);
	ptr_a -= 2;
	printf("%f\n", *ptr_a);
	ptr_a = array;
	printf("\n");
	for (int i = 0; i <= 4; i++)
	{
		printf("%f\n", *ptr_a);
		ptr_a += 2;
	}
printf("\n");
	ptr_a = &array[9];
	for (int i = 4; i >= 0; i--)
	{
		printf("%f\n", *ptr_a);
		ptr_a -= 2;
	}
printf("\n");
	int x = 0x12345678;
	int *prt;
	unsigned char *a1, *a2, *a3, *a4;
	unsigned char *a;
	prt = &x;
	a = (unsigned char*)prt;
	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
}