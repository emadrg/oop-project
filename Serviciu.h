//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SERVICIU_H
#define OOP_SERVICIU_H
#include "Stilist.h"
#include <vector>


class Serviciu {
private:
    std::string nume;
    int durata;//minute
    int pret;

public:

     Serviciu( const std::string& nume_, const int& durata_, const int& pret_);

    [[nodiscard]] int getDurata() const;

    [[nodiscard]] int getPret() const;

    std::string getNume();

    friend std::ostream& operator<<(std::ostream& os, const Serviciu& st);


};


#endif //OOP_SERVICIU_H
