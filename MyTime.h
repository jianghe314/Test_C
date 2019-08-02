//
// Created by CiDi-Zito on 2019/8/2.
//

#ifndef CLIONWORKSPACE_MYTIME_H
#define CLIONWORKSPACE_MYTIME_H


class MyTime {
private:
    int hours;
    int minutes;
public:
    MyTime();
    MyTime(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);
    MyTime Sum(const MyTime &t) const ;
    void Show() const ;

};


#endif //CLIONWORKSPACE_MYTIME_H
