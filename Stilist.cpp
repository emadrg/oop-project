//
// Created by drgem on 23/10/2022.
//

#include "Stilist.h"

//Stilist::Stilist(std::string& prenume_, std::string& nume_) {
//
//    prenume=prenume_;
//    nume=nume_;
Stilist::Stilist( std::string prenume_, std::string nume_) : prenume{std::move(prenume_)}, nume{std::move(nume_)} {}
//Stilist::Stilist( std::string& prenume_, std::string& nume_) : prenume{prenume_}, nume{nume_} {}

std::string Stilist::getPrenume() {
    return prenume;
}

std::string Stilist::getNume() {
    return nume;
}


/*void Stilist::setPrenume(const std::string &prenume_) {
    this->prenume=prenume_;

}*/

/*void Stilist::setNume(const std::string &nume_) {
    this->nume = nume_;
}*/

