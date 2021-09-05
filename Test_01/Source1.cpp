//#include<iostream>
//#include<ctype.h>
//using namespace std;
////Prototype
//void nhapM1C(int* a, int& n);
//void xuatM1C(int* a, int n);
//void nhapM2C(int aa[][50], int &n);
//void xuatM2C(int aa[][50], int n);
//void xoaPTVTK(int* a, int& n, int k);
//void xoaPTLeCuoiCung(int* a, int &n);
//void xuatDongGiamDan(int aa[][50], int n);
//void xuatDongK(int aa[][50], int n, int k);
//
////Main function
//void main()
//{
//	int a[100];
//	int aa[50][50];
//	int n;
//	nhapM2C(aa, n);
//	xuatM2C(aa, n);
//	/*xoaPTLeCuoiCung(a, n);
//	xuatM1C(a, n);*/
//	xuatDongGiamDan(aa, n);
//	system("pause");
//}
////Functions
//void nhapM1C(int* a, int& n)
//{
//	cout << "Nhap n: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap pt thu " << i << ": ";
//		cin >> *(a + i);
//	}
//}
//void xuatM1C(int* a, int n)
//{
//	cout << "-Noi dung trong mang-" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[" << i << "] = " << *(a + i) << endl;
//	}
//}
//void xoaPTVTK(int* a, int &n, int k)
//{
//	for (int i = k + 1; i < n; i++)
//	{
//		*(a + i - 1) = *(a + i); //a[i - 1] = a[i];
//	}
//	n--;
//}
//void xoaPTLeCuoiCung(int* a, int &n)
//{
//	int dem = 0;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (*(a + i) % 2 != 0)
//		{
//			xoaPTVTK(a, n, i);
//			dem++;
//			break;
//		}
//	}
//	if (dem == 0)
//	{
//		xoaPTVTK(a, n, n - 1);
//	}
//}
//void xuatDongGiamDan(int aa[][50], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (aa[i][j] <= aa[i][j+1])
//			{
//				break;
//			}
//			else
//			{
//				cout << "Xuat dong giam" << endl;
//				xuatDongK(aa, n, i);
//				cout << endl;
//				break;
//			}
//		}
//	}
//}
//void xuatDongK(int aa[][50], int n, int k)
//{
//	for (int j = 0; j < n; j++)
//	{
//		cout << "a[" << k << "][" << j << "] = " << aa[k][j] << endl;
//	}
//}
//void nhapM2C(int aa[][50], int& n)
//{
//	cout << "Nhap n: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << "Nhap pt a[" << i << "]["<<j<<"]:";
//			cin >> aa[i][j];
//		}
//	}
//}
//void xuatM2C(int aa[][50], int n)
//{
//	cout << "-M2C:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << "a[" << i << "][" << j << "] = " << aa[i][j] << endl;
//		}
//		cout << endl;
//	}
//}