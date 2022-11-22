//
// Created by drgem on 23/10/2022.
//

#include "Serviciu.h"
#include <iostream>


Serviciu::Serviciu( const std::string& nume_, const int& durata_, const int& pret_) {
    this->nume = nume_;
    this->durata = durata_;
    this->pret = pret_;
}

/*void Serviciu::setNumar_serviciu(const int &numar_serviciu_) {
    this->numar_serviciu=numar_serviciu_;
}

int Serviciu::getNumar_serviciu() const {
    return numar_serviciu;
}*/

/*void Serviciu::setNume(std::string &nume_) {
    this->nume=nume_;
}*/

 std::string Serviciu::getNume() {
    return nume;
}

/*void Serviciu::setDurata(const int &durata_) {
    this->durata=durata_;

}*/
 int Serviciu::getDurata() const {
    return durata;
}


/*void Serviciu::setPret(const int &pret_) {
    this->pret=pret_;

}*/

  int Serviciu::getPret() const {
    return pret;

}