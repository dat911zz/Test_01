//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
////#include<stdio.h>
////#include<stdlib.h>
//using namespace std;
////Struct
//
////Prototype
//void nhapM1C(int* a, int& n);
//void xuatM1C(int* a, int n);
//void themPTVTK(int* a, int& n, int k, int x);
//void tim_ThemPTChanDauTien(int* a, int& n);
//double tinhS_DQ(int n);
//double tinhS_KDQ(int n);
//int tinhX(int n);
//int tinhY(int n);
////Main
//void main()
//{
//	////int a[100];									//Khai bao mang tinh
//	//int* a = (int*)malloc(100 * sizeof(int));		//Khai bao mang dong
//	//int n, k, x;
//	//nhapM1C(a, n);
//	//xuatM1C(a, n);
//	//tim_ThemPTChanDauTien(a, n);
//	//xuatM1C(a, n); 
//
//	int n;
//	cin >> n;
//	cout << endl;
//	/*cout << tinhS_KDQ(n) << endl;*/
//	cout << tinhX(n) << endl;
//	cout << tinhY(n) << endl;
//}
////Functions
//void nhapM1C(int* a, int& n)
//{
//	cout << "Nhap n: "; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap pt thu " << i << ": ";
//		scanf("%d", &*(a + i));
//	}
//}
//void xuatM1C(int* a, int n)
//{
//	cout << "Noi dung cua M1C" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(a + i) << " ";
//	}
//}
//void themPTVTK(int* a, int &n, int k, int x)
//{
//	if (k >= 0 && k <= n)
//	{
//		for (int i = n-1; i >= k; i--)
//		{
//			/*a[i + 1] = a[i];*/
//			*(a + i + 1) = *(a + i);
//		}
//		/*a[k] = x;*/
//		*(a + k) = x;
//		n++;
//	}
//	else
//	{
//		system("color 04");
//		cout << "DCM VUI LONG NHAP LAI!" << endl;
//		return;
//	}
//}
//void tim_ThemPTChanDauTien(int* a, int& n)
//{
//	int check = 0, x;
//	for (int i = 0; i < n; i++)
//	{
//		if (/*a[i] % 2 == 0 */ *(a + i) % 2 == 0)
//		{
//			cout << "\nNhap phan tu muon them vao: "; cin >> x;
//			themPTVTK(a, n, i, x);
//			check++;
//			break;
//		}
//	}
//	if (check == 0)
//	{
//		cout << "Nhap phan tu muon them vao: "; cin >> x;
//		themPTVTK(a, n, n, x);
//	}
//}
//
////cau 4 
////b)
////De quy 
//double tinhS_DQ(int n)
//{
//	//Dieu kien dung
//	if (n == 3)
//	{
//		return 1.0 / 6;
//	}
//	//Phan de quy
//	return tinhS_DQ(n - 1) + (1.0 / ((n - 2) * (n - 1) * n));
//}
//
////Khu de quy 
//double tinhS_KDQ(int n)
//{
//	float S = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		S = S + (1.0 / ((i - 2) * (i - 1) * i));
//	}
//	return S;
//}
//
////De quy 
//int tinhX(int n)
//{
//	//Dieu kien dung
//	if (n == 0)					//		0	1	2	3	4	5
//	{							//					<---
//		return 1;				//	-1	0	1	...
//	}							//			
//	//Phan de quy
//	return tinhX(n - 1) + 3 * tinhY(n - 1);
//}
//int tinhY(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return 3 * tinhX(n - 1) + 2 * tinhY(n - 1);
//}
//
////-----------------------------
////Bai 1
//void xoaPTSauLeCuoiCung(int*& a, int& n)
//{
//	int t = timLeCuoi(a, n);
//	if (t == -1)
//		n--;
//	else
//	{
//		for (int i = t; t < n - 1; t++)
//		{
//			*(a + i) = *(a + i + 1);
//		}
//		n--;
//	}
//}
//int timLeCuoi(int* a, int n)
//{
//	for (int i = n - 1; i >= 0; i--)
//		if (*(a + i) % 2 == 1)
//			return i;
//	return -1;
//}

// CPP program to find multiplication
// of two number without use of
// multiplication operator
#include<iostream>
using namespace std;

// Function for multiplication
int multiply(int n, int m)
{
    int ans = 0, count = 0;
    cout << "m" << " " << "ans" << " " << "count" << endl;
    while (m)
    {
        // check for set bit and left
        // shift n, count times
        if (m % 2 == 1)
        {
            ans += n << count;
            cout << m << " " << ans << " " << count << endl;
        }

        cout << m << " " << ans << " " << count << endl;

        // increment of place value (count)
        count++;
        m /= 2;
    }
    cout << m << " " << ans << " " << count << endl;
    return ans;
}

void convertDecimalToBinary(int *a, int x, int &n)
{
    int i = 0;
    int dem = 0;
    while (x != 0)
    {
        a[i] = x % 2;
        dem++;
        x /= 2;
        i++;
    }
    n = dem;
}

void showArray(int* x,int n)
{
    for (int i = n-1; i >=0; i--)
    {
        cout << x[i];
    }
}

// Driver code 
int main()
{
    int a[100];
    int x = 2, n = 0;
    cout << x << " ";
    convertDecimalToBinary(a, x, n);
    showArray(a, n);
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        x = x + 1 << i;
        cout << x << " ";
        convertDecimalToBinary(a, x, n);
        showArray(a, n);
        cout << endl;
    }
    return 0;
}