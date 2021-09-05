//#include<iostream>
//using namespace std;
////Prototype
//void nhapM2CRand(int a[][100], int m, int n);
//void xuatPTCucDai(int a[][100], int x, int y);
//void timPTCucDai(int a[][100], int m, int n);
//void xuatM2C(int a[][100], int m, int n);
//void nhapDong_Cot(int& m, int& n);
////Main
//void main()
//{
//	int a[100][100];
//	int m, n;
//	nhapDong_Cot(m, n);
//	nhapM2CRand(a, m, n);
//	xuatM2C(a, m, n);
//	cout << endl;
//	timPTCucDai(a, m, n);
//	cout << endl;
//	system("pause");
//}
////Functions
//void nhapDong_Cot(int& m, int& n)
//{
//	cout << "Nhap so dong: ";
//	cin >> m;
//	cout << "Nhap so cot: ";
//	cin >> n;
//}
//void nhapM2CRand(int a[][100], int m, int n)
//{
//	srand((int)time(0));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			a[i][j] = rand() % 100;
//		}
//	}
//}
//void xuatPTCucDai(int a[][100], int x, int y)
//{
//	printf("\nPT cuc dai: a[%d][%d] = %d", x, y, a[x][y]);
//}
//void timPTCucDai(int a[][100], int m, int n)
//{
//	if (m * n == 1)
//	{
//		xuatPTCucDai(a, 0, 0);
//	}
//	else
//	{
//		//==========================================
//		//TH 1:Cac PT nam o 4 goc 
//		if (a[0][0] > a[0][1] && a[0][0] > a[1][0] && a[0][0] > a[1][1])
//		{
//			xuatPTCucDai(a, 0, 0);
//		}
//
//		if (a[0][n - 1] > a[0][n - 2] && a[0][n - 1] > a[1][n - 2] && a[0][n - 1] > a[1][n - 1])
//		{
//			xuatPTCucDai(a, 0, n - 1);
//		}
//
//		if (a[m - 1][0] > a[m - 1][1] && a[m - 1][0] > a[m - 2][0] && a[m - 1][0] > a[m - 2][1])
//		{
//			xuatPTCucDai(a, m - 1, 0);
//		}
//
//		if (a[m - 1][n - 1] > a[m - 2][n - 1] && a[m - 1][n - 1] > a[m - 1][n - 2] && a[m - 1][n - 1] > a[m - 2][n - 2])
//		{
//			xuatPTCucDai(a, m - 1, n - 1);
//		}
//		//==========================================
//		//TH 2:Cac PT nam o 4 duong bien ( tru cac PT o 4 goc)
//		//Bien tren
//		for (int j = 1; j < n - 1; j++)
//		{
//			if (a[0][j] > a[0][j - 1] && a[0][j] > a[1][j - 1] && a[0][j] > a[1][j] && a[0][j] > a[1][j + 1] && a[0][j] > a[0][j + 1])
//			{
//				xuatPTCucDai(a, 0, j);
//			}
//		}
//		//Bien duoi
//		for (int j = 1; j < n - 1; j++)
//		{
//			if (a[m - 1][j] > a[m - 1][j - 1] && a[m - 1][j] > a[1][j - 1] && a[m - 1][j] > a[m - 2][j] && a[m - 1][j] > a[m - 2][j + 1] && a[m - 1][j] > a[m - 1][j + 1])
//			{
//				xuatPTCucDai(a, m - 1, j);
//			}
//		}
//		//Bien trai
//		for (int i = 1; i < m - 1; i++)
//		{
//			if (a[i][0] > a[i - 1][0] && a[i][0] > a[i - 1][1] && a[i][0] > a[i][1] && a[i][0] > a[i + 1][1] && a[i][0] > a[i + 1][0])
//			{
//				xuatPTCucDai(a, i, 0);
//			}
//		}
//		//Bien phai 
//		for (int i = 1; i < m - 1; i++)
//		{
//			if (a[i][n - 1] > a[i - 1][n - 1] && a[i][n - 1] > a[i - 1][n - 2] && a[i][n - 1] > a[i][n - 2] && a[i][n - 1] > a[i + 1][n - 2] && a[i][n - 1] > a[i + 1][n - 1])
//			{
//				xuatPTCucDai(a, i, n - 1);
//			}
//		}
//		//==========================================
//		//TH con lai
//		for (int i = 1; i < m - 1; i++)
//		{
//			for (int j = 1; j < n - 1; j++)
//			{
//				if (a[i][j] > a[i - 1][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i - 1][j + 1] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j + 1] && a[i][j] > a[i + 1][j] && a[i][j] > a[i + 1][j - 1] && a[i][j] > a[i][j - 1])
//				{
//					xuatPTCucDai(a, i, j);
//				}
//			}
//		}
//	}
//}
//void xuatM2C(int a[][100], int m, int n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		cout << endl;
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//	}
//}