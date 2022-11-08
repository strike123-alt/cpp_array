#include<iostream>
using namespace std;
#define N 4
int main(){
    int arr[] = {25, 65, 10, 6};
    for(int i = 0; i < N; i++){
        cout << arr[i] << endl;
    }
    int x; 
    cin >> x;
    for(int i = 0; i < N; i++){
        if( x == arr[i]){
            for(int j = i; j < N; j++){
                arr[j] = arr[j+1];
            }
        }
    }
    for(int i = 0; i < N; i++){
        cout << arr[i] << endl;
    }
    int *p = arr;
    int a[N-1];
    for(int i = 0; i < N; i++, p += sizeof(a[0]))
        a[i] = *p;

    for(int i = 0; i < N-1; i++){
        cout << a[i] << endl;
    }
    cout << 'Sizeoff' << sizeof(a) << endl;
}