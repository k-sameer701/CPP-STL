#include <iostream>
#include <deque>
using namespace std;

int main(){
    // Declaring a Deque
    deque <int> d;

    // Adding values in a Deque
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout << i << " ";
    }

    /* d.pop_front();
    cout << endl;
    for(int i:d){
        cout << i << " ";
    }       */

    cout << endl;
    cout << "First Index Element: " << d.at(1) << endl;

    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;

    cout << "Empty or Not: " << d.empty() << endl;

    cout << "Before Erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After Erase: " << d.size() << endl;

    for (int i:d){
        cout << i << " ";
    }



}