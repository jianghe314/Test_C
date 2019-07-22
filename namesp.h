//
// Created by zhengxuan on 2019/7/11.
//

#ifndef CLIONWORKSPACE_NAMESP_H
#define CLIONWORKSPACE_NAMESP_H

#endif //CLIONWORKSPACE_NAMESP_H

#include <string>
namespace pers{
    struct Person{
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}
namespace debts{
    using namespace pers;
    struct  Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[],int n){
        double total = 0;
        for (int i = 0; i < n; ++i) {
            total += ar[i].amount;
        }
        return total;
    }
}