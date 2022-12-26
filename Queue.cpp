#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Declaration:
    queue <string> q;

    //Putting Element:
    q.push("Love");
    q.push("Babbar");
    q.push("kumar");

    cout << "Before pop: " << q.size() << endl;

    cout << "First Element: " << q.front() << endl;
    q.pop();

    cout << "First Element: " << q.front() << endl;

    cout << "Size after pop: " << q.size() << endl;

}