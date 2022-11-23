//
// Created by drgem on 23/10/2022.
//

#include "Stilist.h"

//Stilist::Stilist(std::string& prenume_, std::string& nume_) {
//
//    prenume=prenume_;
//    nume=nume_;
//}
Stilist::Stilist( const std::string& prenume_, const std::string& nume_): prenume(prenume_), nume(nume_){};

std::string Stilist::getNume() {
    return nume;
}
std::string Stilist::getPrenume() {
    return prenume;
}

/*void Stilist::setPrenume(const std::string &prenume_) {
    this->prenume=prenume_;

}*/

/*void Stilist::setNume(const std::string &nume_) {
    this->nume = nume_;
}*/

