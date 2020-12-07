#include<iostream>
using namespace std;
class SP{
    public:
    char *ten;
    char *ID;
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
        this->soLuong = 0;
        this->donGia = 0.0;
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
    char *tenKhachHang;
    char *diaChi;
    float tongTien(){
        for(int i=0;i<soSanPham;i++){
            tongtien += sanPham[i].thanhTien;
        }
        return tongtien;
    }
    public:
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


    }
    SP *sanPham  = new SP[soSanPham];
    static int soSanPham;
    float tongtien;
};