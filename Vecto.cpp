#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
void NhapVecto_a(float a[], int x)
{
	printf("Moi nhap gia tri cho tung phan tu trong Vecto_a:\n");
	for(int i=0;i<x;i++)
		scanf("a[%d]=%f", &i, &a[i]);
}
//
//
void NhapVecto_b(float b[], int y)
{
	printf("Moi nhap gia tri cho tung phan tu trong Vecto_a:\n");
	for(int i=0;i<y;i++)
		scanf("b[%d]=%f", &i, &b[i]);
}
int main()
{
	int x, y;
	float a[100];
	float b[100];
	printf("Nhap so phan tu cua Vecto_a: ");
	scanf("%d", &x);
	printf("Nhap so phan tu cua Vecto_b: ");
	scanf("%d", &y);
	NhapVecto_a(a,x);
	NhapVecto_b(b,y);
}

