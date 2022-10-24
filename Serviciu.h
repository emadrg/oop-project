//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SERVICIU_H
#define OOP_SERVICIU_H


class Serviciu {
private:
    int durata;//minute
    int pret;

public:

    Serviciu(const int& durata_, const int& pret_);
    Serviciu();

    void setDurata(const int& durata_);

    void setPret(const int& pret_);



};


#endif //OOP_SERVICIU_H
