//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SERVICIU_H
#define OOP_SERVICIU_H
#include "Stilist.h"
#include <vector>
#include <iostream>


class Serviciu {
private:
    int numar_serviciu;
    std::string nume;
    int durata;//minute
    int pret;
    //std::vector<Stilist> Stilist_serviciu;

public:

     Serviciu(int numar_serviciu_, std::string nume_, const int& durata_, const int& pret_);

     //const std::string &getNume() const;

  // void setNumar_serviciu(const int& numar_serviciu_);
   //int getNumar_serviciu() const;

   //void setNume(std::string& nume_);
   std::string getNume();

   //void setDurata(const int& durata_);
   int getDurata() const;

   //void setPret(const int& pret_);
   int getPret() const;

};


#endif //OOP_SERVICIU_H
