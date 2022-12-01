//
// Created by drgem on 23/10/2022.
//

#include "Stilist.h"
#include <vector>

Stilist::Stilist( const std::string& prenume_, const std::string& nume_) {
    this->prenume= prenume_;
    this->nume= nume_;
}

std::string Stilist::getPrenume() {
    return prenume;
}

std::string Stilist::getNume() {
    return nume;
}
//Stilist::Stilist( std::string prenume_, std::string nume_, Salon salon_) : prenume{std::move(prenume_)}, nume{std::move(nume_), salon{std::move(&salon_)}} {}
