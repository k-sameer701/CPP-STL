#include <iostream>
#include <map>
using namespace std;

int main(){
    // Declaration:
    map <int, string> n;

    n[1] = "Babbar";
    n[2] = "love";
    n[13] = "kumar";

    for(auto i:n){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "Finding 13: " << n.count(-13) << endl;

    // n erase:
    cout << "After erase: " << endl;
    for (auto i:n){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl << endl;

    auto it = n.find(5);

    for(auto i=it; i !=n.end(); i++){
        cout << (*i).first << endl;
    }
}