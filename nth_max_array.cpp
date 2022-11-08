#include<iostream>
#include<iterator>
#include<vector>
#include<queue>
using namespace std;


int main(){
    vector<int> array = {1, 2, 3, 5, 9, 7, 8, 6, 11, 10};
    priority_queue< int, vector<int>, greater<int> > queue, copy_queue;
    
    for(auto a: array){
        queue.push(a);
        copy_queue.push(a);
    }
    int k;
    cout << "Enter k-place smallest element to be find: ";
    cin >> k;
    for(int i = 0; !queue.empty() && i < k-1; i++){
            queue.pop();
    }
    if(queue.empty())
        cout << "Out-Of-Bounded";
    else
        cout << queue.top() << ' ' << endl;
    
    for(int i = 0; !copy_queue.empty(); i++){
        cout  << copy_queue.top() << "  ";
        copy_queue.pop();
    }
    queue = {};
    queue = {};
    
    return 0;   
}