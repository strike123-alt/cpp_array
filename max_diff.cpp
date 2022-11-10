#include<iostream>
using namespace std;

void max_diff(const int n){
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int diff = a[1] - a[0];
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j]-a[i] > diff){
                diff = a[j] - a[i];
                break;
            }
        }
    }
    cout << diff << " ";
}
void eff_max_diff(const int n){
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int diff = a[1] - a[0];
    int mini = a[0];
    for(int i = 1; i < n; i++){
        diff = max(diff, a[i] - 5
        mini);
        mini = min(mini, a[i]);
    }
    cout << diff << " ";
}
int main(){
    int n;
    cin >> n;
    max_diff(n);
    return 0;
}