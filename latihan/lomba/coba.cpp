#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec(1);
    //vec.push_back(23);
    vec.assign(2,43);
    //vec[0]=112;
    //vec[2]=34;
    cout<<vec[0]<<endl;
    cout<<vec[2]<<endl;
}
