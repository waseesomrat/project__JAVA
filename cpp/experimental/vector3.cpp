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

    for(auto i:vct){
        cout<<i<<endl;
    }

}