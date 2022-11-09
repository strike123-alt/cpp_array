#include<iostream>
using namespace std;

void reverse(int a[], int low, int high){
    while(low < high){
        swap(a[low], a[high]);
        low++;
        high++;
    }
}
void left_rotation_by_one(){
    int n, k, temp;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
   
    while(k--){
        temp = a[0];
        for(int j = 0; j < n - 1; j++){       
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }
    for(auto x: a)
        cout << x << " ";
}

void left_rotation_by_one_space(){
    int n, k;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    int c_a[k];
    for(int i = 0; i < k; i++)
    {
        c_a[i] = a[i];
    }
    for(int i = k; i < n; i++){
        a[i-k] = a[i];       
    }
    for(int i = 0; i < k; i++){
        a[n-k+i] = c_a[i];
    }
    for(auto x: a)
        cout << x << " ";
}
// void eff_solution(){
//     int n, k;
//     cin >> n;
//     cin >> k;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i]; 
//     }
//     reverse(a, 0, k-1);
//     reverse(a, k, n-1);
//     reverse(a, 0, n-1);
//     for(auto x: a)
//         cout << x << " ";
// }

int main(){
    eff_solution();
    return 0;
}