#pragma once
#include "Matriculacion.h"

namespace Practica5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Integration::ElementHost^ elementHost2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pagosEnLineaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ periodoAcademicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carreraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bibliotecaVirtualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datosPersonalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ horariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mallaCurricularToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ avacToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ correoInstitucionalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ computacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ingieneriaCivilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enfermeriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ odontologiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fisioterapiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicinaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ derechosToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ comunicacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administracionDeEmpresasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ amongUsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rojoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verdeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ azulToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ matriculacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blancoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carnetizaciónUPSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calificacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ recordAcademicoToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->elementHost2 = (gcnew System::Windows::Forms::Integration::ElementHost());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->periodoAcademicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carreraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagosEnLineaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bibliotecaVirtualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosPersonalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mallaCurricularToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->avacToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->correoInstitucionalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->computacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ingieneriaCivilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enfermeriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odontologiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fisioterapiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->derechosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comunicacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administracionDeEmpresasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amongUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rojoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verdeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->azulToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blancoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carnetizaciónUPSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calificacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recordAcademicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->matriculacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// elementHost2
			// 
			this->elementHost2->Location = System::Drawing::Point(161, 179);
			this->elementHost2->Name = L"elementHost2";
			this->elementHost2->Size = System::Drawing::Size(150, 23);
			this->elementHost2->TabIndex = 1;
			this->elementHost2->Text = L"elementHost2";
			this->elementHost2->ChildChanged += gcnew System::EventHandler<System::Windows::Forms::Integration::ChildChangedEventArgs^ >(this, &mainForm::elementHost2_ChildChanged);
			this->elementHost2->Child = nullptr;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Nombre de usuario";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(242, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(334, 45);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Matricula Estudiantil";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mainForm::button2_Click);
			this->button2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::button2_Paint);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"among_us_player_white_icon_156940 (1).ico");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(753, 202);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 120);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &mainForm::pictureBox1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->menuToolStripMenuItem,
					this->periodoAcademicoToolStripMenuItem, this->carreraToolStripMenuItem, this->amongUsToolStripMenuItem, this->carnetizaciónUPSToolStripMenuItem,
					this->calificacionesToolStripMenuItem, this->recordAcademicoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(867, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->pagosEnLineaToolStripMenuItem,
					this->bibliotecaVirtualToolStripMenuItem, this->datosPersonalesToolStripMenuItem, this->horariosToolStripMenuItem, this->mallaCurricularToolStripMenuItem,
					this->avacToolStripMenuItem, this->correoInstitucionalToolStripMenuItem, this->matriculacionToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::menuToolStripMenuItem_Click);
			// 
			// periodoAcademicoToolStripMenuItem
			// 
			this->periodoAcademicoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->periodoAcademicoToolStripMenuItem->Name = L"periodoAcademicoToolStripMenuItem";
			this->periodoAcademicoToolStripMenuItem->Size = System::Drawing::Size(121, 20);
			this->periodoAcademicoToolStripMenuItem->Text = L"periodo academico";
			// 
			// carreraToolStripMenuItem
			// 
			this->carreraToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->computacionToolStripMenuItem,
					this->ingieneriaCivilToolStripMenuItem, this->enfermeriaToolStripMenuItem, this->odontologiaToolStripMenuItem, this->fisioterapiaToolStripMenuItem,
					this->medicinaToolStripMenuItem, this->derechosToolStripMenuItem, this->comunicacionToolStripMenuItem, this->administracionDeEmpresasToolStripMenuItem
			});
			this->carreraToolStripMenuItem->Name = L"carreraToolStripMenuItem";
			this->carreraToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->carreraToolStripMenuItem->Text = L"carrera";
			// 
			// pagosEnLineaToolStripMenuItem
			// 
			this->pagosEnLineaToolStripMenuItem->Name = L"pagosEnLineaToolStripMenuItem";
			this->pagosEnLineaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pagosEnLineaToolStripMenuItem->Text = L"Pagos en linea";
			this->pagosEnLineaToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::pagosEnLineaToolStripMenuItem_Click);
			// 
			// bibliotecaVirtualToolStripMenuItem
			// 
			this->bibliotecaVirtualToolStripMenuItem->Name = L"bibliotecaVirtualToolStripMenuItem";
			this->bibliotecaVirtualToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->bibliotecaVirtualToolStripMenuItem->Text = L"biblioteca virtual";
			// 
			// datosPersonalesToolStripMenuItem
			// 
			this->datosPersonalesToolStripMenuItem->Name = L"datosPersonalesToolStripMenuItem";
			this->datosPersonalesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->datosPersonalesToolStripMenuItem->Text = L"Datos personales";
			// 
			// horariosToolStripMenuItem
			// 
			this->horariosToolStripMenuItem->Name = L"horariosToolStripMenuItem";
			this->horariosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->horariosToolStripMenuItem->Text = L"horarios";
			// 
			// mallaCurricularToolStripMenuItem
			// 
			this->mallaCurricularToolStripMenuItem->Name = L"mallaCurricularToolStripMenuItem";
			this->mallaCurricularToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->mallaCurricularToolStripMenuItem->Text = L"malla curricular";
			// 
			// avacToolStripMenuItem
			// 
			this->avacToolStripMenuItem->Name = L"avacToolStripMenuItem";
			this->avacToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->avacToolStripMenuItem->Text = L"avac";
			// 
			// correoInstitucionalToolStripMenuItem
			// 
			this->correoInstitucionalToolStripMenuItem->Name = L"correoInstitucionalToolStripMenuItem";
			this->correoInstitucionalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->correoInstitucionalToolStripMenuItem->Text = L"correo institucional";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem2->Text = L"66-67";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem3->Text = L"67-68";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem4->Text = L"68-69";
			// 
			// computacionToolStripMenuItem
			// 
			this->computacionToolStripMenuItem->Name = L"computacionToolStripMenuItem";
			this->computacionToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->computacionToolStripMenuItem->Text = L"computacion";
			// 
			// ingieneriaCivilToolStripMenuItem
			// 
			this->ingieneriaCivilToolStripMenuItem->Name = L"ingieneriaCivilToolStripMenuItem";
			this->ingieneriaCivilToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->ingieneriaCivilToolStripMenuItem->Text = L"ingieneria civil";
			// 
			// enfermeriaToolStripMenuItem
			// 
			this->enfermeriaToolStripMenuItem->Name = L"enfermeriaToolStripMenuItem";
			this->enfermeriaToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->enfermeriaToolStripMenuItem->Text = L"enfermeria";
			// 
			// odontologiaToolStripMenuItem
			// 
			this->odontologiaToolStripMenuItem->Name = L"odontologiaToolStripMenuItem";
			this->odontologiaToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->odontologiaToolStripMenuItem->Text = L"odontologia";
			// 
			// fisioterapiaToolStripMenuItem
			// 
			this->fisioterapiaToolStripMenuItem->Name = L"fisioterapiaToolStripMenuItem";
			this->fisioterapiaToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->fisioterapiaToolStripMenuItem->Text = L"fisioterapia";
			// 
			// medicinaToolStripMenuItem
			// 
			this->medicinaToolStripMenuItem->Name = L"medicinaToolStripMenuItem";
			this->medicinaToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->medicinaToolStripMenuItem->Text = L"medicina";
			// 
			// derechosToolStripMenuItem
			// 
			this->derechosToolStripMenuItem->Name = L"derechosToolStripMenuItem";
			this->derechosToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->derechosToolStripMenuItem->Text = L"derechos";
			this->derechosToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::leyesToolStripMenuItem_Click);
			// 
			// comunicacionToolStripMenuItem
			// 
			this->comunicacionToolStripMenuItem->Name = L"comunicacionToolStripMenuItem";
			this->comunicacionToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->comunicacionToolStripMenuItem->Text = L"comunicacion ";
			// 
			// administracionDeEmpresasToolStripMenuItem
			// 
			this->administracionDeEmpresasToolStripMenuItem->Name = L"administracionDeEmpresasToolStripMenuItem";
			this->administracionDeEmpresasToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->administracionDeEmpresasToolStripMenuItem->Text = L"administracion de empresas";
			// 
			// amongUsToolStripMenuItem
			// 
			this->amongUsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rojoToolStripMenuItem,
					this->verdeToolStripMenuItem, this->azulToolStripMenuItem, this->blancoToolStripMenuItem
			});
			this->amongUsToolStripMenuItem->Name = L"amongUsToolStripMenuItem";
			this->amongUsToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->amongUsToolStripMenuItem->Text = L"among us";
			// 
			// rojoToolStripMenuItem
			// 
			this->rojoToolStripMenuItem->Name = L"rojoToolStripMenuItem";
			this->rojoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->rojoToolStripMenuItem->Text = L"rojo";
			// 
			// verdeToolStripMenuItem
			// 
			this->verdeToolStripMenuItem->Name = L"verdeToolStripMenuItem";
			this->verdeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->verdeToolStripMenuItem->Text = L"verde";
			// 
			// azulToolStripMenuItem
			// 
			this->azulToolStripMenuItem->Name = L"azulToolStripMenuItem";
			this->azulToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->azulToolStripMenuItem->Text = L"azul";
			// 
			// blancoToolStripMenuItem
			// 
			this->blancoToolStripMenuItem->Name = L"blancoToolStripMenuItem";
			this->blancoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->blancoToolStripMenuItem->Text = L"blanco";
			// 
			// carnetizaciónUPSToolStripMenuItem
			// 
			this->carnetizaciónUPSToolStripMenuItem->Name = L"carnetizaciónUPSToolStripMenuItem";
			this->carnetizaciónUPSToolStripMenuItem->Size = System::Drawing::Size(113, 20);
			this->carnetizaciónUPSToolStripMenuItem->Text = L"carnetización UPS";
			// 
			// calificacionesToolStripMenuItem
			// 
			this->calificacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem5,
					this->toolStripMenuItem6, this->toolStripMenuItem7
			});
			this->calificacionesToolStripMenuItem->Name = L"calificacionesToolStripMenuItem";
			this->calificacionesToolStripMenuItem->Size = System::Drawing::Size(92, 20);
			this->calificacionesToolStripMenuItem->Text = L"Calificaciones";
			// 
			// recordAcademicoToolStripMenuItem
			// 
			this->recordAcademicoToolStripMenuItem->Name = L"recordAcademicoToolStripMenuItem";
			this->recordAcademicoToolStripMenuItem->Size = System::Drawing::Size(114, 20);
			this->recordAcademicoToolStripMenuItem->Text = L"record academico";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem5->Text = L"66-67";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem6->Text = L"67-68";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem7->Text = L"68-69";
			// 
			// matriculacionToolStripMenuItem
			// 
			this->matriculacionToolStripMenuItem->Name = L"matriculacionToolStripMenuItem";
			this->matriculacionToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->matriculacionToolStripMenuItem->Text = L"Matriculacion";
			this->matriculacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::matriculacionToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->ClientSize = System::Drawing::Size(867, 321);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->elementHost2);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->Text = L"Practica 5";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void elementHost1_ChildChanged(System::Object^ sender, System::Windows::Forms::Integration::ChildChangedEventArgs^ e) {
	}
	private: System::Void elementHost2_ChildChanged(System::Object^ sender, System::Windows::Forms::Integration::ChildChangedEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void leyesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pagosEnLineaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void matriculacionToolStripMenuItem_Click(
	System::Object^ sender,
	System::EventArgs^ e) {

	Matriculacion^ ventana = gcnew Matriculacion();
	ventana->Show();
}
};
}
