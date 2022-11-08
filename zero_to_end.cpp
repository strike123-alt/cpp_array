#include<iostream>
#include<vector>
using namespace std;
void naive_sol(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            for(int j = i + 1; j < n; j++){
                if(arr[j] != 0)
                    swap(arr[i], arr[j]);
            }
            n--;
        }
    }
    for(auto x: arr)
        cout << x << " ";
}
void eff_solution_v1(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        if(arr[i-1] == 0){
            swap(arr[i-1], arr[i]);
        }
    }
    for(auto x: arr)
        cout << x << " ";
}
void eff_solution_v2(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            ++count;
        }
    }   
    for(auto x: arr)
        cout << x << " ";
}
int main(){
    eff_solution_v2();
}