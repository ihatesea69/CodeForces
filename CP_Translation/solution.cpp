#include <iostream>
using namespace std;
int main() {
    string inp1,inp2;
    cin >> inp1;
    cin >> inp2;
    int n =  inp1.length();
    bool result = false;
    for(int i = 0 ; i < n;i++){
         if(inp1[n-i-1] == inp2[i])
           result = true;
        else {result = false; break;}
    }
 if(result) cout<<"YES";
 else cout<< "NO";
    return 0;
}