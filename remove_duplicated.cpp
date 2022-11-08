#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {10,20,20,30,30,60,90,90,100,110,200,200};
    //int temp = arr.at(0);
    int res = 1;
    for(int i = 1; i < 12; i++){
        // if(temp < arr.at(i)){
            
        //     temp = arr.at(i);
        // }
        // else{
        //     arr.erase(arr.begin() + i);
        //     i--;
        // }
        if(arr[i] != arr[res-1])
            {
                arr[res] = arr[i];
                res++;
            }
        
    }
    for(int i = 0; i < res; i++)
        cout << arr[i] << ' ';
    return 0;
}