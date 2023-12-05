#pragma once
#include "CL_CAD.h"
#include "CL_mappPersonnel.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{

	ref class Gestion_Personnel
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_mappPersonnel^ Personnel;
		DataSet^ ds;

	public:
		Gestion_Personnel();
		DataSet^ ListePersonnel(String^);
		void ajouter(String^, String^, String^, int, String^);
		void modifier(int, String^, String^, String^, int, String^);
		void supprimer(int);

	};
}

