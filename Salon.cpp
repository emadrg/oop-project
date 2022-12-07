//
// Created by drgem on 23/10/2022.
//

#include "Salon.h"
#include <vector>

//constructor
Salon::Salon(const std::string &adresa_, std::vector<Stilist *> stilisti_) {
    this->adresa = adresa_;
    this->stilisti=std::move(stilisti_);

}

//std::string Salon::getAdresa() const {
//    return this->adresa;
//
//}
//
//int Salon::getNumar_strada() const {
//   return this->numar_strada;
//}

std::vector<Stilist *> Salon::getStilisti() const {
    return this->stilisti;
}

/*operator de copiere
Salon &Salon::operator=(const Salon &other) {
    this->adresa=other.adresa;
    this->numar_salon=other.numar_salon;
    this->numar_strada=other.numar_strada;
    return *this;
}
*/