//
// Created by zhengxuan on 2019/7/16.
//

#include "Stock.h"
#include <iostream>
void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;
    if(n < 0){
        std::cout << "Number of shares can't be negative;"
                  << "company" << "shares set to 0.\n";
        shares = 0;
    } else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::Stock(const std::string &company, long shares, double shareVal) : company(company), shares(shares),
                                                                         share_val(share_val) {
    std::cout << "Hello World!";
}


