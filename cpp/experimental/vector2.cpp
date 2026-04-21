#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int>vct(n);
    for(int i = 0;i < n;i++){
        cin>>vct[i];
    }
      for(int i = n-1;i > 0;i--){
        cout<<vct[i]<<endl;
    }


}