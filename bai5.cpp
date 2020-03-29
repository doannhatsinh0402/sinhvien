#include<stdio.h>
#include<time.h>
//
void Xuat(float Kq);
float TinhS(int n);
void Nhap(int &n);
//
int main()
{
    clock_t start = clock();
    int n;
    Nhap(n);
    float Kq=TinhS(n);
    Xuat(Kq);
    printf("time : %.2f",float(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}
void Xuat(float Kq)
{
    printf("S = %.2f \n",Kq);
}
float TinhS(int n)
{
    float S=0;
    long temp=1;
    for(int i=1;i<=n;i++)
    {
        temp=temp*i;
        S=S+float(1)/temp;
    }
    return S;
}
void Nhap(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n<0);
}