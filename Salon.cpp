//
// Created by drgem on 23/10/2022.
//

#include "Salon.h"
//#include "Stilist.h"
#include <vector>

//constructor
Salon::Salon(int id_salon_, const std::string &adresa_, int numar_strada_, std::vector<Stilist *> stilisti_) {
    this->id_salon= id_salon_;
    this->adresa = adresa_;
    this->numar_strada = numar_strada_;
    for (int i=0; i<12; i++)
        this->stilisti[i]=stilisti_[i];
}

std::string Salon::getAdresa() const {
    return this->adresa;

}

int Salon::getNumar_strada() const {
   return this->numar_strada;
}
// int Salon::getId_salon() const {
//    return this->id_salon;
//}


//
//<Stilist> Salon::getStilisti() {
//    return this->stilisti_;
//}
/*operator de copiere
Salon &Salon::operator=(const Salon &other) {
    this->adresa=other.adresa;
    this->numar_salon=other.numar_salon;
    this->numar_strada=other.numar_strada;
    return *this;
}
*/