#include<bits/stdc++.h>
using namespace std;
int index(string ss, string subb){
    if (subb.empty())
        return -1;
    int n = ss.length();
    int m = subb.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (ss[i + j] != subb[j]) {
                break; 
            }
        }
        if (j == m) {
            return i;  
        }
    }
    return -1;
}
int main(){
    cout << "Enter string: ";
    string s;
getline(cin, s);      

cout << "Enter substring: ";
string sub;
getline(cin, sub);    
    int answer = index(s, sub);
    if (answer == -1) {
        cout << "Index not found";
    } else {
        cout << "Answer at index " << answer;
    }
    return 0;
}
