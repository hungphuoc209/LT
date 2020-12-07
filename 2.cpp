#include<iostream>
using namespace std;
class Vandongvien
{
private:
    string hoten;
    int tuoi;
    string monthidau;
    float cannang;
    float chieucao;
public:
    Vandongvien(string hoten,int tuoi,string monthidau,float cannang,float chieucao);
    Vandongvien();
    ~Vandongvien();
    friend istream &operator>>(istream &is,Vandongvien &p);
    friend ostream &operator<<(ostream &os,Vandongvien p);
    bool operator >(Vandongvien p);
};
Vandongvien::Vandongvien(string hoten,int tuoi,string monthidau,float cannang,float chieucao){
    this->hoten = hoten;
    this->cannang = cannang;
    this->chieucao = chieucao;
    this->tuoi = tuoi;
    this->monthidau = monthidau;
}
Vandongvien::Vandongvien(){}
Vandongvien::~Vandongvien(){
    this->hoten = "";
    this->cannang = 0.0;
    this->chieucao = 0.0;
    this->tuoi = 0;
    this->monthidau = "";
}
ostream &operator<<(ostream &os,Vandongvien p){
        cout<<"Ho va ten: "<<p.hoten;
        cout<<"Tuoi :"<<p.tuoi;
        cout<<"Monthidau: "<<p.monthidau;
        cout<<"Can nang: "<<p.cannang;
        cout<<"Chieu cao: "<<p.chieucao;
        return os;
}
istream &operator>>(istream &is,Vandongvien &p){
        cout<<"Nhap ten :";getline(is,p.hoten);
        cout<<"Nhap tuoi";is>>p.tuoi;
        cout<<"Nhap Mon thi dau : ";getline(is,p.monthidau);
        cout<<"Nhap chieu cao : ";is>>p.chieucao;
        cout<<"Nhap can nang: ";is>>p.cannang;
        return is;
}
bool Vandongvien::operator>(Vandongvien p){
    if(chieucao > p.chieucao) return true;
    else if(chieucao < p.chieucao) return false;
    else if(chieucao > p.chieucao){
        if(cannang == p.cannang) return true;
        else return false;
    }
    else return false;
}
void swap(Vandongvien &p1 ,Vandongvien &p2){
    Vandongvien temp;
        temp = p1;
        p1 = p2;
        p2 = temp;
}
void sort(Vandongvien p[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]>p[j]) swap(p[i],p[j]);
        }
    }
}