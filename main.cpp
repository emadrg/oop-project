#include "Salon.h"
#include "Serviciu.h"
#include "Stilist.h"
#include "Rezervare.h"
#include <iostream>
#include <vector>


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

    Rezervare rez("serviciu", 0, 0, "locatie");
    Rezervare rez1=rez;
    Rezervare rez2=rez;
    Rezervare rez3=rez;


    int x1=0, x2=0, x3=0, ora, x_serviciu=0, total_durata=0, total_pret=0;
    std::string raspuns;

//x1- selectam salon
//x2- selectam stilist
//x3- selectam ora

int ok_rezervare=0;
int nr_programari=0;


while(ok_rezervare==0&&nr_programari<4) {

    nr_programari++;

std::cout<<"Selectati serviciul dorit: \n";
    operator<<(operator<<(operator<<(operator<<(operator<<(operator<<(std::cout, serv1), serv2), serv3), serv4), serv5), serv6);


    std::cin>>x_serviciu;
    if(x_serviciu==1){
        rez.setDurata(serv1.getDurata());
        rez.setServiciu(serv1.getNume());
        rez.setPret(serv1.getPret());
        total_pret=total_pret+serv1.getPret();
        total_durata=total_durata+serv1.getDurata();
    }
    if(x_serviciu==2){
        rez.setDurata(serv2.getDurata());
        rez.setServiciu(serv2.getNume());
        rez.setPret(serv2.getPret());
        total_pret=total_pret+serv2.getPret();
        total_durata=total_durata+serv2.getDurata();
    }
    if(x_serviciu==3){
        rez.setDurata(serv3.getDurata());
        rez.setServiciu(serv3.getNume());
        rez.setPret(serv3.getPret());
        total_pret=total_pret+serv3.getPret();
        total_durata=total_durata+serv3.getDurata();
    }
    if(x_serviciu==4){
        rez.setDurata(serv4.getDurata());
        rez.setServiciu(serv4.getNume());
        rez.setPret(serv4.getPret());
        total_pret=total_pret+serv4.getPret();
        total_durata=total_durata+serv4.getDurata();
    }
    if(x_serviciu==5){
        rez.setDurata(serv5.getDurata());
        rez.setServiciu(serv5.getNume());
        rez.setPret(serv5.getPret());
        total_pret=total_pret+serv5.getPret();
        total_durata=total_durata+serv5.getDurata();
    }
    if(x_serviciu==6){
        rez.setDurata(serv6.getDurata());
        rez.setServiciu(serv6.getNume());
        rez.setPret(serv6.getPret());
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
        rez.setLocatie(s1.getAdresa());
        Salon::afis(s1.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr1-pgr3

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil1.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil1.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil2.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil2.getProgramari(), ora);
        }
        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil3.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil3.getProgramari(), ora);
        }

    }
    if (x1 == 2) {
        rez.setLocatie(s2.getAdresa());
        Salon::afis(s2.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr4-pgr6

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil4.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil4.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil5.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil5.getProgramari(), ora);
        }

        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil6.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil6.getProgramari(), ora);

        }
    }

    if (x1 == 3) {
        rez.setLocatie(s3.getAdresa());
        Salon::afis(s3.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr7-pgr9

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil7.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil7.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil8.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil8.getProgramari(), ora);
        }
        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil9.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil9.getProgramari(), ora);
        }
    }
    if (x1 == 4) {
        rez.setLocatie(s4.getAdresa());
        Salon::afis(s4.getStilisti());
        std::cin >> x2;//aici putem avea vectorii pgr10-pgr12

        std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if (x2 == 1) {
            for (int i = 0; i < 8; i++)
                if (stil10.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil10.getProgramari(), ora);
        }
        if (x2 == 2) {
            for (int i = 0; i < 8; i++)
                if (stil11.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil11.getProgramari(), ora);
        }
        if (x2 == 3) {
            for (int i = 0; i < 8; i++)
                if (stil12.getProgramari()[i] == 0)
                    std::cout << i + 8 << " ";
            std::cin >> x3;
            ora = x3 - 8;
            Stilist::add_programare(stil12.getProgramari(), ora);
        }
    }
    if(nr_programari==1){
        rez1=rez;
        std::cout<<"Prima dumneavostra programare:\n";
        Rezervare::afis_rezervare(rez1);
    }
    if(nr_programari==2) {
        rez2=rez;
        std::cout<<"Prima dumneavostra programare:\n";
        Rezervare::afis_rezervare(rez1);
        std::cout<<"A doua dumneavoastra programare:\n";
        Rezervare::afis_rezervare(rez2);
    }
    if(nr_programari==3) {
        rez3=rez;
        std::cout<<"Prima dumneavostra programare:\n";
        Rezervare::afis_rezervare(rez1);
        std::cout<<"A doua dumneavoastra programare:\n";
        Rezervare::afis_rezervare(rez2);
        std::cout<<"A treia dumneavoastra programare:\n";
        Rezervare::afis_rezervare(rez3);
    }
    if(nr_programari<3) {
        std::cout << "doriti sa faceti si alta programare?(da/nu)";
        std::cin >> raspuns;
        if (raspuns == "da")
            ok_rezervare = 0;
        else {
            ok_rezervare = 1;
            std::cout << "veti avea de achitat " << total_pret << " lei, iar timpul petrecut in salon va fi de "
                      << total_durata << " minute"<<std::endl;
        }
    }

    else {
        std::cout << "ati atins numarul maxim de programari" << std::endl;
        std::cout << "veti avea de achitat " << total_pret << " lei, iar timpul petrecut in salon va fi de "
                  << total_durata << " minute"<<std::endl;
    }

}

    return 0;
}