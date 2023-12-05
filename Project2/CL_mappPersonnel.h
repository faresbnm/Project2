#pragma once
using namespace System;

namespace NS_Composants
{

	ref class CL_mappPersonnel
	{
	private:
		int ID_Personnel;
		String^ Nom;
		String^ Prenom;
		String^ Date_embauche;
		int ID_Superieur;
		String^ Adresse;

	public:
		CL_mappPersonnel();
		String^ SELECT();
		String^ INSERT();
		String^ UPDATE();
		String^ DELETE();

		void SetID(int);
		void SetNom(String^);
		void SetPrenom(String^);
		void SetDateEmbauche(String^);
		void SetIDSuperieur(int);
		void SetAdresse(String^);

		int GetID();
		String^ GetNom();
		String^ GetPrenom();
		String^ GetDateEmbauche();
		int GetIDSuperieur();
		String^ GetAdresse();

	};
}
