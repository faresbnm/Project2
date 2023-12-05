#include "gestion_Personnel.h"

namespace NS_SVC
{
    Gestion_Personnel::Gestion_Personnel(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->Personnel = gcnew NS_Composants::CL_mappPersonnel();
    }

    DataSet^ Gestion_Personnel::ListePersonnel(String^ dataTableName) {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->Personnel->SELECT(), dataTableName);
        return this->ds;
    }

    void Gestion_Personnel::ajouter(String^ nom, String^ prenom, String^ DE, int IDS, String^ Adresse){
        this->Personnel->SetNom(nom);
        this->Personnel->SetPrenom(prenom);
        this->Personnel->SetDateEmbauche(DE);
        this->Personnel->SetIDSuperieur(IDS);
        this->Personnel->SetAdresse(Adresse);
        this->cad->actionRowsID(this->Personnel->INSERT());
    }

    void Gestion_Personnel::modifier(int ID, String^ nom, String^ prenom, String^ DE, int IDS, String^ Adresse) {
        this->Personnel->SetID(ID);
        this->Personnel->SetNom(nom);
        this->Personnel->SetPrenom(prenom);
        this->Personnel->SetDateEmbauche(DE);
        this->Personnel->SetIDSuperieur(IDS);
        this->Personnel->SetAdresse(Adresse);
        this->cad->actionRowsID(this->Personnel->UPDATE());
    }

    void Gestion_Personnel::supprimer(int ID) {
        this->Personnel->SetID(ID);
        this->cad->actionRowsID(this->Personnel->DELETE());
    }
}