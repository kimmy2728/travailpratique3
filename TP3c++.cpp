

#include <iostream>
#include "Facture.h"

int main()
{

    Facture fac;

    std::cout << " Fichier en cours de telechargement " <<std::endl;
        fac.lirefichier_Facturator("Facturator.csv");

    std::cout << "Execution de la conversion du fichier demandé en cours" << std::endl;
        fac.version_compatiblepour_Dacount("DaCount.ods");

    std::cout << "Fin de la conversion du fichier" << std::endl;
}

