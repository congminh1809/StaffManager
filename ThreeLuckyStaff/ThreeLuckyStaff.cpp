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
	fflush(stdin);
	cout << endl << " Nhap ho ten: ";
	getline(cin, hoten);

	fflush(stdin);
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

	cout << endl << "Nhap so gio lam viec: ";
	cin >> so_h_sua;

	fflush(stdin);
}

// hàm xuất thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: ";
	if (gioi_tinh == 1)
	{
		cout << endl << " Nam";
	}
	if (gioi_tinh == 2)
	{
		cout << endl << " Nu";
	}
	if (gioi_tinh == 3)
	{
		cout << endl << " Khac";
	}
	else
	{
		cout << endl << " DCMM";
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

	cout << endl << "Nhap so hang da giao: ";
	cin >> so_hang_giao;
}

// hàm xuất thông tin nhân viên giao hàng
void NhanVienGiaoHang::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: " << gioi_tinh;
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

	cout << endl << "Nhap so km da chay: ";
	cin >> so_km;
}

// hàm xuất thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: " << gioi_tinh;
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

int main()
{
	// tạo ra 3 đối tượng giá trị 
	NhanVienSuaOngNuoc nv_suaongnuoc;
	NhanVienGiaoHang nv_giaohang;
	NhanVienXeOmCongNghe nv_xeomcn;

	cout << endl << " NHAP THONG TIN NHAN VIEN SUA ONG NUOC ";
	nv_suaongnuoc.Nhap();

	cout << endl << " THONG TIN NHAN VIEN SUA ONG NUOC ";
	nv_suaongnuoc.Xuat();
	cout << endl << " LUONG: " << nv_suaongnuoc.Tinh_Tien_Luong();

	cout << endl << " NHAP THONG TIN NHAN VIEN GIAO HANG ";
	nv_giaohang.Nhap();

	cout << endl << " THONG TIN NHAN VIEN GIAO HANG ";
	nv_giaohang.Xuat();
	cout << endl << " LUONG: " << nv_giaohang.Tinh_Tien_Luong();

	cout << endl << " NHAP THONG TIN NHAN VIEN XE OM CONG NGHE ";
	nv_xeomcn.Nhap();

	cout << endl << " THONG TIN NHAN VIEN XE OM CONG NGHE ";
	nv_xeomcn.Xuat();
	cout << endl << " LUONG:" << nv_xeomcn.Tinh_Tien_Luong();

	cout << endl << " THONG TIN NHAN VIEN SUA ONG NUOC ";
	nv_suaongnuoc.Xuat();
	cout << endl << " LUONG: " << nv_suaongnuoc.Tinh_Tien_Luong();

	cout << endl << " THONG TIN NHAN VIEN GIAO HANG ";
	nv_giaohang.Xuat();
	cout << endl << " LUONG: " << nv_giaohang.Tinh_Tien_Luong();

	cout << endl << " THONG TIN NHAN VIEN XE OM CONG NGHE ";
	nv_xeomcn.Xuat();
	cout << endl << " LUONG:" << nv_xeomcn.Tinh_Tien_Luong();

	system("pause");
	return 0;
}
