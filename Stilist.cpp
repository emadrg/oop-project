//
// Created by drgem on 23/10/2022.
//

#include "Stilist.h"
#include <iostream>

Stilist::Stilist(const int id_stilist_, const std::string& prenume_, const std::string& nume_, std::vector<int>& programari_) {
    this->id_stilist= id_stilist_;
    this->prenume= prenume_;
    this->nume= nume_;
    for (int & j : programari_)
        this->programari.push_back(j);
}

std::string Stilist::getPrenume() {
    return prenume;
}

std::string Stilist::getNume() {
    return nume;
}

const std::vector<int> &Stilist::getProgramari() const {
    return programari;
}



//Stilist::Stilist( std::string prenume_, std::string nume_, Salon salon_) : prenume{std::move(prenume_)}, nume{std::move(nume_), salon{std::move(&salon_)}} {}
