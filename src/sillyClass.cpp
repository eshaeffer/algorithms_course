//
// Created by Elias Shaeffer on 2/3/21.
//

#include "sillyClass.h"

sillyClass::sillyClass() {
    num = 0;
    fantastic = "";
}

sillyClass::sillyClass(int number, string str) {
    num = number;
    fantastic = str;
}

int sillyClass::getNum() {
    return num;
}
void sillyClass::setNum(int number) {
    num = number;
}
string sillyClass::getFantastic() {
    return fantastic;
}
void sillyClass::setFantastic(string str) {
    fantastic = str;
}