#include <iostream>
#include "Salon.h"

int main() {

    std::string variabila = "Michael the Brave B-)";
    Salon s1(variabila, 12, 10);
    s1.setAdresa(variabila);
    std::cout << s1.getAdresa();


    return 0;
}
