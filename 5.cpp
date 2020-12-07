#include<iostream>
using namespace std;
class SP{
    public:
    char *ten = new char[50];
    char *ID = new char [10];
    float thanhTien;
    SP(char *ten,char *ID,float donGia,int soLuong){
        this->ten = ten;
        this->ID = ID;
        this->soLuong = soLuong;
        this->donGia = donGia;
    }
    SP(){};
    ~SP(){
        delete[] ten;
        delete[] ID;
        soLuong = 0;
        donGia = 0.0;
        thanhTien = 0.0;
    }
    void Nhap(){
        cout<<"TenSP : ";
        cin.getline(ten,50);
        cout<<"ID";
        cin.getline(ID,10);
        cout<<"So luong: ";
        cin>>soLuong;
        cout<<"Don gia: "
        cin>>donGia;
    }
    void Xuat(){
        cout<<ten<<endl;
        cout<<ID<<endl;
        cout<<soLuong<<endl;
        cout<<tinhThanhTien()<<endl;
    }
    
    private:
    float donGia;
    int soLuong;
    float tinhThanhTien(){
        thanhTien = donGia*soLuong;
        return thanhTien;
    }
};
class HoaDon{
    private:
    char *tenKhachHang = new char[50];
    char *diaChi = new char[100];
    float tongTien(){
        //cai soSanPham bi buoi
        for(int i=0;i<soSanPham;i++){
            tongtien += sanPham[i].thanhTien;
        }
        return tongtien;
    }
    public:
    static int soSanPham;
    float tongtien;
    SP *sanPham = new SP[2];
    
    HoaDon(char* tenKhachhang,char* diaChi,SP *sanPham){
        this->tenKhachHang = tenKhachHang;
        this->diaChi = diaChi;
        this->sanPham = sanPham;
    };
    HoaDon(){};
    ~HoaDon(){
        delete[] tenKhachHang;
        delete[] diaChi;
        delete[] sanPham;
        tongtien = 0.0;
    }
    void Nhap(){
        cout<<"TenKH :";
        cin.getline(tenKhachHang,50);
        cout<<"Dia chi:";
        cin.getline(diaChi,100);
        //doan ni lam tam bay
        for(int i=0;i<soSanPham;i++){
            sanPham[i].Nhap();
        }
    }
    void Xuat(){
        cout<<tenKhachHang;
        cout<<diaChi;
        cout<<tongTien();
    }
};
int main(int argc, char const *argv[])
{  
    HoaDon hd;
    hd.Nhap();
    hd.Xuat();
    return 0;
}
