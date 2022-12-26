#include <iostream>
#include <array>
using namespace std;

int main(){

    // Normal creation and initiatlisation
    int basic[3] = {1,2,3};

    // using STL
    array<int, 4> a = {1,23,4,5};
    
    int size = a.size();

    for(int i=0; i<size; i++){
        cout << a[i] << endl;
    }

    cout << "Element at 2nd index: " << a.at(2) << endl;
    cout << "Empty or Not " << a.empty() << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;
}