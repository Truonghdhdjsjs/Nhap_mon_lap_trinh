#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
void nhap_diem_hoc_luc()
{
	float a;
   cout<<" hay nhap diem :";
   cin>>a;
   if(a>=9)
   {
   	cout<<" hoc sinh xuat sac:";
   }
   else if(a>=8 && a<9)
   {
    cout<<" hoc sinh gioi:";
   }
   else if(a>=6.5 && a<8)
   {
   	cout<<" hoc sinh kha :";
   }
   else if(a>=5 && a<6)
   {
   	cout<<" hoc sinh trung binh:";
   }
   else if(a>=3.5 && a<5)
   {
   	cout<<" hoc sinh yeu:";
   }
   else if( a<3.5)
   {
   	cout<<" hoc sinh kem:";
   }
}
void phtbac1()
{
 	int a,b,x;
   cout<<" nhap gia tri a";
   cin>>a;
   cout<<" nhap gia tri b:";
   cin>>b;
   if(a==0)
   {
   	if(b==0)
      {
      	cout<<" phuong trinnh vo so nghiem:";
      }
      else
      {
      	cout<<" phuong trinh vo nghiem:";
      }
   }
   else
   {
   	x=-b/a;
      cout<<" gia tri cua phuong trinh la :"<<x;
   }
}
void ptbac2()
{
	float a,b,c,pt,delta;
   cout<<" hay nhap gia tri a";
   cin>>a;
   cout<<" hay nhap gia tro b:";
   cin>>b;
   cout<< "hay nhap gia tri c: ";
   cin>>c;
   if(a ==0)
   {
      pt=-c/b;
      cout<<" phuong trinh có gia tri la "<<pt;
   }
   else
   {
   	delta=b-a*c;
      if( delta<0)
      {
       	cout<<" phuong trinh vo nghiem :";
      }
      else if( delta==0)
      {
      	pt=-b/(2*a);
         cout<<" phuong trinh có 1 nghiem"<<pt;
      }
      else if(delta>0)
      {
      	cout<" phuong trình có 2 nghiem:";
         float pt1=(-b+sqrt(delta))/(2*a);
         cout<<" phuong trinh 1 co nghiem la :"<<pt1;
         float pt2=(-b-sqrt(delta))/(2*a);
         cout<<" phuong rinh 2 co nghiem la :"<<pt2;
      }
   }
}
void main()
{
	int menu;
   cout<<"moi nhap menu :";
   cin>> menu;
   switch(menu)
   {
    case 1:
    	{
          nhap_diem_hoc_luc();
          break;
      }
      case 2:
    	{
          phtbac1();
          break;
      }
      case 3:
    	{
          ptbac2();
          break;
      }
    default:
    	{
          cout<<" ket qua khong hop le";
          break;
      }
    }
    getch();
}
