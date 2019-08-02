//
// Created by CiDi-Zito on 2019/8/2.
//

#include "MyTime.h"
#include <iostream>
MyTime::MyTime() {
    hours = minutes = 0;
}
MyTime::MyTime(int h, int m) {
    hours = h;
    minutes = m;
}
void MyTime::AddMin(int m) {
    minutes += m;
    hours += minutes/60;
    minutes = minutes%60;
}

void MyTime::AddHr(int h) {
    hours += h;
}

void MyTime::Reset(int h, int m) {
    hours = h;
    minutes = m;
}
MyTime MyTime::Sum(const MyTime &t) const {
    MyTime sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours +t.hours +sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

void MyTime::Show() const {
    std::cout << hours << " hours " << minutes << " minutes ";
}