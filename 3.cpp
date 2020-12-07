#include<iostream>
using namespace std;
int pow(int x,int y){
    int p=1;
    for(int i=0;i<y;i++){
        p*=x;
    }
    return p;
}
int main(int argc, char const *argv[])
{

    int a,b,n;
    float s;
    cout<<"Nhap a,b,n"<<endl;cin>>a>>b>>n;
    if( a<0 || b<0 ||n<0){
        cout<<"Error";
    }
    else{
        s=a/b;
        for(int i=1;i<=n;i++){
            s+= float(pow(-1,i) * (a+i)) / (b+i+1);
        }
        cout<<"S = "<<s;

    }
   
    return 0;
}
