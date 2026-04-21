#include<iostream>

using namespace std;

int main() {
int t;
cin>>t;
int sum1 = 0,sum2 = 0;
int arr[t];
for(int i = 0;i < t;i++){
    cin>>arr[i];
}
for(int i = 0 ; i < t - 1 ;i++){
    for(int j = 0;j < t - i -1;j++){
        if(arr[j] < arr[j+ 1]){
        int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            
    }
}

}
for(int i = 0;i < t;i++){
    sum1 += arr[i];
}


for(int i = 0;i < t;i+=2){
    sum2 += arr[i];
}
cout<<sum2<<" "<<sum1 - sum2;

}