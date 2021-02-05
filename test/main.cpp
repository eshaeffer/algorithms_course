//
// Created by Elias Shaeffer on 2/3/21.
//

#include <iostream>
#include <string>
#include "sillyClass.h"

using namespace std;

int main() {
    cout << "Hello World";
    sillyClass sillyObject(5, "Hello World!");
    cout << endl;
    cout << sillyObject.getFantastic();
    cout << endl;

    int worstMath = 0;

    for(int i=0; i < 100; i++){
        worstMath += sillyObject.getNum();
    }

    cout << worstMath;
    cout << endl;

    return 0;
}