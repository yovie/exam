#include <iostream>
#include <sstream>
#include <string>
#include <array>
using namespace std;

int main(){
    int k;
    array<string,100> s;
    cin>>k;
    for(int i=0;i<k;i++){
        getline(cin,s[i]);
    }
    for(int i=0;i<k;i++){
        stringstream ss(s[i]);
        array<string,1000> tmp;
        int q=0;
        while(ss.good()){
            ss>>tmp[q];q++;
        }
        for(int j=q-1;j>=0;j--)
            cout<<tmp[j]<<" ";
        cout<<endl;
    }
}
