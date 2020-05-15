#include "ElementsFacture.h"


ElementsFacture::ElementsFacture(){}

ElementsFacture::ElementsFacture(std::string le_id, double le_prix, std::string la_description) {

	this->id = le_id;
	this->prix = le_prix;
	this->description = la_description;
}
void ElementsFacture::setId(std::string le_id) {

	this->id = le_id;

}
void ElementsFacture::setPrix(double le_prix) {

	this->prix = le_prix;
}
void ElementsFacture::setDescription(std::string la_description) {

	this->description = la_description;
}
std::string ElementsFacture::getId() {

	return this->id;
}
double ElementsFacture::getPrix() {

	return this->prix;
}
std::string ElementsFacture::getDescription() {

	return this->description;
}