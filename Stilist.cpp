//
// Created by drgem on 23/10/2022.
//

#include "Stilist.h"

#include <utility>


Stilist::Stilist( const std::string& prenume_, const std::string& nume_, std::vector<int> programari_) {
    this->prenume= prenume_;
    this->nume= nume_;
    this->programari= std::move(programari_);
}

std::string Stilist::getPrenume() {
    return prenume;
}

std::string Stilist::getNume() {
    return nume;
}

 std::vector<int> &Stilist::getProgramari()  {
    return programari;
}

