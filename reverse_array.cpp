#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int> arr = {1, 2};
    int temp;
    for(int i = 0; i < ceil(arr.size() / 2); i++){
        temp = arr.at(i);
        arr.at(i) = arr.at(arr.size() - i - 1);
        arr.at(arr.size() - i - 1) = temp;
    }
    for(auto x: arr)
        cout << x << ' ';
}