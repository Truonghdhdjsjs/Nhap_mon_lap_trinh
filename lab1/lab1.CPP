#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
void dien_tich_hinh_chu_nhat()
{
	int a,b,cv,dt;
   cout<<" hay nhap gia tri a:";
   cin>>a;
   cout<<" hay nhap gia tri b:";
   cin>>b;
   cv=(a+b)*2;
   dt=a*b;
   cout<<" chu vi hình chu nhat la :"<<cv;
   cout<<" dien tich hinh chu nhat la :"<<dt;
}
void dien_tich_hinh_tron()
{
	float r,cv,dt,pi=3.14;
   cout<<" hay nhap ban kinh hinh tron:";
   cin>>r;
   cv=2*r*pi;
   dt=r*r*pi;
   cout<<" chu vi hình tron la :"<<cv;
   cout<<" diem tich hinh tron la:"<<dt;
}
void diem_trung_binh()
{
	float a,b,c,tb;
   cout<<" hay nhap gia tri toan:";
   cin>>a;
   cout<<" hay nhap gia tri ly:";
   cin>>b;
   cout<<" hay nhap gia tri hoa :";
   cin>>c;
   tb=((a*3)+(b*2)+c)/6;
   cout<<" gia tri ket qua la :"<<tb;
}
void main()
{
	int menu;
   cout<<" hay nhap kí tu menu:";
   cin>>menu;
   switch(menu)
   {
   case 1:
       dien_tich_hinh_chu_nhat();
       break;
   case 2:
   	dien_tich_hinh_tron();
      break;
   case 3:
   	diem_trung_binh();
      break;
   default:
   	cout<<" ket qua khong hop le:";
      break;
   }
getch();
}
