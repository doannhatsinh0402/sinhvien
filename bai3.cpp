#include<stdio.h>
#include<time.h>
//
void Xuat(float Kq);
void Nhap(int &n);
float TinhS(int n);
//
int main()
{
    clock_t start = clock();
    int n;
    Nhap(n);
    float Kq=TinhS(n);
    Xuat(Kq);
    printf("time: %.2f",float(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}
void Xuat(float Kq)
{
    printf("S = %.2f\n",Kq);
}
void Nhap(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    }
    while(n<0);
}
float TinhS(int n)
{
    float S=0;
    int temp=0;
    for(int i=1;i<=n;i++)
    {
        temp=temp+i;
        S=S+float(1)/temp;
    }
    return S;
}