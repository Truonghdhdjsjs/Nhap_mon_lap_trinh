#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
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
      		thuong=a-b;
         cout<<" co gia tri la :"<<hieu;
         }
         else
         {
         	cout<<"chuong trinh kong thuc hien duoc:";
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
      cout<<" moi ban nhap du kien vao trong chuong trrinh::";
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
    } else {
        cout << "Ten tai khoan hoac mat khau khong dung.";
    }

    getch();
}