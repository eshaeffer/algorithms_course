//
// Created by Elias Shaeffer on 2/3/21.
//

#include "Node.h"

Node::Node(int dat) {
    data = dat;
}
Node::Node(){
    data = 0;
}
int Node::getData() const {
    return data;
}
void Node::setData(int data) {
    Node::data = data;
}
void Node::setNext(Node node) {
    next = &node;
}
Node* Node::getNext() {
    return next;
}
void Node::print(){
    cout << data;
    cout << " -> ";
    cout << endl;
}
