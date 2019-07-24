#include <iostream>
#include "Stock10.h"

int main() {

//    {
//        using std::cout;
//        cout << "Using constructors to create new objects \n";
//        Stock10 stock1("NanoSmart",12,20.0);
//        stock1.show();
//
//        Stock10 stock2 = Stock10("Boffo Objects",2,2.0);
//        stock2.show();
//
//        cout<< "Assigning stock1 to stock2:\n";
//        stock2 = stock1;
//        cout << "Listing stock1 and stock2 :\n";
//        stock1.show();
//        stock2.show();
//
//        cout << "Using a constructor to reset an object \n";
//        stock1 = Stock10("Nifty Foods",10,50.0);
//        cout << "Revised stock1:\n";
//        stock1.show();
//        cout << "Done\n";
//    }
    Stock10 stock10[4] = {
            Stock10("NanoSmart",12,20.0),
            Stock10("Boffo Objects",200,2.0),
            Stock10("Monolithic Obelisks",130,3.25),
            Stock10("Fleep Enterprise",60,6.5)
    };

    std::cout << "Stock holding:\n";
    int st;
    for (int st = 0; st < 4; st++) {
        stock10[st].show();
    }
    const  Stock10 *top = &stock10[0];
    for (int st = 1; st < 4; st++) {
        top = &top->topval(stock10[st]);
        std::cout << "\nMost valuable holding:\n";
    }
    return 0;
}



