//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_STILIST_H
#define OOP_STILIST_H
#include <string>
#include <vector>

class Stilist {
private:
    int id_stilist;
    std::string prenume;
    std::string nume;
    std::vector <int> programari;

public:

    Stilist( const int id_stilist_, const std::string& prenume_, const std::string& nume_, std::vector<int>& programari_) ;

    std::string getPrenume ();

    std::string getNume();

    const std::vector<int> &getProgramari() const;

    // void add_programare (std::vector<int> programari, int ora);


    // void setPrenume(const std::string& prenume_p);

    // void setNume(const std:: string& nume_p);

   // const std::string &getNume () const;
};

#endif //OOP_STILIST_H
