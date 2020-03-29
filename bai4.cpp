#include<stdio.h>
#include<time.h>
//
long TinhS(int n);
void Xuat(long Kq);
void Nhap(int &n);
//
int main()
{
    clock_t start = clock();
    int n;
    Nhap(n);
    long Kq=TinhS(n);
    Xuat(Kq);
    printf("time : %.2f\n",float(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}
long TinhS(int n)
{
    long S=0;
    int temp=1;
    for(int i=1;i<=n;i++)
    {
       temp=temp*i;
       S=S+temp; 
    }
    return S;
}
void Xuat(long Kq)
{
    printf("S = %ld\n",Kq);
}
void Nhap(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n<0);
}