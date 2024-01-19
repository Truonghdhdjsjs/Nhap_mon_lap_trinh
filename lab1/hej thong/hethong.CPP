#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void so_nguyen()
{
	int snt;
   cout<<" 1:kiem tra so nguyen:\n";
   cout<<" 2:kiem tra so nguyen to:\n";
   cout<<"3:kiem tra so chinh phuong:\n";
   cout<<" hay nhap so ban muon kiem tra :";
   cin>>snt;
   switch(snt)
   {
   	case 1:
      {
      	int a;
         cout<<" hay nhap so :";
         cin>>a;
         if(a<0)
         {
         	cout<<"so nguyen am:"<<a;
         }
         else if(a>0)
         {
         	cout<<" so nguyen duong:"<<a;
         }
         else if(a==0)
         {
         	cout<<"la so khong am:"<<a;
         }
      }
      case 2:
      {
      	int b;
         cout<<" hay nhap so nguyen to :";
         cin>>b;
         int count=0;
         if(b>1)
         {
         	for(int i=2;i<b;i++)
         	{
         		if(b%i==0)
            	{
            		 count++;
            	}
         	}
         	if(count==0)
         	{
          		cout<<" la so nguyen to:"<<b;
          	}
          	else
          	{
            	cout<<" ko la so nguyen to:";
          	}
         }
         break;
      }
      case 3:
      {
      	int c;
         cout<<"hay nhap so muon biet chinh phuong:";
         cin>>c;
         //int count=0;
         for(int i=1;i<c;i++)
         {
         	if(i*i==c)
            {
            	cout<<" la so chinh phuong:"<<c;
               break;
            }
            else
            {
            	cout<<" khong la so chinh phuong:"<<c;
            }
         }
      }
   }
}
void tinh_phan_so()
{
	float a,b,tong,hieu,tich,thuong;
   int pheptinh;
   cout<<" chaof ban den voi chuong trinh tinh phan so:\n";
   cout<<" nhap phan so a:\n";
   cin>>a;
   cout<<" nhap phan so b:";
   cin>>b;
   cout<<" moi ban hay nhap phep tinh:";
   cin>>pheptinh;
   switch(pheptinh)
   {
   	case 1:
      {
      	tong=a+b;
         cout<<"co gia tri la :"<<tong;
      }
      case 2:
      {
      	hieu=a-b;
         cout<<"co gia tri la :"<<hieu;
      }
      case 3:
      {
      	tich=a*b;
         cout<<" co gia tri la :"<<tich;
      }
      case 4:
      {
      	if( a!=0)
         {
      		thuong=a/b;
         cout<<" co gia tri la :"<<thuong;
         break;
         }
         else
         {
         	cout<<"chuong trinh kong thuc hien duoc:";
            break;
         }
      }
      default:
      {
      	break;
      }
   }

}
void main()
{
	char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;

    cout << "Nhap ten tai khoan: ";
    cin >> user;
    cout << "Nhap mat khau: ";
    cin >> pass;

    if (strcmp(user, userSys) == 0 && pass == passSys) {
		int menu;
      cout<<" moi ban nhap du kien vao trong chuong trrinh::\n";
      cout<<"1: kiem tra so nguyen :\n";
      cout<<"2; tim uoc so chuhg va bo so chung:\n";
      cout<<"3: chuc nang tinh tien quan karaoke:\n";
      cout<<"4: chuc nang tinh tien dien :\n";
      cout<<"5: chuc nang doi tien:\n";
      cout<<"6; chuc nang tinh lai xuat ngan hang:\n";
      cout<<"7: xay dung tinh nang vay tien:\n";
      cout<<"8: chuc nang sap xep thong tin:\n";
      cout<<"9: chuc nang xay dung game:\n";
      cout<<"10: chuc nang tinh phan so:\n";
      cout<<" moi ban hay nhap chuc nang:";
      cin>>menu;
      switch(menu)
      {
      	case 1:
         {
             so_nguyen();
             break;
         }
      	case 10:
         {
            tinh_phan_so();
         	break;
         }
         default:
         {
         	break;
         }
      }
     }else {
        cout << "Ten tai khoan hoac mat khau khong dung.";
    }

    getch();
}