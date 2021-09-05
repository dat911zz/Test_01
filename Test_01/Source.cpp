//////==================================================================//
//////							Test Programme							//
//////==================================================================//
////#include<iostream>
////#include<ctype.h>
////using namespace std;
//////==================================================================//
//////Structs and Constants
////struct Date
////{
////	int d, m, yyyy;
////};
//////==================================================================//
//////Prototype
////void input(Date &x);
////void output(Date x);
//////==================================================================//
//////Main function
////void main()
////{
////	Date x;
////	input(x);
////	output(x);
////}
//////==================================================================//
//////Functions
////void input(Date &x)
////{
////	try//Handling Exception - Xu ly ngoai le
////	{
////		cout << "Nhap ngay / thang / nam sinh: ";
////		cin >> x.d >> x.m >> x.yyyy;
////		if (x.d < 0 || x.d > 31)
////		{
////			throw"Nhap khong dung!";
////		}
////		else
////		{
////			if (x.m < 0 || x.m > 12)
////			{
////				throw"Nhap khong dung!";
////			}
////			else
////			{
////				if (x.yyyy < 0 || x.yyyy > 2021)
////				{
////					throw"Nhap khong dung!";
////				}
////			}
////		}	
////	}
////	catch (const char *msg)//Gui thong bao loi ngoai le 
////	{
////		system("color 04");
////		cout << "ERROR: " << msg << endl;
////	}
////}
////void output(Date x)
////{
////	cout << "Ngay sinh: " << x.d << endl;
////	cout << "Thang sinh: " << x.m << endl;
////	cout << "Nam sinh: " << x.yyyy << endl;
////}
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//void nhapM1C(float* a, int& n);
//void xuatM1C(float* a, int n);
//float random(float n);
//int ktraSNT(int x);
//void xuatPTcoPhanNguyenlaSNT(float* a, int n);
//void xuatPhanThapPhan(float* a, int n);
//int demPTcoPhanNguyenLaChuSo2(float* a, int n);
//void xoaPT(float* a, int& n, int k);
//void xoaPTcoPhanNguyenLe(float* a, int& n);
//void main()
//{
//	float* a = NULL;
//	a = (float*)malloc(100 * sizeof(float));
//	int n = 0;
//	nhapM1C(a, n);
//	xuatM1C(a, n);
//	//printf("\nXuat cac PT co phan nguyen la SNT: ");
//	//xuatPTcoPhanNguyenlaSNT(a,n);
//	//printf("\nXuat cac phan thap phan cua phan tu: \n");
//	//xuatPhanThapPhan(a,n);
//	printf("\n\nSo phan tu co phan nguyen la chu so 2 la: %d", demPTcoPhanNguyenLaChuSo2(a, n));
//	printf("\n\nM1C sau khi xoa phan tu co phan nguyen le: \n");
//	xoaPTcoPhanNguyenLe(a, n);
//	_getch();
//}
//float random(float n)
//{
//	return n * rand() / RAND_MAX;
//}
//void nhapM1C(float* a, int& n)
//{
//	srand((unsigned)time(NULL));
//	printf("\nMoi ban nhap so luong phan tu: "); scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//		a[i] = random(n);
//}
//void xuatM1C(float* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%.3f", *(a + i));
//		printf("     ");
//	}
//}
//int ktraSNT(int x)
//{
//	for (int i = 2; i <= x / 2; i++)
//		if (x % i == 0) return 0;
//	return 1;
//}
//void xuatPTcoPhanNguyenlaSNT(float* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (ktraSNT((int)a[i]) == 1)
//		{
//			printf("%.3f", *(a + i));
//			printf("     ");
//		}
//	}
//}
//void xuatPhanThapPhan(float* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", (int)((a[i] - (int)a[i]) * 1000));
//	}
//}
//int demPTcoPhanNguyenLaChuSo2(float* a, int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if ((int)a[i] == 2)
//			dem++;
//	}
//	return dem;
//}
//void xoaPT(float* a, int& n, int k)
//{
//	for (int i = k + 1; i < n; i++)
//		*(a + i - 1) = *(a + i);
//	n--;
//}
//void xoaPTcoPhanNguyenLe(float* a, int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int m = (int)a[i];
//		if (m % 2 != 0)
//		{
//			xoaPT(a, n, i);
//			i--;
//		}
//	}
//	xuatM1C(a, n);
//}  