#include <iostream>
using namespace std;

int main(){
    int n;int angka[10];
    cin>>n;
    for(int i=0;i<n;i++)
        //scanf("%d",angka[i]);
        cin>>angka[i];
    for(int i=0;i<n;i++)
        cout<<angka[i]<<endl;
}
