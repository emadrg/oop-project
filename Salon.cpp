//
// Created by drgem on 23/10/2022.
//

#include "Salon.h"
#include <vector>
#include <iostream>

Salon::Salon(const std::string &adresa_, std::vector<Stilist *> stilisti_) {
    this->adresa = adresa_;
    this->stilisti=std::move(stilisti_);

}

std::string Salon::getAdresa() const {
    return this->adresa;

}

std::vector<Stilist *> Salon::getStilisti() const {
    return this->stilisti;
}

void Salon::afis (const std::vector<Stilist *>& vect) {
    for (int i = 0; i < 3; ++i)
        std::cout << i + 1 << ". " << vect[i]->getNume() << " " << vect[i]->getPrenume() << std::endl;
}
