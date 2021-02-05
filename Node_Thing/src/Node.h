//
// Created by Elias Shaeffer on 2/3/21.
//
#include <iostream>
using namespace std;

#ifndef ALGORITHMS_COURSE_NODE_H
#define ALGORITHMS_COURSE_NODE_H


class Node {
private:
    int data;
    Node* next;
public:
    Node();
    explicit Node(int dat);

    int getData() const;
    void setData(int data);

    void setNext(Node node);

    Node* getNext();

    void print();
};


#endif //ALGORITHMS_COURSE_NODE_H
