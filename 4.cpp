#include<iostream>
using namespace std;
struct CAUTRUC
{
    int soNguyen;
    float soThuc;
}MANG[10][20];

void nhap(CAUTRUC (&MANG)[10][20],int column,int row){
    for(int i=0;i<row;i++){
        for(int j = 0;j<column;j++){
            cout<<"MANG["<<i<<"]["<<j<<"].soNguyen = ";
            cin>>MANG[i][j].soNguyen;
            cout<<"MANG["<<i<<"]["<<j<<"].soThuc = ";
            cin>>MANG[i][j].soThuc;
        }
    }
}
void xuat(CAUTRUC MANG[10][20],int column,int row){
    for(int i=0;i<row;i++){
        for(int j = 0;j<column;j++){
            cout<<"MANG["<<i<<"]["<<j<<"].soNguyen = "<<MANG[i][j].soNguyen<<endl;
            cout<<"MANG["<<i<<"]["<<j<<"].soThuc = "<<MANG[i][j].soThuc<<endl;
        }
    }
}
void cal(CAUTRUC MANG[10][20],int column,int row,int (&ptr)[10][20]){
    for(int i=0;i<row;i++){
        for(int j = 0;j<column;j++){
            if(MANG[i][j].soThuc>0){
                ptr[i][j] = MANG[i][j].soThuc;
            }else{
                ptr[i][j] = -1;
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j = 0;j<column;j++){
            cout<<"ptr["<<i<<"]["<<j<<"] ="<<ptr[i][j]<<endl;
        }
    }
}
int sumColumn(CAUTRUC MANG[10][20],int row,int check){
    int s=0;
    for(int i=0;i<row;i++){
       s+=MANG[i][check].soNguyen;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    CAUTRUC MANG[10][20];
    int ptr[10][20],s,a,b,j;
    cout<<"Nhap Hang va Cot :";cin>>a>>b;
    nhap(MANG,a,b);
    xuat(MANG,a,b);
    cal(MANG,a,b,ptr);
    cout<<"Nhap cot 0<j<20 can tinh :";cin>>j;
    s=sumColumn(MANG,2,j);
    cout<<"Tong : s = "<<s;
    return 0;
}
