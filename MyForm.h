#pragma once

namespace ProyectoFinalTICTACTOE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ GameName;
	private: System::Windows::Forms::PictureBox^ Mars;
	private: System::Windows::Forms::PictureBox^ Jupiter;
	private: System::Windows::Forms::PictureBox^ Saturn;
	private: System::Windows::Forms::PictureBox^ Urano;

	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Button^ btnTic2;
	private: System::Windows::Forms::Button^ btnTic3;
	private: System::Windows::Forms::Button^ btnTic4;
	private: System::Windows::Forms::Button^ btnTic5;
	private: System::Windows::Forms::Button^ btnTic6;
	private: System::Windows::Forms::Button^ btnTic7;
	private: System::Windows::Forms::Button^ btnTic8;
	private: System::Windows::Forms::Button^ btnTic9;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnNewGame;
	private: System::Windows::Forms::Label^ lblTextPlayer1;
	private: System::Windows::Forms::Label^ lblTextPlayer2;
	private: System::Windows::Forms::Label^ lblPlayer1;
	private: System::Windows::Forms::Label^ lblPlayer2;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->GameName = (gcnew System::Windows::Forms::Label());
			this->Mars = (gcnew System::Windows::Forms::PictureBox());
			this->Jupiter = (gcnew System::Windows::Forms::PictureBox());
			this->Saturn = (gcnew System::Windows::Forms::PictureBox());
			this->Urano = (gcnew System::Windows::Forms::PictureBox());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->lblTextPlayer1 = (gcnew System::Windows::Forms::Label());
			this->lblTextPlayer2 = (gcnew System::Windows::Forms::Label());
			this->lblPlayer1 = (gcnew System::Windows::Forms::Label());
			this->lblPlayer2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Jupiter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Saturn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Urano))->BeginInit();
			this->SuspendLayout();
			// 
			// GameName
			// 
			this->GameName->BackColor = System::Drawing::Color::Transparent;
			this->GameName->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameName->ForeColor = System::Drawing::Color::Snow;
			this->GameName->Location = System::Drawing::Point(300, 22);
			this->GameName->Name = L"GameName";
			this->GameName->Size = System::Drawing::Size(349, 118);
			this->GameName->TabIndex = 0;
			this->GameName->Text = L"TIC TAC TOE GAME";
			this->GameName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Mars
			// 
			this->Mars->BackColor = System::Drawing::Color::Transparent;
			this->Mars->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mars.Image")));
			this->Mars->Location = System::Drawing::Point(-1, 361);
			this->Mars->Name = L"Mars";
			this->Mars->Size = System::Drawing::Size(124, 101);
			this->Mars->TabIndex = 1;
			this->Mars->TabStop = false;
			// 
			// Jupiter
			// 
			this->Jupiter->BackColor = System::Drawing::Color::Transparent;
			this->Jupiter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Jupiter.Image")));
			this->Jupiter->Location = System::Drawing::Point(761, 2);
			this->Jupiter->Name = L"Jupiter";
			this->Jupiter->Size = System::Drawing::Size(125, 138);
			this->Jupiter->TabIndex = 2;
			this->Jupiter->TabStop = false;
			// 
			// Saturn
			// 
			this->Saturn->BackColor = System::Drawing::Color::Transparent;
			this->Saturn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Saturn.Image")));
			this->Saturn->Location = System::Drawing::Point(-1, 2);
			this->Saturn->Name = L"Saturn";
			this->Saturn->Size = System::Drawing::Size(151, 155);
			this->Saturn->TabIndex = 3;
			this->Saturn->TabStop = false;
			// 
			// Urano
			// 
			this->Urano->BackColor = System::Drawing::Color::Transparent;
			this->Urano->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Urano.Image")));
			this->Urano->Location = System::Drawing::Point(733, 311);
			this->Urano->Name = L"Urano";
			this->Urano->Size = System::Drawing::Size(153, 151);
			this->Urano->TabIndex = 4;
			this->Urano->TabStop = false;
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::White;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->ForeColor = System::Drawing::Color::Navy;
			this->btnTic1->Location = System::Drawing::Point(192, 162);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(102, 90);
			this->btnTic1->TabIndex = 5;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::White;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->ForeColor = System::Drawing::Color::Navy;
			this->btnTic2->Location = System::Drawing::Point(290, 162);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(102, 90);
			this->btnTic2->TabIndex = 6;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::White;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->ForeColor = System::Drawing::Color::Navy;
			this->btnTic3->Location = System::Drawing::Point(387, 162);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(102, 90);
			this->btnTic3->TabIndex = 7;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::White;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->ForeColor = System::Drawing::Color::Navy;
			this->btnTic4->Location = System::Drawing::Point(192, 249);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(102, 81);
			this->btnTic4->TabIndex = 8;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::White;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->ForeColor = System::Drawing::Color::Navy;
			this->btnTic5->Location = System::Drawing::Point(290, 249);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(102, 81);
			this->btnTic5->TabIndex = 9;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::White;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->ForeColor = System::Drawing::Color::Navy;
			this->btnTic6->Location = System::Drawing::Point(387, 249);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(102, 81);
			this->btnTic6->TabIndex = 10;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::White;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->ForeColor = System::Drawing::Color::Navy;
			this->btnTic7->Location = System::Drawing::Point(192, 327);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(102, 92);
			this->btnTic7->TabIndex = 11;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::White;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->ForeColor = System::Drawing::Color::Navy;
			this->btnTic8->Location = System::Drawing::Point(290, 327);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(102, 92);
			this->btnTic8->TabIndex = 12;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::White;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->ForeColor = System::Drawing::Color::Navy;
			this->btnTic9->Location = System::Drawing::Point(387, 327);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(102, 92);
			this->btnTic9->TabIndex = 13;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::MediumPurple;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::Navy;
			this->btnReset->Location = System::Drawing::Point(553, 284);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(143, 57);
			this->btnReset->TabIndex = 14;
			this->btnReset->Text = L"Reset ";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->BackColor = System::Drawing::Color::MediumPurple;
			this->btnNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewGame->ForeColor = System::Drawing::Color::Navy;
			this->btnNewGame->Location = System::Drawing::Point(553, 362);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(143, 57);
			this->btnNewGame->TabIndex = 15;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = false;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// lblTextPlayer1
			// 
			this->lblTextPlayer1->AutoSize = true;
			this->lblTextPlayer1->BackColor = System::Drawing::Color::Transparent;
			this->lblTextPlayer1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTextPlayer1->ForeColor = System::Drawing::Color::White;
			this->lblTextPlayer1->Location = System::Drawing::Point(522, 179);
			this->lblTextPlayer1->Name = L"lblTextPlayer1";
			this->lblTextPlayer1->Size = System::Drawing::Size(97, 24);
			this->lblTextPlayer1->TabIndex = 16;
			this->lblTextPlayer1->Text = L"Player 1:";
			// 
			// lblTextPlayer2
			// 
			this->lblTextPlayer2->AutoSize = true;
			this->lblTextPlayer2->BackColor = System::Drawing::Color::Transparent;
			this->lblTextPlayer2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTextPlayer2->ForeColor = System::Drawing::Color::White;
			this->lblTextPlayer2->Location = System::Drawing::Point(522, 220);
			this->lblTextPlayer2->Name = L"lblTextPlayer2";
			this->lblTextPlayer2->Size = System::Drawing::Size(97, 24);
			this->lblTextPlayer2->TabIndex = 17;
			this->lblTextPlayer2->Text = L"Player 2:";
			// 
			// lblPlayer1
			// 
			this->lblPlayer1->AutoSize = true;
			this->lblPlayer1->BackColor = System::Drawing::Color::Transparent;
			this->lblPlayer1->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayer1->ForeColor = System::Drawing::Color::White;
			this->lblPlayer1->Location = System::Drawing::Point(625, 179);
			this->lblPlayer1->Name = L"lblPlayer1";
			this->lblPlayer1->Size = System::Drawing::Size(21, 24);
			this->lblPlayer1->TabIndex = 18;
			this->lblPlayer1->Text = L"0";
			// 
			// lblPlayer2
			// 
			this->lblPlayer2->AutoSize = true;
			this->lblPlayer2->BackColor = System::Drawing::Color::Transparent;
			this->lblPlayer2->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayer2->ForeColor = System::Drawing::Color::White;
			this->lblPlayer2->Location = System::Drawing::Point(625, 220);
			this->lblPlayer2->Name = L"lblPlayer2";
			this->lblPlayer2->Size = System::Drawing::Size(21, 24);
			this->lblPlayer2->TabIndex = 19;
			this->lblPlayer2->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(885, 461);
			this->Controls->Add(this->lblPlayer2);
			this->Controls->Add(this->lblPlayer1);
			this->Controls->Add(this->lblTextPlayer2);
			this->Controls->Add(this->lblTextPlayer1);
			this->Controls->Add(this->btnNewGame);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnTic9);
			this->Controls->Add(this->btnTic8);
			this->Controls->Add(this->btnTic7);
			this->Controls->Add(this->btnTic6);
			this->Controls->Add(this->btnTic5);
			this->Controls->Add(this->btnTic4);
			this->Controls->Add(this->btnTic3);
			this->Controls->Add(this->btnTic2);
			this->Controls->Add(this->btnTic1);
			this->Controls->Add(this->Urano);
			this->Controls->Add(this->Saturn);
			this->Controls->Add(this->Jupiter);
			this->Controls->Add(this->Mars);
			this->Controls->Add(this->GameName);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Jupiter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Saturn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Urano))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Boolean checker; //booleano para verificar si es falso o verdadero, a la hoa de jugar
		int plusone;//variable int, se usa como contador de las victorias de cada partida

#pragma endregion

//Cuando el juego no ha iniciado
		void Enable_False(){

	btnTic1->Enabled = false;
	btnTic2->Enabled = false;
	btnTic3->Enabled = false;
	btnTic4->Enabled = false;
	btnTic5->Enabled = false;
	btnTic6->Enabled = false;
	btnTic7->Enabled = false;
	btnTic8->Enabled = false;
	btnTic9->Enabled = false;
		}

		//Posibilidades de victoria para cada jugador
		//ToString: para pasar una variable que no es string a string
		//Jugador 1: X, Jugador 2: O
		void score()
		{
			//jugador 1 
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::Gray;
			    btnTic2->BackColor = System::Drawing::Color::Gray;
				btnTic3->BackColor = System::Drawing::Color::Gray;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False(); 
			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::Green;
				btnTic5->BackColor = System::Drawing::Color::Green;
				btnTic6->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::Azure;
				btnTic8->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::Azure;
					MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plusone = int::Parse(lblPlayer1->Text);
					lblPlayer1->Text = Convert::ToString(plusone + 1);
					Enable_False();
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::SandyBrown;
				btnTic5->BackColor = System::Drawing::Color::SandyBrown;
				btnTic8->BackColor = System::Drawing::Color::SandyBrown;
				MessageBox::Show("El ganador es el jugador 1", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer1->Text);
				lblPlayer1->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			
			//jugador 2

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic2->BackColor = System::Drawing::Color::AliceBlue;
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);  
				Enable_False();
			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::LemonChiffon;
				btnTic4->BackColor = System::Drawing::Color::LemonChiffon;
				btnTic7->BackColor = System::Drawing::Color::LemonChiffon;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::BlueViolet;
				btnTic5->BackColor = System::Drawing::Color::BlueViolet;
				btnTic9->BackColor = System::Drawing::Color::BlueViolet;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::NavajoWhite;
				btnTic5->BackColor = System::Drawing::Color::NavajoWhite;
				btnTic7->BackColor = System::Drawing::Color::NavajoWhite;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::SandyBrown;
				btnTic5->BackColor = System::Drawing::Color::SandyBrown;
				btnTic8->BackColor = System::Drawing::Color::SandyBrown;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::SeaGreen;
				btnTic6->BackColor = System::Drawing::Color::SeaGreen;
				btnTic9->BackColor = System::Drawing::Color::SeaGreen;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic6->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::DarkBlue;
				btnTic8->BackColor = System::Drawing::Color::DarkBlue;
				btnTic9->BackColor = System::Drawing::Color::DarkBlue;
				MessageBox::Show("El ganador es el jugador 2", "En Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayer2->Text);
				lblPlayer2->Text = Convert::ToString(plusone + 1);
				Enable_False(); 
			}

		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

//Al dar click, que se cumplan las siguientes condiciones
//Si el botón está vacío se le agrega 'X' sino 'O'

private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic1->Text = "X";
		checker = true;

	}

	else {
		btnTic1->Text = "O";
		checker = false;
	}
	score();
	btnTic1->Enabled = false;
}

private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic2->Text = "X";
		checker = true;

	}

	else {
		btnTic2->Text = "O";
		checker = false;
	}
	score();
	btnTic2->Enabled = false;
}

private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic3->Text = "X";
		checker = true;

	}

	else {
		btnTic3->Text = "O";
		checker = false;
	}
	score();
	btnTic3->Enabled = false;
}

private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic4->Text = "X";
		checker = true;

	}

	else {
		btnTic4->Text = "O";
		checker = false;
	}
	score();
	btnTic4->Enabled = false;
}

private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic5->Text = "X";
		checker = true;

	}

	else {
		btnTic5->Text = "O";
		checker = false;
	}
	score();
	btnTic5->Enabled = false;
}

private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic6->Text = "X";
		checker = true;

	}

	else {
		btnTic6->Text = "O";
		checker = false;
	}
	score();
	btnTic6->Enabled = false;
}

private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic7->Text = "X";
		checker = true;

	}

	else {
		btnTic7->Text = "O";
		checker = false;
	}
	score();
	btnTic7->Enabled = false;
}

private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic8->Text = "X";
		checker = true;

	}

	else {
		btnTic8->Text = "O";
		checker = false;
	}
	score();
	btnTic8->Enabled = false;
}

private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		btnTic9->Text = "X";
		checker = true;

	}

	else {
		btnTic9->Text = "O";
		checker = false;
	}
	score();
	btnTic9->Enabled = false;
}

//A la hora de dar click a reset, el contador, para cada jugador se mantiene pero, el tablero vuelve a su estado inicial
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	btnNewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

}

//El contador se reinicia y el juego se prepara para iniciar
private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {  
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true; 

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	lblPlayer1->Text ="0";
	lblPlayer2->Text = "0";

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
}
};
}
