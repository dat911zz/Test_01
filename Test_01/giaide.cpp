//#include<iostream>
//#include<fstream>
//using namespace std;
////Struct
//struct HoaDon
//{
//	int maHD;
//	char hoTen[51];
//	char sdt[11];
//	char ngay[11];
//	float tTien;
//};
////Prototype
//void nhapMT(int a[][100], int& n);
//void xuatMT(int a[][100], int n);
//void _nhap_xuat(int a[][100], int &n);
//void menu();
//int demPTLe(int a[][100], int n);
//int demPTChanTrenDongK(int a[][100], int n);
//int kiemTraSoChinhPhuong(int n);
//int soChinhPhuong_Min(int a[][100], int n);
//int demChuSo(int n);
//void tongCacPTKChuSo(int a[][100], int n);
//void tongCacPTCotK(int a[][100], int n);
//void importFile(HoaDon* dshd, int& n);
//void xuatTTHD(HoaDon x);
//void xuatDSHD(HoaDon* dshd, int n);
//int kiemTraNgay(HoaDon x, char* y);
//void lietKeHDNgayX(HoaDon* dshd, int n);
//void hoaDonCoTongGT_Min(HoaDon* dshd, int n);
//void xoaPTVTK(HoaDon* dshd, int& n);
//void nhapM1C_DQ(int* a, int n);
//void xuatM1C(int* a, int n);
//void xuatM1C_DQ(int* a, int n);
//void lietKePTLonHonK_DQ(int* a, int n, int k);
//int demPTLe_DQ(int* a, int n);
//void timPTNTDT_DQ(int* a, int n);
//int kiemTraSNT(int x);
//int tinhS(int* a, int n);
////Main 
//void main()
//{
//	int a[100][100];
//	int aa[100];
//	HoaDon* dshd = (HoaDon*)malloc(100 * sizeof(HoaDon));
//	int n, c;
//	do
//	{
//		system("cls");
//		menu();
//		cout << "Vui long chon cau: ";
//		cin >> c;
//		switch (c)
//		{
//		case 1:
//			_nhap_xuat(a, n);
//			break;
//		case 2:
//			_nhap_xuat(a, n);
//			cout <<"Tong so phan tu le: " << demPTLe(a, n);
//			break;
//		case 3:
//			_nhap_xuat(a, n);
//			cout << "So phan tu chan tren dong k: "<<demPTChanTrenDongK(a, n);
//			break;
//		case 4:
//			_nhap_xuat(a, n);
//			cout << "So chinh phuong nho nhat: "<<soChinhPhuong_Min(a, n);
//			break;
//		case 5:
//			_nhap_xuat(a, n);
//			tongCacPTKChuSo(a, n);
//			break;
//		case 6:
//			_nhap_xuat(a, n);
//			tongCacPTCotK(a, n);
//			break;
//		case 7:
//			importFile(dshd, n);
//			xuatDSHD(dshd, n);
//			break;
//		case 8:
//			importFile(dshd, n);
//			lietKeHDNgayX(dshd, n);
//			break;
//		case 9:
//			importFile(dshd, n);
//			hoaDonCoTongGT_Min(dshd, n);
//			break;
//		case 10:
//			importFile(dshd, n);
//			xuatDSHD(dshd, n);
//			xoaPTVTK(dshd, n);
//			cout << "\nDanh sach sau khi xoa PT vi tri k" << endl;
//			xuatDSHD(dshd, n);
//			break;
//		case 11:
//			cout << "Nhap n:"; cin >> n;
//			nhapM1C_DQ(aa, n);
//			/*xuatM1C(aa, n);*/
//			xuatM1C_DQ(aa, n);
//			break;
//		case 12:
//			int k;
//			cout << "Nhap n: "; cin >> n;
//			nhapM1C_DQ(aa, n);
//			xuatM1C_DQ(aa, n);
//			cout << "\nNhap k: "; cin >> k;
//			lietKePTLonHonK_DQ(aa, n, k);
//			break;
//		case 13:
//			cout << "Nhap n: "; cin >> n;
//			nhapM1C_DQ(aa, n);
//			xuatM1C_DQ(aa, n);
//			cout << "\nCo " << demPTLe_DQ(aa, n) << " phan tu le trong mang";
//			break;
//		case 14:
//			cout << "Nhap n: "; cin >> n;
//			nhapM1C_DQ(aa, n);
//			xuatM1C_DQ(aa, n);
//			timPTNTDT_DQ(aa, n);
//			break;
//		case 15:
//			cout << "Nhap n: "; cin >> n;
//			nhapM1C_DQ(aa, n);
//			xuatM1C_DQ(aa, n);
//			cout << "\nTong cac phan tu co 3 chu so: "<<tinhS(aa,n);
//			break;
//		default:
//			cout << "EXIT!" << endl;
//			break;
//		}
//		cout << endl;
//		system("pause");
//	} while (c >= 1 && c <= 15);
//}
////Functions
//void menu()
//{
//	cout << "\t\t    **********MENU**********" << endl;
//	for (int i = 1; i <= 15; i++)
//	{
//		cout << "\t\t\t Bai " << i << " - [" << i << "]" << endl;
//	}
//}
//void _nhap_xuat(int a[][100], int &n)
//{
//	nhapMT(a, n);
//	xuatMT(a, n);
//}
//void nhapMT(int a[][100], int &n)
//{
//	cout << "Nhap n:";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << "Nhap pt a[" << i << "][" << j << "] : ";
//			cin >> a[i][j];
//		}
//	}
//}
//void xuatMT(int a[][100], int n)
//{
//	cout << "Noi dung mang" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << "  " << a[i][j];
//		}
//		cout << endl;
//	}
//}
//int demPTLe(int a[][100], int n)
//{
//	int dem = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] % 2 != 0)
//			{
//				dem++;
//			}
//		}
//	}
//	return dem;
//}
//int demPTChanTrenDongK(int a[][100], int n)
//{
//	int k, dem = 0;
//	cout << "Nhap dong k: "; 
//	cin >> k;
//	for (int j = 0; j < n; j++)
//	{
//		if (a[k][j] % 2 == 0)
//		{
//			dem++;
//		}
//	}
//	return dem;
//}
//int soChinhPhuong_Min(int a[][100], int n)
//{
//	int min;
//	//KT So chinh phuong dau tien
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (kiemTraSoChinhPhuong(a[i][j]) == 1)
//			{
//				min = a[i][j];
//				break;
//			}
//		}
//	}
//	//Tim kiem so chinh phuong nho nhat
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (kiemTraSoChinhPhuong(a[i][j]) == 1)
//			{
//				if (a[i][j] < min)
//				{
//					min = a[i][j];
//				}
//			}
//		}
//	}
//	return min;
//}
//int kiemTraSoChinhPhuong(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (sqrt(n) == i)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//void tongCacPTKChuSo(int a[][100], int n)
//{
//	int k, S = 0;
//	cout << "Nhap k chu so: "; cin >> k;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (demChuSo(a[i][j]) == k)
//			{
//				S += a[i][j];
//			}
//		}
//	}
//	cout << "Tong cac PT co " << k << " chu so : " << S;
//}
//int demChuSo(int n)
//{
//	int dem = 0;
//	while (n!=0)
//	{
//		dem++;
//		n = n / 10;
//	}
//	return dem;
//}
//void tongCacPTCotK(int a[][100], int n)
//{
//	int S = 0, k;
//	cout << "Nhap cot k: "; cin >> k;
//	for (int i = 0; i < n; i++)
//	{
//		S += a[i][k];
//	}
//	cout << "Tong cac phan tu cot " << k << " : " << S;
//}
////Bai 2
//void importFile(HoaDon* dshd, int& n)
//{
//	ifstream in;
//	const char* filename = "..//HoaDon.txt";
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
//			in >> dshd[i].maHD >> dshd[i].hoTen >> dshd[i].sdt >> dshd[i].ngay >> dshd[i].tTien;
//		}
//	}
//	in.close();
//}
//void xuatTTHD(HoaDon x)
//{
//	cout << "Ma HD: " << x.maHD << endl;
//	cout << "Ho ten KH: " << x.hoTen << endl;
//	cout << "SDT: " << x.sdt << endl;
//	cout << "Ngay lap hoa don: " << x.ngay << endl;
//	cout << "Tong tien: " << x.tTien << " (trieu dong)" << endl;
//}
//void xuatDSHD(HoaDon* dshd, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << " Hoa don thu " << i << endl;
//		xuatTTHD(dshd[i]);
//	}
//}
//int kiemTraNgay(HoaDon x, char *y)
//{
//	if (strcmp(x.ngay, y) == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//void lietKeHDNgayX(HoaDon* dshd, int n)
//{
//	char ngay[11];
//	cout << " Nhap ngay: ";
//	cin >> ngay;
//	for (int i = 0; i < n; i++)
//	{
//		if (kiemTraNgay(dshd[i], ngay) == 1)
//		{
//			cout << "Hoa don thu " << i << endl;
//			xuatTTHD(dshd[i]);
//		}
//	}
//}
//void hoaDonCoTongGT_Min(HoaDon* dshd, int n)
//{
//	char y[11];
//	float min;
//	int imin = -1;
//	cout << " Nhap ngay: ";
//	cin >> y;
//	for (int i = 0; i < n; i++)
//	{
//		if (kiemTraNgay(dshd[i], y) == 1)
//		{
//			min = dshd[i].tTien;
//			imin = i;
//			break;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (kiemTraNgay(dshd[i], y) == 1)
//		{
//			if (dshd[i].tTien < min)
//			{
//				min = dshd[i].tTien;
//				imin = i;
//			}
//		}
//	}
//	if (imin == -1)
//	{
//		cout << "Khong tim thay Hoa don trong ngay " << y << endl;
//	}
//	else
//	{
//		cout << "Hoa don co tong gia tri nho nhat ngay " << y << endl;
//		xuatTTHD(dshd[imin]);
//	}
//}
//void xoaPTVTK(HoaDon* dshd, int &n)
//{
//	int k;
//	cout << "Nhap vi tri can xoa: ";
//	cin >> k;
//	for (int i = k + 1; i < n; i++)
//	{
//		dshd[i - 1] = dshd[i];
//	}
//	n--;
//}
////Bai 3
//void nhapM1C_DQ(int* aa, int n)
//{
//	if (n == 1)
//	{
//		cin >> aa[0];
//		return;
//	}
//	cin >> aa[n - 1];
//	return nhapM1C_DQ(aa, n - 1);
//}
//void xuatM1C(int* a, int n)
//{
//	for (int i = n-1; i >= 0; i--)
//	{
//		cout << " " << a[i];
//	}
//}
//void xuatM1C_DQ(int* a, int n)
//{
//	if (n == 1)
//	{
//		cout << " " << a[0];
//		return;
//	}
//	cout << " " << a[n - 1];
//	return xuatM1C_DQ(a, n - 1);
//}
//void lietKePTLonHonK_DQ(int* a, int n, int k)
//{
//	//Dieu Kien dung
//	if (n == 1)
//	{
//		if (a[0] > k)
//		{
//			cout << " " << a[0];
//			return;
//		}
//		return;
//	}
//	//De quy
//	if (a[n - 1] > k)
//	{
//		cout << " " << a[n - 1];
//	}
//	return lietKePTLonHonK_DQ(a, n - 1, k);
//}
//int demPTLe_DQ(int* a, int n)
//{
//	if (n == 1)
//	{
//		return a[0] % 2 != 0 ? 1 : 0;
//	}
//	return a[n - 1] % 2 != 0 ? demPTLe_DQ(a, n - 1) + 1 : demPTLe_DQ(a, n - 1);
//}
//void timPTNTDT_DQ(int* a, int n)
//{
//	//Neo
//	if (n == 1)
//	{
//		if (kiemTraSNT(a[0]) == 1)
//		{
//			cout << "\nSNT dau tien: " << a[0];
//			return;
//		}
//		cout << "\nKhong ton tai SNT trong mang" << endl;
//		return;
//	}
//	//De quy
//	if (kiemTraSNT(a[n-1]) == 1)
//	{
//		cout << "\nSNT dau tien: " << a[n-1];
//		return;
//	}
//	return timPTNTDT_DQ(a, n - 1);
//}
//int kiemTraSNT(int x)
//{
//	if (x < 2)
//	{
//		return 0;
//	}
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int tinhS(int* a, int n)
//{
//	//Neo
//	if (n == 1)
//	{
//		if (a[0] > 99 && a[0] < 1000)
//		{
//			return a[0];
//		}
//		return 0;
//	}
//	//De quy
//	if (a[n-1] > 99 && a[n-1] < 1000)
//	{
//		return tinhS(a, n - 1) + a[n - 1];
//	}
//	return tinhS(a, n - 1);
//}