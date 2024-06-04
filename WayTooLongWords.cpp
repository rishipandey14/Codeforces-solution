#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main (){
    int n;
    cin>>n;
    vector<string> str(n);
    cin.ignore();

    for(int i = 0 ; i < n ; i++){
        getline(cin, str[i]);
    }

    for (const string& str : str) {
        int size = str.size();
        if (size > 10) {
            int cnt = size - 2;
            cout << str[0] << cnt << str[size - 1] << endl;
        } 
        else{
            cout << str << endl;
        }
    }
    return 0;
}