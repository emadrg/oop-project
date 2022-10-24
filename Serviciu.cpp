//
// Created by drgem on 23/10/2022.
//

#include "Serviciu.h"

Serviciu::Serviciu(const int& durata_, const int& pret_) {
    durata=durata_;
    pret=pret_;

}

Serviciu::Serviciu() {
    this->durata = 0;
    this->pret = 12;
}


void Serviciu::setDurata(const int &durata_) {
    this->durata=durata_;

}

void Serviciu::setPret(const int &pret_) {
    this->pret=pret_;

}


