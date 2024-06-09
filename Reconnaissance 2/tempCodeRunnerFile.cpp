#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> inp(n);
    for (int i = 0; i < inp.size(); i++) {
        cin >> inp[i];
    }
    vector<int> min = {inp[0], inp[n-1]};
    vector<int> result = {0, 4};
    for (int i = 0; i < n - 1; i++) {
        if (abs(inp[i + 1] - inp[i]) < abs(min[0] - min[1])) {
            min[0] = inp[i + 1];
            min[1] = inp[i];
            result[0] = i;
            result[1] = i + 1;
        }
    }
    cout << result[1]+1<< endl;
    cout << result[0]+1;
