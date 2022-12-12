//
// Created by drgem on 23/10/2022.
//

#include "Serviciu.h"
#include <ostream>


Serviciu::Serviciu( const std::string& nume_, const int& durata_, const int& pret_) {
    this->nume = nume_;
    this->durata = durata_;
    this->pret = pret_;
}

 std::string Serviciu::getNume() {
    return nume;
}

 int Serviciu::getDurata() const {
    return durata;
}

  int Serviciu::getPret() const {
    return pret;

}
    std::ostream& operator<<(std::ostream& os, const Serviciu& st) {
    os << "Nume serviciu: " << st.nume << ", Durata: " << st.durata << ", Pret: "<<st.pret<< "\n";
    return os;
}