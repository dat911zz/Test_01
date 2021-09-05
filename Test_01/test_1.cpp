//#include<iostream>
//using namespace std;
//////De quy
////int giaiThua(int n)
////{
////	if (n == 1)
////		return	1;
////	return giaiThua(n - 1) * n;
////}
////double tinhS(int n)
////{
////	if (n == 1)
////		return -1;
////	return tinhS(n - 1) + (pow(-1, n) * ((2 * n - 1)*(2 * n)) / (1.0 * giaiThua(2 * n)));
////}
//////Khu de quy
////int giaiThua(int n)
////{
////	int S = 1;
////	for (int i = 0; i <= n; i++)
////	{
////		S = S * i;
////	}
////	return S;
////}
////int tinhS(int n)
////{
////	int S = 0;
////	for (int i = 0; i < n; i++)
////	{
////		S = S + (pow(-1, i) * ((2 * i - 1) * (2 * i)) / giaiThua(2 * i));
////	}
////}
//void main()
//{
//	int n = 3;
//	cout << tinhS(n) << endl;
//}
//void xoaPTVTK(int* a, int& n, int k)
//{
//	for (int i = k + 1; i < n; i++)
//	{
//		*(a + i - 1) = *(a + i);
//	}
//	n--;
//}
//void xoaPTSauPTLeCuoi(int* a, int& n)
//{
//	int check = 0;
//	for (int i = n-1; i >= n; i--)
//	{
//		if (*(a+i)%2!=0)
//		{
//			check = 1;
//			xoaPTVTK(a, n, i + 1);//Xoa pt sau pt le cuoi
//		}
//	}
//	if (check == 0)
//	{
//		xoaPTVTK(a, n, n - 1);//Xoa pt cuoi mang
//	}
//}
//void xuatDongK(int a[][100], int n, int k)
//{
//	for (int j = 0; j < n; j++)
//	{
//		cout << a[k][j];
//	}
//}
//
////XUAT PT CUC DAI
