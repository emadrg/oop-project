//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_STILIST_H
#define OOP_STILIST_H
#include <string>

class Stilist {
private:
    std::string prenume;
    std::string nume;

public:
    Stilist (int k=0, int l=0) {
        nume=k;
        prenume=l;
    }

    Stilist(const std::string& prenume_, const std::string& nume_);

    std::string getPrenume ();

    std::string getNume();

    // void setPrenume(const std::string& prenume_p);

    // void setNume(const std:: string& nume_p);

   // const std::string &getNume () const;
};

#endif //OOP_STILIST_H
