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
    int id_salon;
    std::string adresa;
    int numar_strada;
    std::vector< Stilist* > stilisti;
public:
    Salon(int id_salon, const std::string& adresa_, int numar_strada_, std::vector< Stilist *> stilisti_);

    [[nodiscard]] std::string getAdresa() const;

    [[nodiscard]] int getNumar_strada() const;

    [[nodiscard]] std::vector<Stilist *> getStilisti() const ;


};

#endif //OOP_SALON_H
