//
// Created by zhengxuan on 2019/7/22.
//

#ifndef CLIONWORKSPACE_STOCK10_H
#define CLIONWORKSPACE_STOCK10_H

#include <string>

class Stock10 {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val=share_val*shares;
    }

public:
    Stock10();  //Z定义默认构造方法
    Stock10(const std::string & co,long n= 0, double pr = 0.0);
    ~Stock10();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();

};


#endif //CLIONWORKSPACE_STOCK10_H
