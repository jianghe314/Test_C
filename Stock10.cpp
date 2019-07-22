//
// Created by zhengxuan on 2019/7/22.
//

#include "Stock10.h"
#include <iostream>
//默认构造函数
Stock10::Stock10() {
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock10::Stock10(const std::string & co,long n, double pr) {
    std::cout << "Constructor using "<< co << "called \n";
    company = co;
    if(n < 0){
        std::cout << "Number of shares cant be negative;"
        << company << " shares set to 0.0 \n";\
        shares = 0;
    } else{
        shares = n;
    }
    share_val =pr;
    set_tot();
}

Stock10::~Stock10() {
    std::cout << "Bye,"<<company <<"!\n";
}

void Stock10::buy(long num, double price) {
    if(num < 0){
        std::cout << "Number of shares purchased cant be negative."
        << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val =price;
        set_tot();
    }
}

void Stock10::sell(long num, double price) {
    using std::cout;
    if(num < 0){
        cout << "Number of shares purchased cant be negative."
                  << "Transaction is aborted.\n";
    } else if(num > shares){
        cout << "You cant sell more than you have! "
        <<"Transaction is aborted.\n";
    } else{
        shares-=num;
        share_val = price;
        set_tot();
    }
}

void Stock10::show() {
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company:" << company << " Shares :" << shares << "\n";
    cout << " Share Price:$" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << "\n";

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}