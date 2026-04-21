#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int a , b ; 
cin>>a>>b;
int arr[a];
int count = 0;
int sum = 0;
for(int i = 0 ; i < a;i++){
    cin>>arr[i];
    if(arr[i] >= b){
        sum += arr[i];
    }
    else if(arr[i] == 0){
         if(sum > 0){count++;
        sum--;
    }
    }
}
cout<<count<<endl;
}
}