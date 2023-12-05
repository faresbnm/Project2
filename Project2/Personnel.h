#pragma once
#include "CL_CAD.h"
#include "CL_mappPersonnel.h"
#include "Gestion_Personnel.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::DataGridView^ dgv_personnel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::TextBox^ text_prenom;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ text_date_embauche;



	private: System::Windows::Forms::Label^ lable12;
	private: System::Windows::Forms::TextBox^ text_id_superieur;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ text_adresse;

	private: System::Windows::Forms::Label^ label6;

	private: NS_SVC::Gestion_Personnel^ gestionPersonnel;
	private: DataSet^ dsPersonnel;
	private: String^ mode;
	private: int index;
	private: int rowsCount;
	private: int id;
	private: System::Windows::Forms::TextBox^ text_id;

	private: System::Windows::Forms::Label^ label4;




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Personnel::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->dgv_personnel = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->text_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->lable12 = (gcnew System::Windows::Forms::Label());
			this->text_id_superieur = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_personnel))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Azure;
			this->label1->Location = System::Drawing::Point(9, 4);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(100, 0, 100, 0);
			this->label1->Size = System::Drawing::Size(472, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestion du personnel";
			this->label1->Click += gcnew System::EventHandler(this, &Personnel::label1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->button1->Location = System::Drawing::Point(98, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ajouter perssonel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Personnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::AliceBlue;
			this->button2->Location = System::Drawing::Point(98, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Supprimer perssonel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Personnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::AliceBlue;
			this->button3->Location = System::Drawing::Point(98, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modifier perssonel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Personnel::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::AliceBlue;
			this->button4->Location = System::Drawing::Point(98, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 53);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Personnel::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(9, 95);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(54, 44);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 200);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 44);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(9, 289);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 44);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(9, 399);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(54, 44);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// dgv_personnel
			// 
			this->dgv_personnel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dgv_personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_personnel->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgv_personnel->Location = System::Drawing::Point(257, 319);
			this->dgv_personnel->Name = L"dgv_personnel";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_personnel->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_personnel->RowHeadersWidth = 62;
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->dgv_personnel->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dgv_personnel->RowTemplate->Height = 28;
			this->dgv_personnel->Size = System::Drawing::Size(839, 375);
			this->dgv_personnel->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(357, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nom";
			this->label2->Click += gcnew System::EventHandler(this, &Personnel::label2_Click);
			// 
			// text_nom
			// 
			this->text_nom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_nom->Location = System::Drawing::Point(362, 193);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(121, 26);
			this->text_nom->TabIndex = 13;
			// 
			// text_prenom
			// 
			this->text_prenom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_prenom->Location = System::Drawing::Point(362, 276);
			this->text_prenom->Name = L"text_prenom";
			this->text_prenom->Size = System::Drawing::Size(119, 26);
			this->text_prenom->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(357, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Prenom";
			this->label3->Click += gcnew System::EventHandler(this, &Personnel::label3_Click);
			// 
			// text_date_embauche
			// 
			this->text_date_embauche->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_date_embauche->Location = System::Drawing::Point(591, 113);
			this->text_date_embauche->Name = L"text_date_embauche";
			this->text_date_embauche->Size = System::Drawing::Size(145, 26);
			this->text_date_embauche->TabIndex = 17;
			// 
			// lable12
			// 
			this->lable12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lable12->AutoSize = true;
			this->lable12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lable12->ForeColor = System::Drawing::Color::Black;
			this->lable12->Location = System::Drawing::Point(586, 85);
			this->lable12->Name = L"lable12";
			this->lable12->Size = System::Drawing::Size(165, 25);
			this->lable12->TabIndex = 16;
			this->lable12->Text = L"Date d\'embauche";
			// 
			// text_id_superieur
			// 
			this->text_id_superieur->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_id_superieur->Location = System::Drawing::Point(600, 197);
			this->text_id_superieur->Name = L"text_id_superieur";
			this->text_id_superieur->Size = System::Drawing::Size(68, 26);
			this->text_id_superieur->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(595, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"ID Superviseur";
			// 
			// text_adresse
			// 
			this->text_adresse->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_adresse->Location = System::Drawing::Point(600, 276);
			this->text_adresse->Name = L"text_adresse";
			this->text_adresse->Size = System::Drawing::Size(136, 26);
			this->text_adresse->TabIndex = 21;
			this->text_adresse->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(595, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 25);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Adresse";
			this->label6->Click += gcnew System::EventHandler(this, &Personnel::label6_Click);
			// 
			// text_id
			// 
			this->text_id->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->text_id->Location = System::Drawing::Point(362, 113);
			this->text_id->Name = L"text_id";
			this->text_id->Size = System::Drawing::Size(61, 26);
			this->text_id->TabIndex = 23;
			this->text_id->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(357, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"ID Personnel";
			this->label4->Click += gcnew System::EventHandler(this, &Personnel::label4_Click);
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1218, 706);
			this->Controls->Add(this->text_id);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->text_adresse);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->text_id_superieur);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->text_date_embauche);
			this->Controls->Add(this->lable12);
			this->Controls->Add(this->text_prenom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_nom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgv_personnel);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::AliceBlue;
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->Load += gcnew System::EventHandler(this, &Personnel::Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_personnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->initialisationENR();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "nouveau";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "supprimer";

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "modifier";
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: void initialisationENR(void)
			  {
  this->gestionPersonnel = gcnew NS_SVC::Gestion_Personnel();
  this->dgv_personnel->Columns->Clear();
  this->dsPersonnel = this->gestionPersonnel->ListePersonnel("LesPersonnel");
  this->rowsCount = this->dsPersonnel->Tables["LesPersonnel"]->Rows->Count;
  this->index = 0;
  this->dgv_personnel->DataSource = this->dsPersonnel;
  this->dgv_personnel->DataMember = "LesPersonnel";
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "nouveau") {
		this->gestionPersonnel->ajouter(this->text_nom->Text, this->text_prenom->Text, this->text_date_embauche->Text, Convert::ToInt32(this->text_id_superieur->Text), this->text_adresse->Text);
	}if (mode == "supprimer") {
		this->gestionPersonnel->supprimer(Convert::ToInt32(this->text_id->Text));

	}if (mode == "modifier") {
		this->gestionPersonnel->modifier(Convert::ToInt32(this->text_id->Text), this->text_nom->Text, this->text_prenom->Text, this->text_date_embauche->Text, Convert::ToInt32(this->text_id_superieur->Text), this->text_adresse->Text);
	}
	initialisationENR();
}
};
}
