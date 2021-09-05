//#include<iostream>
//#include<fstream>
//using namespace std;
////struct
//struct BaiHat
//{
//	char maBH[11];
//	char tenBH[31];
//	char caSi[21];
//	int namPhatHanh, thoiLuong;
//};
////Prototype
//
////Main
//void main()
//{
//	BaiHat dsbh[100];
//	int n, ch;
//	menu();
//}
////Ham con
////Ham nhap xuat file
//void menu()
//{
//	char c = 'c';
//	cout << "\t\t-------Menu--------" << endl;
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << "\t\t\tCau " << c++ << " - " << i;
//	}
//}
//void importFile(BaiHat* dsbh, int& n)
//{
//	ifstream in;
//	const char* filename = "../input.txt";
//	in.open(filename);
//	if (in)
//	{
//		in >> n;
//		for (int i = 0; i < n; i++)
//		{
//			in >> dsbh[i].maBH >> dsbh[i].tenBH >> dsbh[i].caSi >> dsbh[i].namPhatHanh >> dsbh[i].thoiLuong;
//		}
//	}
//	else
//	{
//		system("color 04");
//		cout << "ERROR: Unable to open file!" << endl;
//	}
//	in.close();
//}
//void xuatTTBH(BaiHat x)
//{
//	cout << x.maBH << " " << x.tenBH << " " << x.caSi << " " << x.namPhatHanh << " " << x.thoiLuong << endl;
//}
////ham xuat danh sach ra ngoai man hinh
//void xuatDSBH(BaiHat* dsbh, int n)
//{
//	cout << "\t-Danh sach bai hat-" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Bai hat thu " << i << endl;
//		xuatTTBH(dsbh[i]);
//	}
//}
////Ham tinh tong thoi gian phat
//void tinhTongTGPhat(BaiHat* dsbh, int n)
//{
//	int S = 0;
//	for (int i = 0; i < n; i++)
//	{
//		S += dsbh[i].thoiLuong;
//	}
//	cout << "Tong thoi gian phat cua danh sach: " << S;
//}
////Tim thong tin cua BH theo ma X
//void timTTBHTheoMaX(BaiHat* dsbh, int n)
//{
//	char x[50];
//	int vt = -1;
//	cout << "Nhap ma BH can tim: ";
//	cin >> x;
//	for (int i = 0; i < n; i++)
//	{
//		if (strstr(dsbh[i].maBH, x) != NULL)
//		{
//			vt = i;
//		}
//	}
//	if (vt != -1)
//	{
//		cout << "Thong tin cua Bai Hat thu " << vt << endl;
//		xuatTTBH(dsbh[vt]);
//	}
//	else
//	{
//		cout << "Khong tim thay Bai Hat co ma " << x;
//	}
//}
////cau f
//void timKiemTuKhoa(BaiHat* dsbh, int n)
//{
//
//}