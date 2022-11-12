#include<iostream>
using namespace std;
int max_profit(int arr[], int start, int end){
    if(end <= start)
        return 0;
    int profit = 0;
    for(int i = start; i < end; i++){
        for(int j = i+1; j <= end; j++){
            if(arr[j] > arr[i]){
                if(arr[j] > arr[i]){
                    int curr_profit = arr[j] - arr[i] + max_profit(arr, start, i-1) + 
                    max_profit(arr, j+1, end);
                    profit = max(profit, curr_profit);
                }
            }
        }
    }
    return profit;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << max_profit(a, 0, n-1) << endl;
    return 0;
}