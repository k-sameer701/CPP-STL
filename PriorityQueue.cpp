#include <iostream>
#include <queue>
using namespace std;

int main(){

    // Max Heap:
    priority_queue <int> maxi;

    // Min - Heap:
    priority_queue<int, vector<int>, greater <int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size: " << maxi.size() << endl;

    int m = maxi.size();

    for(int i=0; i<m; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Size: " << mini.size() << endl;

    int n = mini.size();

    for(int i=0; i<n; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Khali hai kya bhai ?? " << mini.empty() << endl;
}