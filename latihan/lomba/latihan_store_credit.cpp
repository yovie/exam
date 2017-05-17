#include <iostream>
#include <array>
using namespace std;

int cari(int,int,int,array<int,50>);

int main(){
    int k;
    array<int,100> c;
    array<int,100> i;
    array< array<int,50>, 100 > p;
    cin>>k;
    for(int n=0;n<k;n++){
        cin>>c[n];
        cin>>i[n];
        for(int w=0;w<i[n];w++){
            cin>>p[n][w];
        }
    }
    for(int n=0;n<k;n++){
        cari(n, c[n],i[n],p[n]);
    }
}

int cari(int k, int c, int i,array<int,50> d){
    for(int a=0;a<i;a++){
        for(int b=a+1;b<i;b++){
            if(d[a]+d[b]==c){
                cout<<"Case #"<<(k+1)<<": "<<(a+1)<<" "<<(b+1)<<endl;
                return 0;
            }
        }
    }
    return 0;
}
