#include <iostream>
#include <cmath> 
#include <string>
using namespace std;
int main(){
    int n,k ;
    cin >> n; cin >> k;
    while(k > 0) {
        if (n%10 != 0) n--;
        else n /= 10;
        k--;
    }
    cout << n;
    
    return 0;
}