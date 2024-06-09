#include <bits/stdc++.h>
using namespace std;
/*
    https://codeforces.com/contest/49/problem/A
    
    Đề bài:
    Input: Cho một chuỗi là đầu vào
    Output: Kiểm tra kí tự cuối cùng của chuỗi đó:
    - Nếu là nguyên âm (A,E,I,O,U,Y,a,e,i,o,u,y) thì in ra "YES",
    - Nếu là phụ âm thì in ra "NO".
    Ví dụ:
    Input : Is it a melon?
    Output : NO
    Input: Is     it a banana ?
    Output: YES
    Chỉ tính kí tự trong 26 bảng chữ cái chứ không tính khoảng cách
    hay kí tự ?
    Hướng giải quyết bài toán:
    - Phải nhập chuỗi theo cách getline để nó không bị bỏ khoảng cách trong chuỗi
    - Lấy ra chữ cái cuối của chuỗi trừ khoảng cách trắng ' ' và '?'
    - Kiểm tra kí tự đó có phải nguyên âm không?



*/
int main() {
    //Khởi tạo một mảng tên vowels là chứa các nguyên âm 
    char  vowels [12]= {'A','E','I','O','U','Y','a','e','i','o','u','y'};
    string inp;
    getline(cin, inp); //Nhập chuỗi ko bị mất khoảng cách như cin
    int n = inp.length(); //n : độ dài chuỗi, inp : chuỗi
    bool result = false;
    char lastChar;
    //Xét từng kí tự chuỗi từ cuối chuỗi, nếu là khoảng cách ' ' hoặc '?' thì bỏ qua
    for(int i = n-1; i >=0;i--){
        if(inp[i] == ' ' || inp[i] == '?') continue; 
        lastChar=inp[i];break;//Kiếm được rồi thì gán vào biến lastChar xong dừng vòng lặp
    }
    //Kiểm tra kí tự có là nguyên âm hay không bằng cách so sánh lastChar với từng kí tự trong mảng vowels
    for(int i = 0; i < 12;i++){
        if(lastChar == vowels[i]) {result = true;break;}
    }
    //Xuất
    if(result) cout << "YES";
    else cout << "NO";
    return 0;
}