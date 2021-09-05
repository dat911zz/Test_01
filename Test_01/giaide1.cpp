////#include<iostream>
////using namespace std;
//////Struct 
////
//////Prototype
////void menu();
////void thucHienChuongTrinh();
////void nhapM1C(int* a, int& n);
////void xuatM1C(int* a, int n);
////void _nhapXuatM1C(int* a, int& n);
////int tinhSNhoHon100(int* a, int n);
////int kiemTraPTCoDung2CSLe(int x);
////void xuatPTChiChua2CSLe(int* a, int n);
////double tinhS_DQ(int n);
////double tinhS_KDQ(int n);
////int timCSLN_KDQ(int n);
////int timCSLN_DQ(int n);
//////Main
////void main()
////{
////	thucHienChuongTrinh();
////}
//////Functions
////void menu()
////{
////	int i = 1, chon = 1;
////	cout << "\t\t\t-----Menu-----" << endl;
////	cout << "\t\t\t   ";
////	cout << "Cau " << i++ << endl;
////	for (int j = 1; j < 3; j++)
////	{
////		cout << "\t\t\t   ";
////		cout << i << "." << j << " - " << chon++ << endl;
////	}
////	cout << "\t\t\t   ";
////	cout << "Cau " << i++ << endl;
////	for (int j = 1; j < 4; j++)
////	{
////		cout << "\t\t\t   ";
////		cout << i << "." << j << " - " << chon++ << endl;
////	}
////	cout << "\t\t\t   ";
////	cout << "Cau " << i++ << endl;
////	for (int j = 1; j < 4; j++)
////	{
////		cout << "\t\t\t   ";
////		cout << i << "." << j << " - " << chon++ << endl;
////	}
////}
////void thucHienChuongTrinh()
////{
////	int chon, n, x;
////	int a[100];
////	do
////	{
////		system("cls");
////		menu();
////		cout << "Chon: ";
////		cin >> chon;
////		switch (chon)
////		{
////		case 1:
////			_nhapXuatM1C(a, n);
////			cout << "Tong cac phan tu < 100: " << tinhSNhoHon100(a, n);
////			break;
////		case 2:
////			_nhapXuatM1C(a, n);
////			xuatPTChiChua2CSLe(a, n);
////			break;
////		case 3:
////			cout << "Nhap x: ";
////			cin >> x;
////			cout << "S de quy: " << tinhS_DQ(x) << endl;
////			cout << "S khu de quy: " << tinhS_KDQ(x);
////			break;
////		case 4:
////			cout << "Nhap x: ";
////			cin >> x;
////			cout << "DQ-Chu so lon nhat trong so nguyen duong " << x << ": " << timCSLN_DQ(x) << endl;
////			cout << "KDQ-Chu so lon nhat trong so nguyen duong " << x << ": " << timCSLN_KDQ(x);
////			break;
////		case 5:
////			break;
////		case 6:
////			break;
////		case 7:
////			break;
////		case 8:
////			break;
////		default:
////			cout << "EXIT!" << endl;
////			break;
////		}
////		cout << endl;
////		system("pause");
////	} while (chon > 0 && chon < 9);
////}
////void nhapM1C(int* a, int& n)
////{
////	cout << "Nhap n: ";
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		cout << "Nhap gt phan tu " << i << " : ";
////		cin >> a[i];
////	}
////}
////void xuatM1C(int* a, int n)
////{
////	cout << "Noi dung phan tu trong M1C" << endl;
////	for (int i = 0; i < n; i++)
////	{
////		cout << " " <<a[i];
////	}
////}
////void _nhapXuatM1C(int* a, int& n)
////{
////	nhapM1C(a, n);
////	xuatM1C(a, n);
////	cout << endl;
////}
////int tinhSNhoHon100(int* a, int n)
////{
////	//Neo
////	if (n == 1)
////	{
////		return a[n-1] < 100 ? a[n-1] : 0;
////	}
////	//DQ
////	return a[n - 1] < 100 ? tinhSNhoHon100(a, n - 1) + a[n - 1] : tinhSNhoHon100(a, n - 1);
////}
////int kiemTraPTCoDung2CSLe(int x)
////{
////	int tmp = 0, dem = 0;
////	while (x != 0)
////	{
////		tmp = x % 10;
////		if (tmp % 2 != 0)
////		{
////			dem++;
////		}
////		x /= 10;
////	}
////	if (dem == 2)
////	{
////		return 1;
////	}
////	return 0;
////}
////void xuatPTChiChua2CSLe(int* a, int n)
////{
////	//Neo
////	if (n == 1)
////	{
////		if (kiemTraPTCoDung2CSLe(a[n-1]) == 1)
////		{
////			cout << " " << a[n-1];
////			return;
////		}
////		return;
////	}
////	//DQ
////	if (kiemTraPTCoDung2CSLe(a[n-1]) == 1)
////	{
////		cout << " " << a[n - 1];
////		xuatPTChiChua2CSLe(a, n - 1);
////	}
////	else
////	{
////		xuatPTChiChua2CSLe(a, n - 1);
////	}
////}
////double tinhS_DQ(int n)
////{
////	//Neo
////	if (n == 1)
////	{
////		return (1 + 2) / 2.0;
////	}
////	//DQ
////	return tinhS_DQ(n - 1) + (n + (n + 1)) / (n + 1.0);
////}
////double tinhS_KDQ(int n)
////{
////	float S = 0;
////	for (int i = 1; i <= n; i++)
////	{
////		S += (i + (i + 1)) / (i + 1.0);
////	}
////	return S;
////}
////int timCSLN_DQ(int n)
////{
////	//Neo
////	if (n >= 0 && n <= 9)
////	{
////		return n % 10;
////	}
////	//DQ
////	int max = timCSLN_DQ(n / 10);
////	return n % 10 > max ? n % 10 : max % 10;
////}
////int timCSLN_KDQ(int n)
////{
////	int tmp, max = n % 10;
////	while (n != 0)
////	{
////		tmp = n % 10;
////		if ( tmp > max )
////		{
////			max = tmp;
////		}
////		n /= 10;
////	}
////	return max;
////}
////  *Tên:Bui le thanh ngan  *//
////  *lop:11dhth6            *//
////  *mssv:2001202165        *//
////  *kiem tra buoi 10       *//
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include<time.h>
//#define MAX 100;
////*==========================*//
////khai bao nguyen mau ham
//void hienthimenu();
//void thucthichuongtrinh();
//void nhapSoNguyenDuong(int& x);
//void taomang1c(int*& a, int& n, int x, int y);
//void xuatmang(int*& a, int n);
//
////*=======================*//
////phan ham main
//void main()
//{
//	thucthichuongtrinh();
//	hienthimenu();
//	getch();
//
//}
////*========================*//
////phan dinh nghia ham
//void hienthimenu()
//{
//	printf("\n***************************************************");
//	printf("\n*                       MENU                      *");
//	printf("\n***************************************************");
//	printf("\n*1.Tao mang 1 chieu so nguyen                     *");
//	printf("\n*2.Xuat mang 1 chieu so nguyen                    *");
//	printf("\n*                                                 *");
//	printf("\n*                                                 *");
//	printf("\n*                                                 *");
//	printf("\n*                                                 *");
//	printf("\n*                                                 *");
//	printf("\n*                                                 *");
//	printf("\n* 0. Thoat chuong trinh                           *");
//	printf("\n***************************************************");
//}
////*===========================*//
//void thucthichuongtrinh()
//{
//	int* a = new int;
//	int n, x;
//	int luachon;
//	double kq;
//	do
//	{
//		hienthimenu();
//		printf("\nBan hay lua chon mot chuc nang: ");
//		scanf("%d", &luachon);
//		switch (luachon)
//		{
//		case 1:
//		{
//			taomang1c(a, n, 0, 99);
//			printf("noi dung cua mang la:");
//			xuatmang(a, n);
//			break;
//		}
//		case 2:
//		{
//			printf("Noi dung cua mang la");
//			xuatmang(a, n);
//			break;
//		}
//		}
//	} while (luachon != 0);
//}
//void nhapSoNguyenDuong(int& x)
//{//x: là 1 tham s? hình th?c, d?ng tham bi?n (có d?u &)
//	do
//	{
//		printf("Ban hay nhap mot so nguyen bat ky: ");
//		scanf("%d", &x);
//	} while (x <= 0);
//}
//void taomang1c(int*& a, int& n, int x, int y)
//{
//	nhapSoNguyenDuong(n);
//	a = (int*)malloc(n * sizeof(int));
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		*(a + i) = (rand() % (y - x + 1)) + x; //Tao trong doan [x, y]
//	}
//}
//void xuatmang(int*& a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%4d", &n);
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
