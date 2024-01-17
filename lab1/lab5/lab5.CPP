#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void so_lon_nhat()
{
 	float a,b,c;
   cout<<" hay nhap so thu nhat:";
   cin>>a;
   cout<<" hya nhap so thu 2:";
   cin>>b;
   cout<<" hay nhap so thu 3:";
   cin>>c;
   float max=a;
   if(max<b && b>c)
   {
   	cout<<" so lon nhat la :"<<b<<"\n";
   }
   else if(max<c && c>b)
   {
   	cout<<" so lon nhat la :"<<c;
   }
}
void nam_nhuan()
{
	int nam;
    cout<<" hay nhap so nam ban muon:";
    cin>>nam;
    if(nam %400==0 || nam%4==0 && nam%100!=0)
    {
    	cout<<" nam nhuan:"<<nam;
    }
    else
    {
    	cout<<" khong phao nam nhuan:"<<nam;
    }
}
void ham_hoan_vi()
{
	float a,b,temp;
   cout<<" hay nhap gia tri a:";
   cin>>a;
   cout<<" hay nhap gia tri b:";
   cin>>b;

   temp=a;
   a=b;
   b=temp;
   cout<<" gia tri cua a la :"<<a;
   cout<<" gia tri cua a la :"<<b;
}
void tinh_trung_binh_cac_so_chia_cho_3()
{
	int n,tong=0,trungbinh=0,biendem=0;
   cout<<" hay nhap gia tri :";
   cin>>n;
   for(int i=0;i<=n;i++)
   {
   	if(i%3==0)
      {
      	tong+=i;
         biendem++;
      }
      else
      {
      	cout<<i;
      }
   }
   trungbinh=tong/biendem;
   cout<<"gia tri trung binh la :"<<trungbinh;
}
void sap_xep_giam_dan()
{
	int min,max;
   cout<<" hay nhap gia tri nho:";
   cin>>min;
   cout<<"hay nhap gia tri lon:";
   cin>>max;
   for(int i=max;i>=min;i--)
   {
   	cout<<i;
   }
}
void main()
{

	int menu;
   cout<<" 1: tìm so gia tri lon nhat:\n";
   cout<<" 2; hàm tinh nam nhuan:\n";
   cout<<" 3: xay dung ham hoan vi :\n";
   cout<<" ban hay chon so mình mong muon:";
   cin>>menu;
   switch(menu)
   {
   	case 1:
      	{
            so_lon_nhat();
            break;
         }
      case 2:
      	{
             nam_nhuan();
             break;
         }
      case 3:
      	{
            ham_hoan_vi();
            break;
         }
      case 4:
      	{
            tinh_trung_binh_cac_so_chia_cho_3();
            break;
         }
      case 5:
      	{
            sap_xep_giam_dan();
            break;
         }
      default:
      	{
         	cout<<" thoat chuong trinh:";
            break;
         }
   }
getch();
}
