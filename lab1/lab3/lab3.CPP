#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void tinh_tong()
{
	int max,min;
   float tong=0,biendem=0,trungbinh=0;
   cout<<"hay nhap gia tri nho nhat :";
   cin>>min;
   cout<<"hayx nhap gia tri lon nhat:";
   cin>>max;
   for(int i=min;i<=max;i++)
   {
   	if(i%2==0)
      {
   		tong+=i;
         biendem++;
      }
   }
   trungbinh=tong/biendem;
   cout<<" gia tri la :"<<trungbinh;
}
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
void snt()
{
	int num;
   cout<<" nhap so b?n muon:";
   cin>>num;
    if (isPrime(num)) {
        cout << num << " l� s? nguy�n t?." ;
    } else {
        cout << num << " kh�ng ph?i l� so nguyen to.";
    }



}
void ptchnhphuong()
{
   int x;
   cout<<" hay nhap gia tr� x:";
   cin>>x;
   for( int i=1;i<=x;i++)
   {
   	if(i*i==x)
      {
      	cout<<" l� phuong tr�nh ch�nh phuong:"<<i<<"\n";
      }
      else
      {
      	cout<<" khong la ph??ng trinh chinh phuong:"<<i<<"\n";
      }
   }
}
void main()
{
	int menu;
   cout<<" hay nhap so thu tu ban muon:";
   cin>>menu;
   switch(menu)
   {
   	case 1:
      {
      	tinh_tong();
         break;
      }
      case 2:
      {
      	snt();
         break;
      }
      case 3:
      {
      	ptchnhphuong();
         break;
      }
      default:
      {
         break;
      }
   }
   getch();
}
