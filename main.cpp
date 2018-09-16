#include <iostream>
#include "List.h"

using namespace std;

int main() {

    std::cout << "Hello, World!" << std::endl;

    List LList ;

    LList.InsertAtEnd(1);
    LList.InsertAtEnd(2);
    LList.InsertAtEnd(3);
    LList.InsertAtEnd(4);

    cout<< LList.Sum();

    return 0;
}