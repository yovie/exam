#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main(){
    string kata ("this subject has a submarine as a subsequence");
    regex r ("(.*)");
    cout<<regex_match(kata,r)<<endl;

    smatch m;
    regex c ("\\w(sub)(.*)");
    while(regex_search(kata,m,c)){
        for(auto x:m) cout<<x<<" ";
        cout<<m.suffix().str()<<endl;
    }
}
