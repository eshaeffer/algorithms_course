//
// Created by Elias Shaeffer on 2/4/21.
//
#include <iostream>
#include "../src/Node.h"


using namespace std;

int main() {
    Node node1(1);
    Node node2(2);
    node1.setNext(node2);

    Node node2Back = *node1.getNext();

    node2.print();
    cout << endl;
    node2Back.print();

    return 0;
}