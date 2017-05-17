#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(){
    array<int,5> data = {1,7,3,9,5};
    if(all_of(data.begin(),data.end(),[](int a){return a%2;}))
        cout<<"all number is odd"<<endl;
}
