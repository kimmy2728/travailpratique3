#include "Facture.h"

Facture::Facture(){}


Facture::Facture(std::vector<ElementsFacture> elements) {

	this->elements = elements;
} 

void Facture::ajouterElements(ElementsFacture items) {

	this->elements.push_back(items);
}

void Facture::lirefichier_Facturator(){ //methode permettant la lecture du fichier Facturator
	

	std::regex reg_id("^[0-9]{4}:[0-9]{4}:[0-9]{4}:[0-9]{4}$");
	std::regex reg_prix("^[0-9]+$");

	std::ifstream fichier("Facturator.csv");
	fichier.open("Facturator.csv");
	std::string ligne;



	if (fichier.is_open())
	{
		ElementsFacture items;


		while (!fichier.eof()) {

			getline(fichier, ligne);

			if (std::regex_match(ligne, reg_id)) {

				items.setId(ligne);
			}
			else if (std::regex_match(ligne, reg_prix)) {

				double prix = std::stod(ligne) / 100;
				items.setPrix(prix);

			}
			else {

				items.setDescription(ligne);

			}

		}

		fichier.close();

	}
}

	void Facture::version_compatiblepour_Dacount() {

		std::ofstream fichier;
		std::vector<ElementsFacture>::iterator iter;

		for (iter = elements.begin(); iter != elements.end(); iter++) {


			std::string id = iter->getId();

			id.erase(std::remove(id.begin(), id.end(), ':'), id.end());

			int prix = (int)((iter->getPrix()));

			fichier << id << "  " << prix << std::endl;


		}

		fichier.close();



	}











