#include <iostream>
#include "Stock10.h"
#include "MyTime.h"

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

//    enum class egg {S,M,L};
//    egg choice = egg ::S;
//    std::cout << "这是枚举:" << int(choice);
    using std::cout;
    using std::endl;
    MyTime planning;
    MyTime coding(2,40);
    MyTime fixing(5,55);
    MyTime total;

    cout << "Planning time = ";
    planning.Show();
    cout << endl;

    cout << "Coding time = ";
    coding.Show();
    cout << endl;

    cout << "Fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "Total time = ";
    total.Show();
    cout << endl;

    return 0;
}



