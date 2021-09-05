//#include<iostream>
//using namespace std;
//void timDayConGiamDaiNhat(int* a, int n);
//void timDayConGiamDaiNhat_1(int* a, int n);
//void main()
//{
//	int a[100] = { 1,3,2,1,5,4,1,2,3 };
//	int n = 9;
//	timDayConGiamDaiNhat(a, n);
//	cout << endl;
//	system("pause");
//}
//void timDayConGiamDaiNhat(int* a, int n)
//{
//	int vt = 0, len = 1, lenmax = 1, vtmax = 0;
//	//-------------------------------------------------
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] > a[i + 1])
//		{
//			len++;
//		}
//		else
//		{
//			if (len > lenmax)
//			{
//				lenmax = len;
//				vtmax = vt;
//			}
//			vt = i + 1;
//			len = 1;
//		}
//		
//	}
//	cout << endl;
//	for (int i = vtmax; i <= vtmax+lenmax-1; i++)
//	{
//		cout << " " << a[i];
//	}
//}
//void timDayConGiamDaiNhat_1(int* a, int n)//Quy hoach dong dang hoan chinh
//{
//	// Chu thich: pos = position (vi tri)
//	int startpos = 0, startpos_max = 0;//Vi tri dau, Vi tri dau max
//	int endpos = 0, endpos_max = 0;//Vi tri cuoi, Vi tri cuoi max
//	int lenght = 1, length_max = 1;//Do dai, do dai max
//
//	for (int i = startpos; i < n; i++)
//	{
//		if (a[i] > a[i + 1])
//		{
//			endpos++;
//			lenght++;
//		}
//		if (a[i] < a[i + 1])
//		{
//			if (lenght > length_max)
//			{
//				startpos_max = startpos;
//				endpos_max = endpos;
//				lenght = length_max;
//			}
//			startpos = endpos++;
//			endpos = startpos;
//			lenght = 1;
//		}
//	}
//	printf("\n");
//	for (int i = startpos_max; i < endpos_max; i++)
//	{
//		printf("%4d", a[i]);
//	}
//}