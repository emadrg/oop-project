//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SERVICIU_H
#define OOP_SERVICIU_H
#include "Stilist.h"
#include <vector>


class Serviciu {
private:
    std::string nume;
    int durata;//minute
    int pret;
    //std::vector<Stilist> Stilist_serviciu;

public:

     Serviciu( const std::string& nume_, const int& durata_, const int& pret_);

     //const std::string &getNume() const;

  // void setNumar_serviciu(const int& numar_serviciu_);
   //int getNumar_serviciu() const;

   //void setNume(std::string& nume_);
   std::string getNume();

   //void setDurata(const int& durata_);
  [[nodiscard]] int getDurata() const;

   //void setPret(const int& pret_);
   [[nodiscard]] int getPret() const;

};


#endif //OOP_SERVICIU_H
