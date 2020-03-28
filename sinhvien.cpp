#include<stdio.h>

struct SV
{
	char Hoten[30];
	char MSV[9];
	float toan,ly,hoa,dtb;
};
void xuatSV(SV x);
void nhapSV(SV &x);
void xuat1Lop(SV A[], int n);
void nhap1Lop(SV A[], int &n);
void tinhDTB(SV A[], int n);
SV timSVDTBMax(SV A[], int n);
void hoanDoi(SV &x, SV &y);
void sapXep(SV A[], int n);

void main()
{
	//SV x;
	//nhapSV(x);
	//xuatSV(x);
	SV A[40];
	int n;
	nhap1Lop(A,n);
	tinhDTB(A,n);
	sapXep(A,n);
	xuat1Lop(A,n);
	SV x=timSVDTBMax(A,n);
	xuatSV(x);
}
void hoanDoi(SV &x, SV &y)
{
	SV t = x;
	x = y;
	y = t;
}
void sapXep(SV A[], int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (A[i].dtb<A[j].dtb)
				hoanDoi(A[i],A[j]);
}
SV timSVDTBMax(SV A[], int n)
{
	float max=A[0].dtb;
	int vitri=0;
	for (int i=0;i<n;i++)
		if (A[i].dtb>max)
		{
			max = A[i].dtb;
			vitri=i;
		}
	return A[vitri];
}
void tinhDTB(SV A[], int n)
{
	for (int i=0;i<n;i++)
		A[i].dtb = (A[i].toan+A[i].ly+A[i].hoa)/3;
}
void xuat1Lop(SV A[], int n)
{
	for (int i=0;i<n;i++)
		xuatSV(A[i]);
}
void nhap1Lop(SV A[], int &n)
{
	printf("Nhap so SV: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		nhapSV(A[i]);
}
void nhapSV(SV &x)
{
	printf("Nhap ho ten: ");
	fflush(stdin);
	gets(x.Hoten);
	printf("Nhap MSSV: ");
	fflush(stdin); //Co the khong can
	gets(x.MSV);
	printf("Nhap diem 3 mon: ");
	float t,l,h;
	scanf("%f%f%f",&t,&l,&h);
	x.toan = t;
	x.ly = l;
	x.hoa = h;
}
void xuatSV(SV x)
{
	printf("%s	%s	%0.2f	%0.2f	%0.2f	%0.2f\n",x.MSV,x.Hoten,x.toan,x.ly,x.hoa,x.dtb); 
}}