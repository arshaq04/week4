#include <iostream>
#include <string>
using namespace std;


int main(){
    int x, y, z;
    cout << "Enter three integers: " << endl;
    cin >> x >> y >> z;
    
    if (x < y && y < z)
    cout << "In order" << endl;
     else {
        cout << "Not in order" << endl;
     }
return 0;
}



