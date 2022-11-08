#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {96, 7, 8 ,6, 9};
    bool flag = true;
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "Is Sorted" << endl;
    else
        cout << 'Is not Sorted' << endl;
}