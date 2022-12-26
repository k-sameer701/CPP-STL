#include <iostream>
using namespace std;

int main(){

    int a, b, c;
	    
	cin >> a >> b >> c;
	    
	int x = a + b;
	int y = b + c;
	int z = a + c;

    int p = x%2;
    int q = y%2;
    int r = z%2;

    if(p==0){
        cout << "No" << endl;
    }
    else if(p!=0){
        cout << "Yes" << endl;
    }
    else if(q==0){
        cout << "No" << endl;
    }
    else if(q!=0){
        cout << "Yes" << endl;
    }
    else if(r==0){
        cout << "Yes" << endl;
    }
    else if(r!=0){
        cout << "Yes" << endl;
    }

    

}