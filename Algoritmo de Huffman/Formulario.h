#pragma once

namespace AlgoritmodeHuffman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Formulario
	/// </summary>
	public ref class Formulario : public System::Windows::Forms::Form
	{
	public:
		Formulario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			// Limpiar listBoxes
			LimpiarTodo();
		}
		void LimpiarTodo(){
			listBox1->Items->Clear();
			listBox2->Items->Clear();
			listBox3->Items->Clear();
			listBox4->Items->Clear();
			listBox5->Items->Clear();
			listBox6->Items->Clear();

			tbResultado->Clear();
			tbRutaDesencriptar->Clear();
			tbRutaEncriptar->Clear();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Formulario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;



	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  tbRutaEncriptar;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnCodificar;

	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  btnProcesarFrecuencias;

	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::TextBox^  tbResultado;

	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::Button^  btnDescomprimir;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  tbRutaDesencriptar;


	private: System::Windows::Forms::Label^  label2;



	protected:








	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->btnCodificar = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnProcesarFrecuencias = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tbRutaEncriptar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tbResultado = (gcnew System::Windows::Forms::TextBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->btnDescomprimir = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tbRutaDesencriptar = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(851, 37);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Algoritmo de Compresi�n de Datos";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(738, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"&Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Formulario::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->tabControl1);
			this->panel1->Location = System::Drawing::Point(12, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(827, 441);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Formulario::panel1_Paint);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(827, 441);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->listBox5);
			this->tabPage1->Controls->Add(this->btnCodificar);
			this->tabPage1->Controls->Add(this->listBox4);
			this->tabPage1->Controls->Add(this->listBox3);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->btnProcesarFrecuencias);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->tbRutaEncriptar);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 42);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(819, 395);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Comprimir";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox5
			// 
			this->listBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 33;
			this->listBox5->Location = System::Drawing::Point(12, 319);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(801, 70);
			this->listBox5->TabIndex = 9;
			// 
			// btnCodificar
			// 
			this->btnCodificar->Location = System::Drawing::Point(12, 274);
			this->btnCodificar->Name = L"btnCodificar";
			this->btnCodificar->Size = System::Drawing::Size(322, 38);
			this->btnCodificar->TabIndex = 8;
			this->btnCodificar->Text = L"Codificar/Crear Archivo";
			this->btnCodificar->UseVisualStyleBackColor = true;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 33;
			this->listBox4->Location = System::Drawing::Point(617, 131);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(196, 136);
			this->listBox4->TabIndex = 7;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 33;
			this->listBox3->Location = System::Drawing::Point(416, 131);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(196, 136);
			this->listBox3->TabIndex = 6;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 33;
			this->listBox2->Location = System::Drawing::Point(214, 131);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(196, 136);
			this->listBox2->TabIndex = 5;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 33;
			this->listBox1->Location = System::Drawing::Point(12, 131);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(196, 136);
			this->listBox1->TabIndex = 4;
			// 
			// btnProcesarFrecuencias
			// 
			this->btnProcesarFrecuencias->Location = System::Drawing::Point(12, 86);
			this->btnProcesarFrecuencias->Name = L"btnProcesarFrecuencias";
			this->btnProcesarFrecuencias->Size = System::Drawing::Size(322, 39);
			this->btnProcesarFrecuencias->TabIndex = 3;
			this->btnProcesarFrecuencias->Text = L"Procesar Frecuencias";
			this->btnProcesarFrecuencias->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(663, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"&Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Formulario::button2_Click);
			// 
			// tbRutaEncriptar
			// 
			this->tbRutaEncriptar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRutaEncriptar->Location = System::Drawing::Point(12, 39);
			this->tbRutaEncriptar->Name = L"tbRutaEncriptar";
			this->tbRutaEncriptar->ReadOnly = true;
			this->tbRutaEncriptar->Size = System::Drawing::Size(644, 41);
			this->tbRutaEncriptar->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Archivo a comprimir:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tbResultado);
			this->tabPage2->Controls->Add(this->listBox6);
			this->tabPage2->Controls->Add(this->btnDescomprimir);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->tbRutaDesencriptar);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 42);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(819, 395);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Descomprimir";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tbResultado
			// 
			this->tbResultado->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbResultado->Location = System::Drawing::Point(315, 86);
			this->tbResultado->Multiline = true;
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(498, 281);
			this->tbResultado->TabIndex = 8;
			// 
			// listBox6
			// 
			this->listBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 33;
			this->listBox6->Location = System::Drawing::Point(12, 132);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(282, 235);
			this->listBox6->TabIndex = 7;
			// 
			// btnDescomprimir
			// 
			this->btnDescomprimir->Location = System::Drawing::Point(12, 86);
			this->btnDescomprimir->Name = L"btnDescomprimir";
			this->btnDescomprimir->Size = System::Drawing::Size(282, 39);
			this->btnDescomprimir->TabIndex = 6;
			this->btnDescomprimir->Text = L"Descomprimir";
			this->btnDescomprimir->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(663, 39);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"&Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Formulario::button5_Click);
			// 
			// tbRutaDesencriptar
			// 
			this->tbRutaDesencriptar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRutaDesencriptar->Location = System::Drawing::Point(12, 39);
			this->tbRutaDesencriptar->Name = L"tbRutaDesencriptar";
			this->tbRutaDesencriptar->ReadOnly = true;
			this->tbRutaDesencriptar->Size = System::Drawing::Size(644, 41);
			this->tbRutaDesencriptar->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Archivo a descomprimir:";
			// 
			// Formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 552);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Formulario";
			this->panel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//filtrando txt
	openFileDialog1->Filter = "Archivos de Texto|*.txt";
	openFileDialog1->Title = "Selecccione el Archivo a Encriptar";
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		tbRutaEncriptar->Text = openFileDialog1->FileName;
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//filtrando txt
	openFileDialog1->Filter = "Archivos de Texto|*.txt";
	openFileDialog1->Title = "Selecccione el Archivo a Desencriptar";
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		tbRutaDesencriptar->Text = (openFileDialog1->FileName);		
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}