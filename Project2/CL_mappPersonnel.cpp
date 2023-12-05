#include "CL_mappPersonnel.h"

namespace NS_Composants {
	CL_mappPersonnel::CL_mappPersonnel() {
		this->ID_Personnel = -1;
		this->Nom = "rien";
		this->Prenom = "rien";
		this->Date_embauche = "rien";
		this->ID_Superieur = -1;
		this->Adresse = "rien";

	}

	String^ CL_mappPersonnel::SELECT() {
		return "SELECT * FROM Personnel;";
	}

	String^ CL_mappPersonnel::INSERT() {
		return "INSERT INTO Personnel (Nom_personnel, Prenom_personnel, Date_d_ambauche, ID_Superieur, Adresse_personnel)" + 
			   "VALUES('" + this->GetNom() + "', '" + this->GetPrenom()+ "', '" + this->GetDateEmbauche()+ "', '"+ this->GetIDSuperieur()+ "', '"+ this->GetAdresse() + "');SELECT @@IDENTITY;";
	}

	String^ CL_mappPersonnel::UPDATE() {
		return "UPDATE Personnel " +
			"SET Nom_personnel = '" + this->GetNom() + "', Prenom_personnel = '" + this->GetPrenom() + "', Date_d_ambauche = '" + this->GetDateEmbauche() + "', ID_Superieur = '" + this->GetIDSuperieur() + "', Adresse_personnel = '" + this->GetAdresse() + "' " +
			"WHERE(ID_personnel = " + this->GetID() + ");";

	}

	String^ CL_mappPersonnel::DELETE() {
		return "DELETE FROM Personnel " +
			"WHERE(ID_personnel = " + this->GetID() + ");";
	}

	void CL_mappPersonnel::SetID(int ID_Personnel) {
		if (ID_Personnel > 0)
		{
			this->ID_Personnel = ID_Personnel;
		}
	}

	void CL_mappPersonnel::SetNom(String^ nom) {
		if (nom != "")
		{
			this->Nom = nom;
		}
	}

	void CL_mappPersonnel::SetPrenom(String^ prenom) {
		if (prenom != "")
		{
			this->Prenom = prenom;
		}
	}

	void CL_mappPersonnel::SetDateEmbauche(String^ DEmbauche) {
		if (DEmbauche != "")
		{
			this->Date_embauche = DEmbauche;
		}
	}

	void CL_mappPersonnel::SetIDSuperieur(int ID_superieur) {
		if (ID_superieur > 0)
		{
			this->ID_Superieur = ID_superieur;
		}
	}

	void CL_mappPersonnel::SetAdresse(String^ ADR) {
		if (ADR != "")
		{
			this->Adresse = ADR;
		}
	}

	int CL_mappPersonnel::GetID() {
		return this->ID_Personnel;
	}

	String^ CL_mappPersonnel::GetNom() {
		return this->Nom;
	}

	String^ CL_mappPersonnel::GetPrenom() {
		return this->Prenom;
	}

	String^ CL_mappPersonnel::GetDateEmbauche() {
		return this->Date_embauche;
	}

	int CL_mappPersonnel::GetIDSuperieur() {
		return this->ID_Superieur;
	}

	String^ CL_mappPersonnel::GetAdresse() {
		return this->Adresse;
	}

}
