#include<iostream>
#include<map>
using namespace std;

int main(){
int t;
cin>>t;
int arr[t];
map<int , int> m;

for(int i = 0;i < t;i++){
    cin>>arr[i];
}

for(int i = 0;i < t;i++){
    m[arr[i]]++;
}
for(auto i : m){
        cout<<i.first << "--" << i.second << endl;
}

}