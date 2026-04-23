#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>vct(n);

    for(int i = 0; i < n; i++){
        cin>>vct[i];
    }
    vct.resize(3);
    for(auto i:vct){
        cout<<i<<endl;
    }
        cout<<vct.size()<<endl;
    vct.resize(100);
    cout<<vct.size()<<endl;

}