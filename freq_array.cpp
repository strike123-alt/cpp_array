#include<bits/stdc++.h>
using namespace std;
void freq_array(const int n){
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int r1 = arr[0],count = 1;
    for(int i = 0; i < n; i++){
        if(r1 != arr[i+1]){
            cout << r1 << " : " << count << '\n';            
            r1 = arr[i+1];
            //cout << r1 << " ";
            count = 0;
        }
        
        count++;
    }
}

int main(){
    int n;
    cin >> n;
    unsorted_array(n);
}
