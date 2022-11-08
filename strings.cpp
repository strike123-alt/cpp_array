#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    string s2 {"Frank"};
    string s3 {s2};
    string s4 {"Frank", 3};
    string s5 {s3, 0, 2};
    string s6 (3, 'X');
    cout << s1 << ' '  << s2 <<  ' ' << s3 << ' ' << ' ' << s4 << ' ' << s5 << ' ' << s6;
    string appName = "paresh_app";
    cout << endl;
    cout<< int('a') << endl;
    for(int a: appName){
        cout << a - int('a') << ' ';
    }
}


