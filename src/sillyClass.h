//
// Created by Elias Shaeffer on 2/3/21.
//
#include <string>
using namespace std;

#ifndef ALGORITHMS_COURSE_SILLYCLASS_H
#define ALGORITHMS_COURSE_SILLYCLASS_H


class sillyClass {
private:
    int num;
    string fantastic;
public:
    sillyClass();
    sillyClass(int number, string str);

    int getNum();
    void setNum(int number);

    string getFantastic();
    void setFantastic(string str);
};


#endif //ALGORITHMS_COURSE_SILLYCLASS_H
