//
// Created by drgem on 23/10/2022.
//

#include "Stilist.h"
#include <iostream>
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

void Stilist::add_programare ( std::vector<int>&  programari, int &ora) {
    int nr_incercari=0;
    while((ora<0||ora>8||programari[ora]!=0)&&nr_incercari<3)
    {
        std::cout<<"introduceti alta ora: "<<std::endl;
        std::cin>>ora;
        nr_incercari++;
    }
    if(nr_incercari==3)
        std::cout<<"puteti selecta ora doar de 3 ori; incercati din nou"<<std::endl;

    programari[ora]=1;
    std::cout<<"programare efectuata"<<std::endl;


}
