#include "Salon.h"
#include "Serviciu.h"
#include "Stilist.h"
#include <iostream>
#include <vector>


void add_programare ( std::vector<int>&  programari, int &ora) {
int nr_incercari=0;
while((ora<0||ora>8||programari[ora]!=0)&&nr_incercari<3)
{
    std::cout<<"introduceti alta ora: "<<std::endl;
    std::cin>>ora;
    nr_incercari++;
}
if(nr_incercari==3)
    std::cout<<"puteti selecta ora doar de 3 ori; incercati din nou";

programari[ora]=1;

}

void afis (const std::vector<Stilist *>& vect) {
    for (int i = 0; i < 3; ++i)
        std::cout << i + 1 << ". " << vect[i]->getNume() << " " << vect[i]->getPrenume() << std::endl;
}

int main() {
    std::vector <int> pgr1(8, 0);
    std::vector <int> pgr2(8, 0);
    std::vector <int> pgr3(8, 0);
    std::vector <int> pgr4(8, 0);
    std::vector <int> pgr5(8, 0);
    std::vector <int> pgr6(8, 0);
    std::vector <int> pgr7(8, 0);
    std::vector <int> pgr8(8, 0);
    std::vector <int> pgr9(8, 0);
    std::vector <int> pgr10(8, 0);
    std::vector <int> pgr11(8, 0);
    std::vector <int> pgr12(8, 0);

    Stilist stil1( "Ioana", "Popa", pgr1);
    Stilist stil2("Andreea", "Simion", pgr2);
    Stilist stil3("Bogdan", "Anton", pgr3);
    Stilist stil4("Alexandru", "Iordachescu", pgr4);
    Stilist stil5("Raluca", "Dinu", pgr5);
    Stilist stil6("Simona", "Pricop", pgr6);
    Stilist stil7("Alex", "Popescu", pgr7);
    Stilist stil8("Violeta", "Prisacaru", pgr8);
    Stilist stil9("Ilinca", "Busuioc", pgr9);
    Stilist stil10("Adelina", "Coman", pgr10);
    Stilist stil11("Dani", "Costi", pgr11);
    Stilist stil12("Sabina", "Luncan", pgr12);

    std::vector <Stilist*> stilisti1;
    std::vector <Stilist*> stilisti2;
    std::vector <Stilist*> stilisti3;
    std::vector <Stilist*> stilisti4;


    stilisti1.push_back(&stil1);
    stilisti1.push_back(&stil2);
    stilisti1.push_back(&stil3);
    stilisti2.push_back(&stil4);
    stilisti2.push_back(&stil5);
    stilisti2.push_back(&stil6);
    stilisti3.push_back(&stil7);
    stilisti3.push_back(&stil8);
    stilisti3.push_back(&stil9);
    stilisti4.push_back(&stil10);
    stilisti4.push_back(&stil11);
    stilisti4.push_back(&stil12);

    Salon s1( "Mihai Bravu 12", stilisti1);
    Salon s2( "Bulevardul Unirii 15" , stilisti2);
    Salon s3( "Bulevardul Elisabeta 16", stilisti3);
    Salon s4( "Strada Castanilor 78", stilisti4);


    Serviciu serv1( "Manichiura", 120, 120);
    Serviciu serv2( "Pedichiura", 100, 150);
    Serviciu serv3( "Tuns femei", 60, 70);
    Serviciu serv4( "Tuns barbati", 40, 50);
    Serviciu serv5( "Vopsit", 200, 500);
    Serviciu serv6( "Machiaj", 100, 200);

    int x1, x2, x3, ora, x_serviciu, total_durata=0, total_pret=0;



//x1- selectam salon
//x2- selectam stilist
//x3- selectam ora

int ok_rezervare=0;
int nr_programari=0;

///orice client poate face maxim 3 programari

while(ok_rezervare==0&&nr_programari<3) {
    std::cout<<"1. "<<serv1.getNume()<<std::endl;
    std::cout<<"2. "<<serv2.getNume()<<std::endl;
    std::cout<<"3. "<<serv3.getNume()<<std::endl;
    std::cout<<"4. "<<serv4.getNume()<<std::endl;
    std::cout<<"5. "<<serv5.getNume()<<std::endl;
    std::cout<<"6. "<<serv6.getNume()<<std::endl;

    std::cin>>x_serviciu;
    if(x_serviciu==1){
        total_pret=total_pret+serv1.getPret();
        total_durata=total_durata+serv1.getDurata();
    }
    if(x_serviciu==2){
        total_pret=total_pret+serv2.getPret();
        total_durata=total_durata+serv2.getDurata();
    }
    if(x_serviciu==3){
        total_pret=total_pret+serv3.getPret();
        total_durata=total_durata+serv3.getDurata();
    }
    if(x_serviciu==4){
        total_pret=total_pret+serv4.getPret();
        total_durata=total_durata+serv4.getDurata();
    }
    if(x_serviciu==5){
        total_pret=total_pret+serv5.getPret();
        total_durata=total_durata+serv5.getDurata();
    }
    if(x_serviciu==6){
        total_pret=total_pret+serv6.getPret();
        total_durata=total_durata+serv6.getDurata();
    }

    std::cout<<"Selectati salonul la care doriti sa mergeti:"<<std::endl;

    std::cout<<"1. "<<s1.getAdresa()<<std::endl;
    std::cout<<"2. "<<s2.getAdresa()<<std::endl;
    std::cout<<"3. "<<s3.getAdresa()<<std::endl;
    std::cout<<"4. "<<s4.getAdresa()<<std::endl;

    std::cin >> x1;

    std::cout << "Alegeti stilistul la care doriti sa faceti programarea: " << std::endl;
    if (x1 == 1) {
        afis(s1.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr1-pgr3

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil1.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil1.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil2.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil2.getProgramari(), ora);
        }
        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil3.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil3.getProgramari(), ora);
        }

    }
    if (x1 == 2) {
        afis(s2.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr4-pgr6

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil4.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil4.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil5.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil5.getProgramari(), ora);
        }

        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil6.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil6.getProgramari(), ora);

        }
    }

    if (x1 == 3) {
        afis(s3.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr7-pgr9

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil7.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil7.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil8.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil8.getProgramari(), ora);
        }
        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil9.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil9.getProgramari(), ora);
        }
    }
    if (x1 == 4) {
        afis(s4.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr10-pgr12

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil10.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil10.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil11.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil11.getProgramari(), ora);
        }
        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil12.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            add_programare(stil12.getProgramari(), ora);
        }
    }
    nr_programari++;
    if(nr_programari<3) {
        std::cout << "doriti sa faceti si alta programare?(da/nu)";
        std::string raspuns;
        std::cin >> raspuns;
        if (raspuns == "da")
            ok_rezervare = 0;
        else {
            ok_rezervare = 1;
        }
            std::cout << "veti avea de achitat " << total_pret << " lei, iar timoul petrecut in salon va fi de "
                      << total_durata << " minute";
        }

    else std::cout<<"ati atins numarul maxim de programari"<<std::endl;
    std::cout << "veti avea de achitat " << total_pret << " lei, iar timoul petrecut in salon va fi de "
              << total_durata << " minute";
}
    return 0;
}