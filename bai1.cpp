#include <stdio.h>
#include <time.h>
#include<math.h>
//
double Tinh(double x, double p);
void Xuat(double Kq);
void Nhap(double &x, double &p);
//
int main()
{
    clock_t start=clock();
    double x,p;
    Nhap(x, p);
    double Kq = Tinh(x,p);
    Xuat(Kq);
    printf("Time: %.2lfs\n",(double)(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}
double Tinh(double x, double p)
{
    if(x!=0&&p!=0)
        return pow(x,p);
    printf("error");
    exit(1);
}
void Xuat(double Kq)
{
    printf("Kq: %.5lf\n",Kq);
}
void Nhap(double &x, double &p)
{
    printf("Nhap: x p\n");
    scanf("%lf%lf",&x,&p);
}