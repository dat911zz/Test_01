//#include<iostream>
//using namespace std;
////Prototype
//double tinhS(int n);
//void xuatFib(int m, int n);
//int bai16(int n);
////Main
//void main()
//{
//	int n,m;
//	//cin >> n;
//	//cout << endl;
//	//cout << tinhS(n);
//
//	/*int A[100];
//	cin >> m >> n;
//	xuatFib(m, n);*/
//
//	cin >> n;
//	cout << bai16(n);
//}
////Functions
////double tinhS(int n)
////{
////	float S = 0;
////	for (int i = 1; i <= n; i++)
////	{
////		S = sqrt(5 + S);
////	}
////	return S;
////}
////
////int max(int x, int y)
////{
////	return x > y ? x : y;
////}
////// n=1 :max(a[0]);
////// n=2 :max(max(a[0]),a[1]);
////// n=3 :max(max(max(a[0]),a[1]),a[2]);
////// n=4 :max(max(max(max(a[0]),a[1]),a[2]),a[3]);
////int timMax_DQ(int a[], int n)//Ham de quy
////{
////	//Phan dk dung
////	if (n == 1)
////	{
////		return a[0];
////	}
////	//Phan de quy
////	return max(timMax_DQ(a, n - 1), a[n - 1]);
////}
//void nhapM1C(int* A, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap pt " << i << " : ";
//		cin >> A[i];
//	}
//}
//void xuatM1C(int* A, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << " " << A[i];
//	}
//	cout << endl;
//}
//void mySwap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
////void hoanVi(int* A, int n)
////{
////	//Neo
////	if (n == 1)
////	{
////		cout << " " << A[0];
////		return;
////	}
////	//Phan De quy
////	for (int i = 0; i < n; i++)
////	{
////		mySwap()
////	}
////}
//int fib(int n)
//{
//	//Neo
//	if (n <= 2)
//	{
//		return 1;
//	}
//	//Phan De Quy
//	return fib(n - 1) + fib(n - 2);
//}
//void xuatFib(int m, int n)
//{
//	for (int i = 0; i < n; i++)
//	{	
//		if (fib(i) >= m && fib(i) <= n)
//		{
//			cout << " " << fib(i);
//		}
//		else
//		{
//			if (fib(i) > n)
//			{
//				break;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//}
//int bai16(int n)
//{
//	//Neo
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	if (n == 3)
//	{
//		return 3;
//	}
//	//Phan de quy 
//	return bai16(n - 1) + 2 * bai16(n - 2) + 3 * bai16(n - 3);
//}