//
// Created by drgem on 23/10/2022.
//

#include "Salon.h"

//constructor
Salon::Salon(const std::string &adresa_, int numar_strada_) {
    this->adresa = adresa_;
    this->numar_strada = numar_strada_;
}

//void Salon::setAdresa(const std::string& Adresa){
//    this->adresa= Adresa;
//}
std::string Salon::getAdresa() const {
    return this->adresa;

}
//void Salon::setNumar_strada(const int numar_strada_){
  //  this->numar_strada= numar_strada_;
//}

int Salon::getNumar_strada() const {
   return this->numar_strada;
}

//void Salon::setNumar_salon(const int numar_salon_) {
//    this->numar_salon= numar_salon_;
//}

//int Salon::getNumar_salon() const {
//    return this->numar_salon;
//}

//destructor
//Salon::~Salon()

/*operator de copiere
Salon &Salon::operator=(const Salon &other) {
    this->adresa=other.adresa;
    this->numar_salon=other.numar_salon;
    this->numar_strada=other.numar_strada;
    return *this;
}
*/