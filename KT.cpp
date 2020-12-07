#include<iostream>
#include<iomanip>
using namespace std;
class Phanso{
    private:
    float tuso,mauso;
    public:
    Phanso(float tuso,float mauso);
    Phanso();
    ~Phanso();
    void Nhap();
    void Xuat();
    Phanso cong(Phanso Phanso);
    Phanso operator + (Phanso Phanso);
    Phanso tru(Phanso Phanso);
    Phanso operator - (Phanso Phanso);
    Phanso nhan(Phanso Phanso);
    Phanso operator * (Phanso Phanso);
    Phanso chia(Phanso Phanso);
    Phanso operator / (Phanso Phanso);
};
Phanso::Phanso(){}
Phanso::Phanso(float tuso,float mauso){
    this->mauso = mauso;
    this->tuso = tuso;
}
Phanso::~Phanso(){}
Phanso Phanso::cong(Phanso ps){
    Phanso result(ps.tuso * mauso + ps.mauso * tuso, ps.mauso * mauso);
    return result;
}
//overloading
Phanso Phanso::operator + (Phanso ps){
    Phanso result(ps.tuso * mauso + ps.mauso * tuso, ps.mauso * mauso);
    return result;
}
Phanso Phanso::tru(Phanso ps){
    Phanso result(tuso * ps.mauso - ps.tuso* mauso, ps.mauso * mauso);
    return result;
}
//overloading
Phanso Phanso::operator - (Phanso ps){
    Phanso result(tuso * ps.mauso - ps.tuso* mauso, ps.mauso * mauso);
    return result;
}
Phanso Phanso::nhan(Phanso ps){
    Phanso result(ps.tuso * tuso, ps.mauso * mauso);
    return result;
}
//overloading
Phanso Phanso::operator * (Phanso ps){
    Phanso result(ps.tuso * tuso, ps.mauso * mauso);
    return result;
}
Phanso Phanso::chia(Phanso ps){
    Phanso result(tuso * ps.mauso,mauso * ps.tuso);
    return result;
}
//overloading
Phanso Phanso::operator / (Phanso ps){
    Phanso result(tuso * ps.mauso,mauso * ps.tuso);
    return result;
}
void Phanso::Xuat(){
    cout<<"Ket qua :"<<setprecision(2)<<float(tuso)/mauso<<endl;
}
void Phanso::Nhap(){
    cout<<"Nhap tu so : ";cin>>tuso;
    cout<<"Nhap mau so  : ";cin>>mauso;
}
int main(int argc, char const *argv[])
{   //nhap

    //cach 1
    //Phanso a(1,2);
    //Phanso b(3,5);

    //cach2
    Phanso a,b,c,d,e,f;
    a.Nhap();
    b.Nhap();
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;

    //xuat
    c.Xuat();
    d.Xuat();
    e.Xuat();
    f.Xuat();

    return 0;
}
