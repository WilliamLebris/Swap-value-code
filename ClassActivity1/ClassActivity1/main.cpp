//
//  main.cpp
//  ClassActivity1
//
//  Created by William Tissi on 1/22/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, z;
    cout << "This program prompt you to enter 2 number one after the other and swap those number"<< endl;
    cout << "Enter the first number : "<< endl;
    cin >> a;
    cout << "Enter the second number : "<< endl;
    cin >> b;
    
    z=b;
    b = a;
    a = z;
    
    cout << "Now the first number is "<< a << " and the second number is "<< b<< endl;
    cout << "They were swaped "<< endl;
    
    return 0;
}
