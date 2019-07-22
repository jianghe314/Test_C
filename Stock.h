//
// Created by zhengxuan on 2019/7/16.
//

#ifndef CLIONWORKSPACE_STOCK_H
#define CLIONWORKSPACE_STOCK_H

#include <string>

class Stock {

    //声明构造器
public:
    Stock(const std::string &company, long shares, double shareVal);

private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val=share_val*shares;
    }

public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};


#endif //CLIONWORKSPACE_STOCK_H
