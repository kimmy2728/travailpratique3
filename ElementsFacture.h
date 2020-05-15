#pragma once
#include <string>

class ElementsFacture
{
private:

	std::string id = "";
	double prix = 0;
	std::string description = "";

public:

	ElementsFacture();
	ElementsFacture(std::string le_id, double le_prix, std::string la_description);
	void setId(std::string le_id);
	void setPrix(double le_prix);
	void setDescription(std::string la_description);
	std::string getId();
	double getPrix();
	std::string getDescription();
};

