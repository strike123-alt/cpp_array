#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> array={10, 5, 7, 9, 24, 65, 10, 6, 16, 26};
    int res = -1, largest = 0;
    for(int i = 1; i < array.size(); i++){
        if(array[i] > array[largest])
        {
            res = largest;
            largest = i;
        }
        
        else if (array[i] != array[largest]){
            if(res == -1 || array[i] > array[res])
            {
                res = i;
            }
        }
        
    }
    if (res == -1) return -1;
    cout << "Second Largest Element is: " << array[res] << '\n' << "Largest Element is: " << array[largest];
    return 0;
}