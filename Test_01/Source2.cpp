//#include<iostream>
//#include<fstream>
//using namespace std;
//
////int CSN(int a, int q, int n)
////{
////	if (n == 1){return a;}
////	return q * CSN(a, q, n - 1);
////}
////void main()
////{
////	int q, n, a;
////	cout << "Nhap n:";cin >> n;
////	cout << "Nhap cong boi:";cin >> q;
////	cout << "Nhap so hang a:";cin >> a;
////	cout << CSN(a, q, n) << endl;
////}
//
////Struct
//struct ThiSinh
//{
//	char sbd[11];
//	char hoTen[51];
//	int namSinh;
//	char queQuan[41];
//	float diemLT, diemTH;
//};
////Prototype
//void nhapTTTS(ThiSinh& x);
//void xuatTTTS(ThiSinh x);
//int kiemTraDau_Rot(ThiSinh x);
//void _xuatKQ(ThiSinh x);
//void nhapDSTS(ThiSinh* dsts, int n);
//void xuatDSTS(ThiSinh* dsts, int n);
//void importFile(ThiSinh* dsts, int& n);
//void demSoTSDau_Rot(ThiSinh* dsts, int n);
////Main
//void main()
//{
//	ThiSinh* dsts = (ThiSinh*)malloc(100 * sizeof(ThiSinh));
//	int n;
//	importFile(dsts, n);
//	xuatDSTS(dsts, n);
//	demSoTSDau_Rot(dsts, n);
//	system("pause");
//}
////Functions
//void nhapTTTS(ThiSinh& x)
//{
//	cout << "Nhap so bao danh: ";
//	cin >> x.sbd;
//	cout << "Nhap ho ten: ";
//	cin >> x.hoTen;
//	cout << "Nhap nam sinh: ";
//	cin >> x.namSinh;
//	cout << "Nhap que quan: ";
//	cin >> x.queQuan;
//	cout << "Nhap diem LT: ";
//	cin >> x.diemLT;
//	cout << "Nhap diem TH: ";
//	cin >> x.diemTH;
//}
//void xuatTTTS(ThiSinh x)
//{
//	cout << x.sbd << " - " << x.hoTen << " - " << x.namSinh << " - " << x.queQuan << " - " << x.diemLT << " - " << x.diemTH << endl;
//}
//void nhapDSTS(ThiSinh* dsts, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		nhapTTTS(dsts[i]);
//	}
//}
//void importFile(ThiSinh* dsts, int& n)
//{
//	ifstream in;
//	const char* filename = "..//Input.txt";
//	in.open(filename);
//	
//	if (!in)
//	{
//		system("color 04");
//		cout << "Loi mo file" << endl;
//	}
//	else
//	{
//		in >> n;
//		for (int i = 0; i < n; i++)
//		{
//			in >> dsts[i].sbd >> dsts[i].hoTen >> dsts[i].namSinh >> dsts[i].queQuan >> dsts[i].diemLT >> dsts[i].diemTH;
//		}
//	}
//	in.close();
//}
//void xuatDSTS(ThiSinh* dsts, int n)
//{
//	cout << "Thong tin cac thi sinh" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Thi sinh thu " << i << endl;
//		xuatTTTS(dsts[i]);
//	}
//}
//int kiemTraDau_Rot(ThiSinh x)
//{
//	if (x.diemLT >= 5 && x.diemTH >= 5 && (x.diemLT + x.diemTH) > 12)
//		return 1;//true
//	return 0;//false
//}
//void _xuatKQ(ThiSinh x)
//{
//	if (kiemTraDau_Rot(x) == 1)
//	{
//		cout << "Dau" << endl;
//	}
//	else
//	{
//		cout << "Rot" << endl;
//	}
//}
//void demSoTSDau_Rot(ThiSinh* dsts, int n)
//{
//	int dau = 0, rot = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (kiemTraDau_Rot(dsts[i]) == 1)
//		{
//			dau++;
//		}
//		else
//		{
//			rot++;
//		}
//	}
//	cout << "So luong thi sinh dau: " << dau << endl;
//	cout << "So luong thi sinh rot: " << rot << endl;
//}