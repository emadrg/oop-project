//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SALON_H
#define OOP_SALON_H

#include <string>
#include <vector>
#include "Stilist.h"


class Salon {
private:
    std::string adresa;

    std::vector< Stilist* > stilisti;
public:
    Salon( const std::string& adresa_,  std::vector< Stilist *> stilisti_);

    [[nodiscard]] std::string getAdresa() const;
//
//    [[nodiscard]] int getNumar_strada() const;

    [[nodiscard]] std::vector<Stilist *> getStilisti() const ;


};

#endif //OOP_SALON_H
