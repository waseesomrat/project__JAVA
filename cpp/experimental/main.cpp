#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast;

    int t,z,x;
    cin >> t>> x;
    z = t % x ;
    cout<<z;
    return 0;
}