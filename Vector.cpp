#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // Creating a vector:
    vector <int> v;
    cout << "Capacity: " << v.capacity() << endl;

    vector <int> a(5,1);

    vector <int> last(a);
    cout << "Print last: " << endl;
    for(int i:last){
        cout << i << " ";
    }
    cout << endl;

    // Putting values in a vector: 
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(33);
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Size: " << v.size() << endl;

    // Accessing Elements in a vector: 

    cout << "Elements at 2nd index: " << v.at(2);

    // First and Last Elements: 
    cout << "First Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;

    // Printing Element of  Vector:
    cout << "Before pop: " << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    v.pop_back();

    cout << "After pop: " << endl;
    for(int i:v){
        cout << i << " ";
    }
}