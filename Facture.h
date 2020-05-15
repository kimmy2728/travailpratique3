#pragma once
#include <string>
#include <fstream>
#include <vector>
#include <regex>
#include <iostream>

#include "ElementsFacture.h"

class Facture
{

protected:
	std::vector<ElementsFacture>elements;

public:
	Facture();
	Facture(std::vector<ElementsFacture>elements);
	void ajouterElements(ElementsFacture items) ;
	void lirefichier_Facturator();
	void version_compatiblepour_Dacount() ;

};

