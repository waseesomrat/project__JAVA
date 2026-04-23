#include<iostream>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
long long x , y;
cin>>x>>y;
if(y % x == 0){
    if(y / x == 2){
        cout<<"NO"<<endl;
    }
    else
      cout<<"YES"<<endl;
}
else
      cout<<"NO"<<endl;

}
return 0;
}
