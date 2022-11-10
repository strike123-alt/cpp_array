#include<iostream>
using namespace std;
void leader_array(const int n){
    int a[n];
    bool flag = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        flag = true;
        for(int j = i + 1; j < n; j++){
            if(a[i] <= a[j]){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << a[i] << " ";
    }
    cout << a[n-1] << endl;
}
void eff_leader_array(const int n){
    int a[n];
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << a[n-1] << " ";
    int temp = a[n-1];
    for(int i = n-2; i > 0; i--){
        flag = false;
        if(temp < a[i]){
            flag = true;
            temp = a[i];
        }
        if(flag)
            cout << temp << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    eff_leader_array(n);
}