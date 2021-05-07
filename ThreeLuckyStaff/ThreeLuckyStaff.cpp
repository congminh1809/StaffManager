#include<iostream>
using namespace std;
#include<string>

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC =======*/
class NhanVienSuaOngNuoc
{
private:
	string hoten;
	int tuoi;
	int gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_h_sua;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienSuaOngNuoc();
	~NhanVienSuaOngNuoc();
};

// hàm nhập thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Nhap()
{
	cin.ignore();
	cout << endl << " Nhap ho ten: ";
	getline(cin, hoten);

	cout << endl << " Nhap dia chi: ";
	getline(cin, dia_chi);

	cout << endl << " Nhap so dien thoai: ";
	getline(cin, sdt);

	cout << endl << " Nhap gioi tinh(1: Nam,2: Nu,3: Khac): ";
	cin>>gioi_tinh;

	cout << endl << " Nhap tuoi: ";
	cin >> tuoi;
	
	cout << endl << " Nhap chieu cao(cm): ";
	cin >> chieu_cao;

	cout << endl << " Nhap can nang(kg):";
	cin >> can_nang;

	cout << endl << " Nhap so gio lam viec: ";
	cin >> so_h_sua;

}

// hàm xuất thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: ";
	if (gioi_tinh == 1)
	{
		cout << " Nam";
	}
	if (gioi_tinh == 2)
	{
		cout << " Nu";
	}
	if (gioi_tinh == 3)
	{
		cout << " Khac";
	}

	cout << endl << " Dia chi: " << dia_chi;
	cout << endl << " So dien thoai: " << sdt;
	cout << endl << " Chieu cao: " << chieu_cao;
	cout << endl << " Can nang: " << can_nang;
}

// hàm tính tiền lương nhân viên sửa ống nước
float NhanVienSuaOngNuoc::Tinh_Tien_Luong()
{
	return so_h_sua * 50000;
}
// hàm tạo
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
{

}
// hàm hủy
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
{

}

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN GIAO HÀNG =======*/
class NhanVienGiaoHang
{
private:
	string hoten;
	int tuoi;
	int gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_hang_giao;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienGiaoHang();
	~NhanVienGiaoHang();
};

// hàm nhập thông tin nhân viên giao hàng
void NhanVienGiaoHang::Nhap()
{
	fflush(stdin);
	cin.ignore();
	cout << endl << " Nhap ho ten: ";
	getline(cin, hoten);

	fflush(stdin);
	cout << endl << " Nhap dia chi: ";
	getline(cin, dia_chi);

	cout << endl << " Nhap so dien thoai: ";
	getline(cin, sdt);

	cout << endl << " Nhap gioi tinh(1: Nam,2: Nu,3: Khac): ";
	cin >> gioi_tinh;

	cout << endl << " Nhap tuoi: ";
	cin >> tuoi;

	cout << endl << " Nhap chieu cao(cm): ";
	cin >> chieu_cao;

	cout << endl << " Nhap can nang(kg):";
	cin >> can_nang;

	cout << endl << " Nhap so hang da giao: ";
	cin >> so_hang_giao;
}

// hàm xuất thông tin nhân viên giao hàng
void NhanVienGiaoHang::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: ";
	if (gioi_tinh == 1)
	{
		cout << " Nam";
	}
	if (gioi_tinh == 2)
	{
		cout << " Nu";
	}
	if (gioi_tinh == 3)
	{
		cout << " Khac";
	}

	cout << endl << " Dia chi: " << dia_chi;
	cout << endl << " So dien thoai: " << sdt;
	cout << endl << " Chieu cao: " << chieu_cao;
	cout << endl << " Can nang: " << can_nang;
}

// hàm tính tiền lương nhân viên giao hàng
float NhanVienGiaoHang::Tinh_Tien_Luong()
{
	return so_hang_giao * 33500;
}
// hàm tạo
NhanVienGiaoHang::NhanVienGiaoHang()
{

}
// hàm hủy
NhanVienGiaoHang::~NhanVienGiaoHang()
{

}

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN XE ÔM 4.0 =======*/
class NhanVienXeOmCongNghe
{
private:
	string hoten;
	int tuoi;
	int gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_km;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienXeOmCongNghe();
	~NhanVienXeOmCongNghe();
};

// hàm nhập thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Nhap()
{
	fflush(stdin);
	cin.ignore();
	cout << endl << " Nhap ho ten: ";
	getline(cin, hoten);

	fflush(stdin);
	cout << endl << " Nhap dia chi: ";
	getline(cin, dia_chi);

	cout << endl << " Nhap so dien thoai: ";
	getline(cin, sdt);

	cout << endl << " Nhap gioi tinh(1: Nam,2: Nu,3: Khac): ";
	cin >> gioi_tinh;

	cout << endl << " Nhap tuoi: ";
	cin >> tuoi;

	cout << endl << " Nhap chieu cao(cm): ";
	cin >> chieu_cao;

	cout << endl << " Nhap can nang(kg):";
	cin >> can_nang;

	cout << endl << " Nhap so km da chay: ";
	cin >> so_km;
}

// hàm xuất thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: ";
	if (gioi_tinh == 1)
	{
		cout << " Nam";
	}
	if (gioi_tinh == 2)
	{
		cout << " Nu";
	}
	if (gioi_tinh == 3)
	{
		cout << " Khac";
	}
	
	cout << endl << " Dia chi: " << dia_chi;
	cout << endl << " So dien thoai: " << sdt;
	cout << endl << " Chieu cao: " << chieu_cao;
	cout << endl << " Can nang: " << can_nang;
}

// hàm tính tiền lương nhân viên xe ôm
float NhanVienXeOmCongNghe::Tinh_Tien_Luong()
{
	return so_km * 10000;
}
// hàm tạo
NhanVienXeOmCongNghe::NhanVienXeOmCongNghe()
{

}
// hàm hủy
NhanVienXeOmCongNghe::~NhanVienXeOmCongNghe()
{

}

// thiết kế menu xử lý
void Menu(NhanVienSuaOngNuoc ds_nv_suaongnuoc[], NhanVienGiaoHang ds_nv_giaohang[], NhanVienXeOmCongNghe ds_nv_xeomcn[], int n, int m, int l)
{
	int luachon;
	while(true)
	{
		system("cls");
		cout << endl << "=============CHUONG TRINH QUAN LY=============";
		cout << endl << "1. NHAP THONG TIN NHAN VIEN SUA ONG NUOC";
		cout << endl << "2. NHAP THONG TIN NHAN VIEN GIAO HANG";
		cout << endl << "3. NHAP THONG TIN NHAN VIEN XE OM CONG NGHE";
		cout << endl << "4. XUAT DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC";
		cout << endl << "5. XUAT DANH SACH THONG TIN NHAN VIEN GIAO HANG";
		cout << endl << "6. XUAT DANH SACH THONG TIN NHAN VIEN XE OM CONG NGHE";
		cout << endl << "0. KET THUC";
		cout << endl << "=====================ENDL=====================";
		cout << endl << "NHAP LUA CHON: ";
		cin >> luachon;
		if (luachon<0||luachon>6)
		{
			cout << "LUA CHON KHONG TON TAI, NHAP LAI: ";
		}
		else if (luachon == 1)
		{
			NhanVienSuaOngNuoc nv_suaongnuoc;
			cout << endl << "NHAP THONG TIN NHAN VIEN SUA ONG NUOC";
			nv_suaongnuoc.Nhap();
			// thêm đối tượng giá trị vào danh sách
			ds_nv_suaongnuoc[n] = nv_suaongnuoc;
			n++;
		}
		else if (luachon == 2)
		{
			NhanVienGiaoHang nv_giaohang;
			cout << endl << "NHAP THONG TIN NHAN VIEN GIAO HANG";
			nv_giaohang.Nhap();
			// thêm đối tượng giá trị vào danh sách
			ds_nv_giaohang[m] = nv_giaohang;
			m++;
		}
		else if (luachon == 3)
		{
			NhanVienXeOmCongNghe nv_xeomcn;
			cout << endl << "NHAP THONG TIN NHAN VIEN XE OM CONG NGHE";
			nv_xeomcn.Nhap();
			// thêm đối tượng giá trị vào danh sách
			ds_nv_xeomcn[l] = nv_xeomcn;
			l++;
		}
		else if (luachon == 4)
		{
			cout << endl << "DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC";
			for (int i = 0; i < n; i++)
			{
				cout << endl << "THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1 << ": ";
				ds_nv_suaongnuoc[i].Xuat();
			}
			system("pause");
		}
		else if (luachon == 5)
		{
			cout << endl << "DANH SACH THONG TIN NHAN VIEN GIAO HANG";
			for (int i = 0; i < m; i++)
			{
				cout << endl << "THONG TIN NHAN VIEN GIAO HANG THU " << i + 1 << ": ";
				ds_nv_giaohang[i].Xuat();
			}
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << endl << "DANH SACH THONG TIN NHAN VIEN XE OM CONG NGHE";
			for (int i = 0; i < l; i++)
			{
				cout << endl << "THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1 << ": ";
				ds_nv_xeomcn[i].Xuat();
			}
			system("pause");
		}
		else if (luachon == 0)
		{
			break;
		}
		
	}
}
int main()
{
	// tạo ra 3 đối tượng giá trị
	// Mảng 1 chiều để quản lý các nhân viên
	NhanVienSuaOngNuoc ds_nv_suaongnuoc[100];
	NhanVienGiaoHang ds_nv_giaohang[100];
	NhanVienXeOmCongNghe ds_nv_xeomcn[100];

	int n, m, l;
	n = 0; //nhân viên sủa ống nước
	m = 0; //nhân viên giao hàng
	l = 0; //nhân viên xe ôm

	Menu(ds_nv_suaongnuoc, ds_nv_giaohang, ds_nv_xeomcn, n, m, l);

	system("pause");
	return 0;
}
