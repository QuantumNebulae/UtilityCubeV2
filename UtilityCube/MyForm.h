#include <Windows.h>
#include <tchar.h>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <cmath>
#include <vector>

#pragma once


namespace UtilityCube {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  Mode1;
	private: System::Windows::Forms::RadioButton^  Mode2;
	private: System::Windows::Forms::RadioButton^  Mode3;
	public: System::Windows::Forms::RadioButton^  Mode4;
	private:

	private: System::Windows::Forms::RadioButton^  Mode5;
	protected:

	protected:




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Input1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Input2;
	private: System::Windows::Forms::TextBox^  Input4;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Input3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Output;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  GuideBox;


	private: System::Windows::Forms::Button^  Submit;
	private: System::Windows::Forms::RadioButton^  Mode6;


	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Mode1 = (gcnew System::Windows::Forms::RadioButton());
			this->Mode2 = (gcnew System::Windows::Forms::RadioButton());
			this->Mode3 = (gcnew System::Windows::Forms::RadioButton());
			this->Mode4 = (gcnew System::Windows::Forms::RadioButton());
			this->Mode5 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Input1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Input2 = (gcnew System::Windows::Forms::TextBox());
			this->Input4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Input3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Mode6 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->GuideBox = (gcnew System::Windows::Forms::TextBox());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Mode1
			// 
			this->Mode1->AutoSize = true;
			this->Mode1->Location = System::Drawing::Point(18, 33);
			this->Mode1->Name = L"Mode1";
			this->Mode1->Size = System::Drawing::Size(176, 22);
			this->Mode1->TabIndex = 0;
			this->Mode1->TabStop = true;
			this->Mode1->Text = L"Molar Mass Calculator";
			this->Mode1->UseVisualStyleBackColor = true;
			this->Mode1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// Mode2
			// 
			this->Mode2->AutoSize = true;
			this->Mode2->Location = System::Drawing::Point(18, 61);
			this->Mode2->Name = L"Mode2";
			this->Mode2->Size = System::Drawing::Size(163, 22);
			this->Mode2->TabIndex = 1;
			this->Mode2->TabStop = true;
			this->Mode2->Text = L"Stoichiometry Solver";
			this->Mode2->UseVisualStyleBackColor = true;
			this->Mode2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// Mode3
			// 
			this->Mode3->AutoSize = true;
			this->Mode3->Location = System::Drawing::Point(18, 89);
			this->Mode3->Name = L"Mode3";
			this->Mode3->Size = System::Drawing::Size(238, 22);
			this->Mode3->TabIndex = 2;
			this->Mode3->TabStop = true;
			this->Mode3->Text = L"Permutations and Combinations";
			this->Mode3->UseVisualStyleBackColor = true;
			this->Mode3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// Mode4
			// 
			this->Mode4->AutoSize = true;
			this->Mode4->Location = System::Drawing::Point(18, 117);
			this->Mode4->Name = L"Mode4";
			this->Mode4->Size = System::Drawing::Size(109, 22);
			this->Mode4->TabIndex = 3;
			this->Mode4->TabStop = true;
			this->Mode4->Text = L"Find Factors";
			this->Mode4->UseVisualStyleBackColor = true;
			this->Mode4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// Mode5
			// 
			this->Mode5->AutoSize = true;
			this->Mode5->Location = System::Drawing::Point(18, 145);
			this->Mode5->Name = L"Mode5";
			this->Mode5->Size = System::Drawing::Size(198, 22);
			this->Mode5->TabIndex = 4;
			this->Mode5->TabStop = true;
			this->Mode5->Text = L"Quadratic Equation Solver";
			this->Mode5->UseVisualStyleBackColor = true;
			this->Mode5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Input 1:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Input1
			// 
			this->Input1->Location = System::Drawing::Point(16, 35);
			this->Input1->Name = L"Input1";
			this->Input1->Size = System::Drawing::Size(401, 24);
			this->Input1->TabIndex = 6;
			this->Input1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Input 2:";
			// 
			// Input2
			// 
			this->Input2->Location = System::Drawing::Point(16, 93);
			this->Input2->Name = L"Input2";
			this->Input2->Size = System::Drawing::Size(401, 24);
			this->Input2->TabIndex = 8;
			this->Input2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// Input4
			// 
			this->Input4->Location = System::Drawing::Point(16, 213);
			this->Input4->Name = L"Input4";
			this->Input4->Size = System::Drawing::Size(401, 24);
			this->Input4->TabIndex = 12;
			this->Input4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Input 3:";
			// 
			// Input3
			// 
			this->Input3->Location = System::Drawing::Point(16, 155);
			this->Input3->Name = L"Input3";
			this->Input3->Size = System::Drawing::Size(401, 24);
			this->Input3->TabIndex = 10;
			this->Input3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Input 4:";
			// 
			// Output
			// 
			this->Output->Location = System::Drawing::Point(512, 39);
			this->Output->Multiline = true;
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->Size = System::Drawing::Size(400, 175);
			this->Output->TabIndex = 14;
			this->Output->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(509, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Output:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Mode6);
			this->groupBox1->Controls->Add(this->Mode2);
			this->groupBox1->Controls->Add(this->Mode1);
			this->groupBox1->Controls->Add(this->Mode3);
			this->groupBox1->Controls->Add(this->Mode4);
			this->groupBox1->Controls->Add(this->Mode5);
			this->groupBox1->Location = System::Drawing::Point(146, 283);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(271, 205);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Utility Cube Mode";
			// 
			// Mode6
			// 
			this->Mode6->AutoSize = true;
			this->Mode6->Location = System::Drawing::Point(18, 173);
			this->Mode6->Name = L"Mode6";
			this->Mode6->Size = System::Drawing::Size(105, 22);
			this->Mode6->TabIndex = 5;
			this->Mode6->TabStop = true;
			this->Mode6->Text = L"Tic Tac Toe";
			this->Mode6->UseVisualStyleBackColor = true;
			this->Mode6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Mode6_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(509, 275);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Guide:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// GuideBox
			// 
			this->GuideBox->Location = System::Drawing::Point(512, 296);
			this->GuideBox->Multiline = true;
			this->GuideBox->Name = L"GuideBox";
			this->GuideBox->ReadOnly = true;
			this->GuideBox->Size = System::Drawing::Size(400, 192);
			this->GuideBox->TabIndex = 18;
			this->GuideBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// Submit
			// 
			this->Submit->Location = System::Drawing::Point(16, 262);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(99, 31);
			this->Submit->TabIndex = 20;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = true;
			this->Submit->Click += gcnew System::EventHandler(this, &MyForm::Submit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1000, 525);
			this->Controls->Add(this->Submit);
			this->Controls->Add(this->GuideBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Input4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Input3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Input2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Input1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L" Utility Cube V3.1.4";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		VOID startup(LPCTSTR lpApplicationName)
		{
			// additional information
			STARTUPINFO si;
			PROCESS_INFORMATION pi;

			// set the size of the structures
			ZeroMemory(&si, sizeof(si));
			si.cb = sizeof(si);
			ZeroMemory(&pi, sizeof(pi));

			// start the program up
			CreateProcess(lpApplicationName,   // the path
				NULL,        // Command line
				NULL,           // Process handle not inheritable
				NULL,           // Thread handle not inheritable
				FALSE,          // Set handle inheritance to FALSE
				0,              // No creation flags
				NULL,           // Use parent's environment block
				NULL,           // Use parent's starting directory 
				&si,            // Pointer to STARTUPINFO structure
				&pi);           // Pointer to PROCESS_INFORMATION structure
			// Close process and thread handles. 
			CloseHandle(pi.hProcess);
			CloseHandle(pi.hThread);
		}


		//Variables
		int mode; // 1 - Molar Mass, 2 - Stoichiometry, 3 - Chemical Equation, 4 - Linear System solver, 5 - Quadratic equation
		String^ input1;
		String^ input2;
		String^ input3;
		String^ input4;

		//Atomic Mass Values
		double Hydrogen = 1.008;
		double Helium = 4.002602;
		double Lithium = 6.94;
		double Beryllium = 9.0121831;
		double Boron = 10.81;
		double Carbon = 12.011;
		double Nitrogen = 14.007;
		double Oxygen = 15.999;
		double Fluorine = 18.998403163;
		double Neon = 20.1797;
		double Sodium = 22.98976928;
		double Magnesium = 24.305;
		double Aluminium = 26.9815385;
		double Silicon = 28.085;
		double Phosphorus = 30.973761998;
		double Sulfur = 32.06;
		double Chlorine = 35.45;
		double Argon = 39.948;
		double Potassium = 39.0983;
		double Calcium = 40.078;
		double Scandium = 44.955908;
		double Titanium = 47.867;
		double Vanadium = 50.9415;
		double Chromium = 55.9961;
		double Manganese = 54.938044;
		double Iron = 55.845;
		double Cobalt = 58.933194;
		double Nickel = 58.6934;
		double Copper = 63.546;
		double Zinc = 65.38;
		double Gallium = 69.723;
		double Germanium = 72.630;
		double Arsenic = 74.921595;
		double Selenium = 78.971;
		double Bromine = 79.904;
		double Krypton = 83.798;
		double Rubidium = 85.4678;
		double Strontium = 87.62;
		double Yttrium = 88.90584;
		double Zirconium = 91.224;
		double Niobium = 92.90637;
		double Molybdenum = 95.95;
		double Technetium = 98;
		double Ruthenium = 101.07;
		double Rhodium = 102.90550;
		double Palladium = 106.42;
		double Silver = 107.8682;
		double Cadmium = 112.414;
		double Indium = 114.818;
		double Tin = 118.710;
		double Antimony = 121.760;
		double Tellurium = 127.60;
		double Iodine = 126.90447;
		double Xenon = 131.293;
		double Cesium = 132.90545196;
		double Barium = 137.327;
		double Lanthanum = 138.90547;
		double Cerium = 140.116;
		double Praseodymium = 140.90766;
		double Neodymium = 144.242;
		double Promethium = 145;
		double Samarium = 150.36;
		double Europium = 151.964;
		double Gadolinium = 157.25;
		double Terbium = 158.92535;
		double Dysprosium = 162.500;
		double Holmium = 164.93033;
		double Erbium = 167.259;
		double Thulium = 168.93422;
		double Ytterbium = 173.045;
		double Lutetium = 174.9668;
		double Hafnium = 178.49;
		double Tantalum = 180.94788;
		double Tungsten = 183.84;
		double Rhenium = 186.207;
		double Osmium = 190.23;
		double Iridium = 192.217;
		double Platinum = 195.084;
		double Gold = 196.966569;
		double Mercury = 200.592;
		double Thallium = 204.38;
		double Lead = 207.2;
		double Bismuth = 208.98040;
		double Polonium = 209;
		double Astatine = 210;
		double Radon = 222;
		double Francium = 223;
		double Radium = 226;
		double Actinium = 227;
		double Thorium = 232.0377;
		double Protactinium = 231.03588;
		double Uranium = 238.02891;
		double Neptunium = 237;
		double Plutonium = 244;
		double Americium = 243;
		double Curium = 247;
		double Berkelium = 247;
		double Californium = 251;
		double Einsteinium = 252;
		double Fermium = 257;
		double Mendelevium = 258;
		double Nobelium = 259;
		double Lawrencium = 266;
		double Rutherfordium = 267;
		double Dubnium = 268;
		double Seaborgium = 269;
		double Bohrium = 270;
		double Hassium = 269;
		double Meitnerium = 278;
		double Darmstadtium = 281;
		double Roentgenium = 285;
		double Copernicium = 285;
		double Ununtrium = 286;
		double Flerovium = 289;
		double Ununpentium = 289;
		double Livermorium = 293;
		double Ununseptium = 294;
		double Ununoctium = 294;

		//End of Atomic Mass Values
		//End of Variables

		//Functions

		double getElements(std::string molecule) {
			array<double>^ atomicMass = gcnew array<double>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
			array<String^>^ elements = gcnew array<String^>{"NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL"};
			array<int>^ coefficients = gcnew array<int>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

			int firstElementPos = 0;
			int elementCount = 0;
			int currElementPos = 0;
			char currLetter;
			int prevElementPos = 0;
			int nextElementPos = 0;
			int polyatomicStart = 0;
			int polyatomicEnd = 0;
			int polySub = 0;

			for (unsigned int c = 0; c < molecule.length(); c++) {
				currLetter = molecule.at(c);
				if ((65 <= currLetter) && (currLetter <= 90) && (currLetter != 32)) {
					elementCount++;
				}
			}
			//Counts elements for number of iterations of loop below

			for (unsigned int c = 0; c < molecule.length(); c++) {
				currLetter = molecule.at(c);
				if ((65 <= currLetter) && (currLetter <= 90) && (currLetter != 32)) {
					firstElementPos = c;
					break;
				}
			}
			//Finds first element

			for (int o = 1; o <= elementCount; o++) {
				
				//Console::WriteLine("iteration: " + Convert::ToString(o));

				//Gets polyatomic start and end braces
				for (unsigned int k = prevElementPos; k < molecule.length(); k++) {
					currLetter = molecule.at(k);
					if (currLetter == 40) {
						polyatomicStart = k;
					}
					if (currLetter == 41) {
						polyatomicEnd = k;
						break;
					}
				}

				// Determines position of the current element in the string
				if (o == 1) {

					for (unsigned int l = prevElementPos; l < molecule.length(); l++) {
						currLetter = molecule.at(l);
						if ((65 <= currLetter) && (currLetter <= 90)) {
							currElementPos = l;
							break;

						
						}
					}

				}
				//Console::WriteLine("currElementPos = " + Convert::ToString(currElementPos));

				// Finds the next elements position in the string
				for (unsigned int p = currElementPos + 1; p < molecule.length(); p++) {

					currLetter = molecule.at(p);
					if (((65 <= currLetter) && (currLetter <= 90)) | (currLetter == 41)) {
						nextElementPos = p;
						//Console::Writeline("nextElementPos = " + Convert::ToString(nextElementPos));
						break;
					}
				}

				//Gets polyatomics coefficient / multiplier
				if ((polySub == 0)) {
					for (unsigned int t = polyatomicEnd; t < molecule.length(); t++) {
						currLetter = molecule.at(t);
						if ((48 <= currLetter) && (currLetter <= 57)) {
							int sub = int::Parse(Convert::ToString(Convert::ToInt32(polySub)) + Convert::ToString(Convert::ToChar(currLetter)));
							polySub = sub;
						}
					}
				}
				//Console::Writeline("polySub = " + Convert::ToString(polySub));
				
				//Gets elements symbol and their coefficients
				if (o == 1) {
					if ((elementCount == 1) && (molecule.length() > 1)) {
						nextElementPos = molecule.length() - 1;
					}
					if (elementCount == 1) {
						nextElementPos++;
					}
					for (int i = firstElementPos; i < nextElementPos; i++) {

						currLetter = molecule.at(i);

						if ((65 <= currLetter) && (currLetter <= 90)) {
							elements[o] = Convert::ToString(Convert::ToChar(currLetter)); // Finds uppercase letters
							//coefficients[o] = 0;
						}

						if ((97 <= currLetter) && (currLetter <= 122)) {
							elements[o] += Convert::ToString(Convert::ToChar(currLetter)); // Finds lowercase letters
						}

						if ((48 <= currLetter) && (currLetter <= 57)) {
							int sub = int::Parse(Convert::ToString(Convert::ToInt32(coefficients[o])) + Convert::ToString(Convert::ToChar(currLetter)));
							coefficients[o] = sub;
						}

						if ((polyatomicStart < currElementPos) && (currElementPos < polyatomicEnd) && (i == nextElementPos - 1)) {
							if (coefficients[o] == 0) {
								coefficients[o] = polySub;
							}
							else {
								coefficients[o] *= polySub;
							}
						}

					}
				}
				if (o != 1) {
					if (o != elementCount) {
						for (int i = currElementPos; i < nextElementPos; i++) {

							currLetter = molecule.at(i);

							if ((65 <= currLetter) && (currLetter <= 90)) {
								elements[o] = Convert::ToString(Convert::ToChar(currLetter)); // Finds uppercase letters
							}

							if ((97 <= currLetter) && (currLetter <= 122)) {
								elements[o] += Convert::ToString(Convert::ToChar(currLetter)); // Finds lowercase letters
							}

							if ((48 <= currLetter) && (currLetter <= 57)) {
								int sub = int::Parse(Convert::ToString(Convert::ToInt32(coefficients[o])) + Convert::ToString(Convert::ToChar(currLetter)));
								coefficients[o] = sub;

								//Console::Writeline("1: Testing!!!");

								/*Console::Write("\npolyatomicStart < currElementPos: ");
								if (polyatomicStart < currElementPos) { Console::Write("TRUE"); }
								else { Console::Write("FALSE"); }
								Console::Write("\ncurrElementPos < polyatomicEnd: ");
								if (currElementPos < polyatomicEnd) { Console::Write("TRUE"); }
								else { Console::Write("FALSE"); }
								Console::Write("\ni == nextElementPos - 1: ");
								if (i == nextElementPos - 1) { Console::Write("TRUE\n\n"); }
								else { Console::Write("FALSE\n\n"); }*/

								if ((i < currElementPos) && (i < polyatomicEnd) && (i == nextElementPos - 1)) {
									if (coefficients[o] == 0) {
										coefficients[o] = polySub;
									}
									else {
										coefficients[o] *= polySub;
									}
								}
							}

							if ((polyatomicStart < currElementPos) && (currElementPos < polyatomicEnd) && (i == nextElementPos - 1)) {
								if (coefficients[o] == 0) {
									coefficients[o] = polySub;
								}
								else {
									coefficients[o] *= polySub;
								}
							}

						}
					}
					if (o == elementCount) {
						if ((molecule.length() - 1 != polyatomicEnd) && (polyatomicEnd != 0)) {
							nextElementPos = polyatomicEnd;
						}
						else {
							nextElementPos = molecule.length();
						}
						for (int i = currElementPos; i < nextElementPos; i++) {

							currLetter = molecule.at(i);

							if ((65 <= currLetter) && (currLetter <= 90)) {
								elements[o] = Convert::ToString(Convert::ToChar(currLetter)); // Finds uppercase letters
							}

							if ((97 <= currLetter) && (currLetter <= 122)) {
								elements[o] += Convert::ToString(Convert::ToChar(currLetter)); // Finds lowercase letters
							}

							if ((48 <= currLetter) && (currLetter <= 57)) {
								int sub = int::Parse(Convert::ToString(Convert::ToInt32(coefficients[o])) + Convert::ToString(Convert::ToChar(currLetter)));
								coefficients[o] = sub;
							}

							if ((polyatomicStart < currElementPos) && (currElementPos < polyatomicEnd) && (i == nextElementPos - 1)) {
								if (coefficients[o] == 0) {
									coefficients[o] = polySub;
								}
								else {
									coefficients[o] *= polySub;
								}
							}

						}
					}
				}

				//Assigning values for next loop
				prevElementPos = currElementPos; 
				currElementPos = nextElementPos;

			}
			//Finds elements and coefficients

			//Replace subscipts of 0 with 1s
			for (int i = 1; i < elementCount + 1; i++) {
				if (coefficients[i] == 0) {
					coefficients[i] = 1;
				}
			}

			//Debug code
			for (int i = 1; i < elementCount + 1; i++) {
				//Console::Writeline("elements[" + Convert::ToString(i) + "] = " + Convert::ToString(elements[i]));
				//Console::Writeline("coefficients[" + Convert::ToString(i) + "] = " + Convert::ToString(coefficients[i]));
			}

			//Calculating Mass and Outputting
			for (int e = 1; e < elementCount + 1; e++) {
				if (elements[e] == "H") {
					atomicMass[e] = Hydrogen;
				}
				if (elements[e] == "He") {
					atomicMass[e] = Helium;
				}
				if (elements[e] == "Li") {
					atomicMass[e] = Lithium;
				}
				if (elements[e] == "Be") {
					atomicMass[e] = Beryllium;
				}
				if (elements[e] == "B") {
					atomicMass[e] = Boron;
				}
				if (elements[e] == "C") {
					atomicMass[e] = Carbon;
				}
				if (elements[e] == "N") {
					atomicMass[e] = Nitrogen;
				}
				if (elements[e] == "O") {
					atomicMass[e] = Oxygen;
				}
				if (elements[e] == "F") {
					atomicMass[e] = Fluorine;
				}
				if (elements[e] == "Ne") {
					atomicMass[e] = Neon;
				}
				if (elements[e] == "Na") {
					atomicMass[e] = Sodium;
				}
				if (elements[e] == "Mg") {
					atomicMass[e] = Magnesium;
				}
				if (elements[e] == "Al") {
					atomicMass[e] = Aluminium;
				}
				if (elements[e] == "Si") {
					atomicMass[e] = Silicon;
				}
				if (elements[e] == "P") {
					atomicMass[e] = Phosphorus;
				}
				if (elements[e] == "S") {
					atomicMass[e] = Sulfur;
				}
				if (elements[e] == "Cl") {
					atomicMass[e] = Chlorine;
				}
				if (elements[e] == "Ar") {
					atomicMass[e] = Argon;
				}
				if (elements[e] == "K") {
					atomicMass[e] = Potassium;
				}
				if (elements[e] == "Ca") {
					atomicMass[e] = Calcium;
				}
				if (elements[e] == "Sc") {
					atomicMass[e] = Scandium;
				}
				if (elements[e] == "Ti") {
					atomicMass[e] = Titanium;
				}
				if (elements[e] == "V") {
					atomicMass[e] = Vanadium;
				}
				if (elements[e] == "Cr") {
					atomicMass[e] = Chromium;
				}
				if (elements[e] == "Mn") {
					atomicMass[e] = Manganese;
				}
				if (elements[e] == "Fe") {
					atomicMass[e] = Iron;
				}
				if (elements[e] == "Co") {
					atomicMass[e] = Cobalt;
				}
				if (elements[e] == "Ni") {
					atomicMass[e] = Nickel;
				}
				if (elements[e] == "Cu") {
					atomicMass[e] = Copper;
				}
				if (elements[e] == "Zn") {
					atomicMass[e] = Zinc;
				}
				if (elements[e] == "Ga") {
					atomicMass[e] = Gallium;
				}
				if (elements[e] == "Ge") {
					atomicMass[e] = Germanium;
				}
				if (elements[e] == "As") {
					atomicMass[e] = Arsenic;
				}
				if (elements[e] == "Se") {
					atomicMass[e] = Selenium;
				}
				if (elements[e] == "Br") {
					atomicMass[e] = Bromine;
				}
				if (elements[e] == "Kr") {
					atomicMass[e] = Krypton;
				}
				if (elements[e] == "Rb") {
					atomicMass[e] = Rubidium;
				}
				if (elements[e] == "Sr") {
					atomicMass[e] = Strontium;
				}
				if (elements[e] == "Y") {
					atomicMass[e] = Yttrium;
				}
				if (elements[e] == "Zr") {
					atomicMass[e] = Zirconium;
				}
				if (elements[e] == "Nb") {
					atomicMass[e] = Niobium;
				}
				if (elements[e] == "Mo") {
					atomicMass[e] = Molybdenum;
				}
				if (elements[e] == "Tc") {
					atomicMass[e] = Technetium;
				}
				if (elements[e] == "Ru") {
					atomicMass[e] = Ruthenium;
				}
				if (elements[e] == "Rh") {
					atomicMass[e] = Rhodium;
				}
				if (elements[e] == "Pd") {
					atomicMass[e] = Palladium;
				}
				if (elements[e] == "Ag") {
					atomicMass[e] = Silver;
				}
				if (elements[e] == "Cd") {
					atomicMass[e] = Cadmium;
				}
				if (elements[e] == "In") {
					atomicMass[e] = Indium;
				}
				if (elements[e] == "Sn") {
					atomicMass[e] = Tin;
				}
				if (elements[e] == "Sb") {
					atomicMass[e] = Antimony;
				}
				if (elements[e] == "Te") {
					atomicMass[e] = Tellurium;
				}
				if (elements[e] == "I") {
					atomicMass[e] = Iodine;
				}
				if (elements[e] == "Xe") {
					atomicMass[e] = Xenon;
				}
				if (elements[e] == "Cs") {
					atomicMass[e] = Cesium;
				}
				if (elements[e] == "Ba") {
					atomicMass[e] = Barium;
				}
				if (elements[e] == "Hf") {
					atomicMass[e] = Hafnium;
				}
				if (elements[e] == "Ta") {
					atomicMass[e] = Tantalum;
				}
				if (elements[e] == "W") {
					atomicMass[e] = Tungsten;
				}
				if (elements[e] == "Re") {
					atomicMass[e] = Rhenium;
				}
				if (elements[e] == "Os") {
					atomicMass[e] = Osmium;
				}
				if (elements[e] == "Ir") {
					atomicMass[e] = Iridium;
				}
				if (elements[e] == "Pt") {
					atomicMass[e] = Platinum;
				}
				if (elements[e] == "Au") {
					atomicMass[e] = Gold;
				}
				if (elements[e] == "Hg") {
					atomicMass[e] = Mercury;
				}
				if (elements[e] == "Tl") {
					atomicMass[e] = Thallium;
				}
				if (elements[e] == "Pb") {
					atomicMass[e] = Lead;
				}
				if (elements[e] == "Bi") {
					atomicMass[e] = Bismuth;
				}
				if (elements[e] == "Po") {
					atomicMass[e] = Polonium;
				}
				if (elements[e] == "At") {
					atomicMass[e] = Astatine;
				}
				if (elements[e] == "Rn") {
					atomicMass[e] = Radon;
				}
				if (elements[e] == "Fr") {
					atomicMass[e] = Francium;
				}
				if (elements[e] == "Ra") {
					atomicMass[e] = Radium;
				}
				if (elements[e] == "Rf") {
					atomicMass[e] = Rutherfordium;
				}
				if (elements[e] == "Db") {
					atomicMass[e] = Dubnium;
				}
				if (elements[e] == "Sg") {
					atomicMass[e] = Seaborgium;
				}
				if (elements[e] == "Bh") {
					atomicMass[e] = Bohrium;
				}
				if (elements[e] == "Hs") {
					atomicMass[e] = Hassium;
				}
				if (elements[e] == "Mt") {
					atomicMass[e] = Meitnerium;
				}
				if (elements[e] == "Ds") {
					atomicMass[e] = Darmstadtium;
				}
				if (elements[e] == "Rg") {
					atomicMass[e] = Roentgenium;
				}
				if (elements[e] == "Cn") {
					atomicMass[e] = Copernicium;
				}
				if (elements[e] == "Uut") {
					atomicMass[e] = Ununtrium;
				}
				if (elements[e] == "Fl") {
					atomicMass[e] = Flerovium;
				}
				if (elements[e] == "Uup") {
					atomicMass[e] = Ununpentium;
				}
				if (elements[e] == "Lv") {
					atomicMass[e] = Livermorium;
				}
				if (elements[e] == "Uuo") {
					atomicMass[e] = Ununoctium;
				}
				if (elements[e] == "La") {
					atomicMass[e] = Lanthanum;
				}
				if (elements[e] == "Ce") {
					atomicMass[e] = Cerium;
				}
				if (elements[e] == "Pr") {
					atomicMass[e] = Praseodymium;
				}
				if (elements[e] == "Nd") {
					atomicMass[e] = Neodymium;
				}
				if (elements[e] == "Pm") {
					atomicMass[e] = Promethium;
				}
				if (elements[e] == "Sm") {
					atomicMass[e] = Samarium;
				}
				if (elements[e] == "Eu") {
					atomicMass[e] = Europium;
				}
				if (elements[e] == "Gd") {
					atomicMass[e] = Gadolinium;
				}
				if (elements[e] == "Tb") {
					atomicMass[e] = Terbium;
				}
				if (elements[e] == "Dy") {
					atomicMass[e] = Dysprosium;
				}
				if (elements[e] == "Ho") {
					atomicMass[e] = Holmium;
				}
				if (elements[e] == "Er") {
					atomicMass[e] = Erbium;
				}
				if (elements[e] == "Tm") {
					atomicMass[e] = Thulium;
				}
				if (elements[e] == "Yb") {
					atomicMass[e] = Ytterbium;
				}
				if (elements[e] == "Lu") {
					atomicMass[e] = Lutetium;
				}
				if (elements[e] == "Ac") {
					atomicMass[e] = Actinium;
				}
				if (elements[e] == "Th") {
					atomicMass[e] = Thorium;
				}
				if (elements[e] == "Pa") {
					atomicMass[e] = Protactinium;
				}
				if (elements[e] == "U") {
					atomicMass[e] = Uranium;
				}
				if (elements[e] == "Np") {
					atomicMass[e] = Neptunium;
				}
				if (elements[e] == "Pu") {
					atomicMass[e] = Plutonium;
				}
				if (elements[e] == "Am") {
					atomicMass[e] = Americium;
				}
				if (elements[e] == "Cm") {
					atomicMass[e] = Curium;
				}
				if (elements[e] == "Bk") {
					atomicMass[e] = Berkelium;
				}
				if (elements[e] == "Cf") {
					atomicMass[e] = Californium;
				}
				if (elements[e] == "Es") {
					atomicMass[e] = Einsteinium;
				}
				if (elements[e] == "Fm") {
					atomicMass[e] = Fermium;
				}
				if (elements[e] == "Md") {
					atomicMass[e] = Mendelevium;
				}
				if (elements[e] == "No") {
					atomicMass[e] = Nobelium;
				}
				if (elements[e] == "Lr") {
					atomicMass[e] = Lawrencium;
				}
				if (elements[e] == "NULL") {
					atomicMass[e] = 0;
				}
			}
			double mass;
			mass = (atomicMass[1] * coefficients[1] + atomicMass[2] * coefficients[2] + atomicMass[3] * coefficients[3] + atomicMass[4] * coefficients[4] + atomicMass[5] * coefficients[5] + atomicMass[6] * coefficients[6] + atomicMass[7] * coefficients[7] + atomicMass[8] * coefficients[8] + atomicMass[9] * coefficients[9] + atomicMass[0] * coefficients[0]);
			return mass;

		}

		int getCoefficients(std::string molecule) {
			char currLetter;
			int moleculeBegin;
			int coefficient;
			int co = 0;
			for (unsigned int i = 0; i < molecule.length(); i++) {
				currLetter = molecule.at(i);
				if ((65 <= currLetter) && (currLetter <= 90)) {
					moleculeBegin = i;
					break;
				}
			}
			for (int i = 0; i < moleculeBegin; i++) {
				currLetter = molecule.at(i);
				if (currLetter != 32) {
					co = int::Parse(Convert::ToString(Convert::ToInt32(co)) + Convert::ToString(Convert::ToChar(currLetter)));
					coefficient = co;
				}
			}
			if ((coefficient == 0) | (coefficient == NULL)) {
				coefficient = 1;
			}
			//Console::Writeline("coefficient = " + Convert::ToString(coefficient));
			return coefficient;
		}

		unsigned long long int factorial(int x) {
			if (x == 0) {
				return 1;
			}
			else {
				return (x == 1 ? x : x * factorial(x - 1));
			}
		}

		String^ factors(int number) {

			std::vector<int> factorsS;
			std::vector<int> factorsL;
			String^ factors = "1, ";
			int f = 0;

			for (int i = 1; i <= sqrt(number); ++i)
			{
				if (number%i == 0) {
					factorsS.push_back(i);
					factorsL.push_back(number / i);

					//Console::Writeline("factorsS[" + Convert::ToString(f) + "] = " + Convert::ToString(factorsS[f]));
					//Console::Writeline("factorsL[" + Convert::ToString(f) + "] = " + Convert::ToString(factorsL[f]));

					f++;
				}
			}
			for (unsigned int i = 1; i < factorsS.size(); i++) {
				factors += factorsS[i] + ", ";
			}
			for (unsigned int i = factorsL.size() - 1; i > 0; i--) {
				if (!(factorsS[i] == factorsL[i])) {
					factors += factorsL[i] + ", ";
				}
			}

			factors += number;
			return (factors);
		}

		bool isPrime(int number) {
			bool prime = 1;
			if (number != 2) {
				for (int p = 2; p <= sqrt(number); p++) {
					if (number % p == 0) {
						prime = 0;
					}
				}
			}
			return prime;
		}

		String^ pFactors(int number) {

			std::vector<int> factorsP; //Prime factors
			String^ pFactors;
			int f = 0;

			do {

				for (int i = 2; i <= sqrt(number); i++) {
					//Console::Writeline("i = " + Convert::ToString(i));
					//Console::Writeline("isPrime(i) = " + Convert::ToString(isPrime(i)));
					//Console::Writeline("number / i = " + Convert::ToString(number / i));
					f = i;
					if ((number % i == 0) && (isPrime(i))) {
						factorsP.push_back(i);
						if (isPrime(number / i)) {
							factorsP.push_back(number / i);
						}
						number /= i;
					}

				}

			} while (!(isPrime(number)));


			for (unsigned int i = 0; i < factorsP.size(); i++) {
				if (i != factorsP.size() - 1) {
					pFactors = pFactors + factorsP[i] + ", ";
				}
				else {
					pFactors = pFactors + factorsP[i];
				}
			}
			return (pFactors);

		}

		//End of Functions
		//////////////////////////////////////////////////////////////////////////////////////////


#pragma endregion

private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 mode = 1;
			 label1->Text = "You Molecule";
			 label2->Text = "Not Required";
			 label3->Text = "Not Required";
			 label4->Text = "Not Required";
			 GuideBox->Text = "Please enter your molecule or compund you would like to find the molar mass of in the first input box. An example would be:" + "\r\n" + "NH3" + "\r\n" + "H2O";

}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 mode = 2;
			 label1->Text = "Limiting Reactant";
			 label2->Text = "Limiting Reactant Quantity";
			 label3->Text = "Limiting Reactant Unit of Measure";
			 label4->Text = "Desired Product";
			 GuideBox->Text = "Please enter the chemical formula of the limiting reactant, the quantity in grams or moles, and the unit of measure for the quanity, along with the desired product from the reaction.";
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 mode = 3;
			 label1->Text = "Number of Elements";
			 label2->Text = "Numbers of Elements to Pick";
			 label3->Text = "Permutation or Combination?";
			 label4->Text = "Not Required";
			 GuideBox->Text = "For the combination equation 'C(n, r)' please enter 'n' and 'r' in their respective boxes.\r\nFor the permutation equation 'nPk' please enter 'n' and 'k' in their respective boxes.\r\nFinally, enter whether you would like to calculate permutations or combinations.";
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 mode = 4;
			 label1->Text = "Number";
			 label2->Text = "Not Required";
			 label3->Text = "Not Required";
			 label4->Text = "Not Required";
			 GuideBox->Text = "Please enter a number that you would like to find the factors of.";
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 mode = 5;
			 label1->Text = "Coefficient of X^2";
			 label2->Text = "Coefficient of X";
			 label3->Text = "Constant Term";
			 label4->Text = "What the quadratic function is equal to";
			 GuideBox->Text = "For a quadratic function in standard form 'ax^2 + bx + c = d'. Enter the values of a, b, c, and d into their respective input boxes.";

}
private: System::Void Mode6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 mode = 6;
			 label1->Text = "Player 1's Name";
			 label2->Text = "Player 1's Marker";
			 label3->Text = "Player 2's Name";
			 label4->Text = "Player 2's Marker";
			 GuideBox->Text = "Insert the required information into the 4 input boxes on the left, and click submit. To play a bot, type in bot as player 2's name. To play a hardbot, type in hardbot as player 2's name.";
}


private: System::Void Submit_Click(System::Object^  sender, System::EventArgs^  e) {
	if (mode == 1) { 
		// Molar Mass
		String^ input1 = Input1->Text;
		//Console::Writeline(input1);
		std::string moleculeString = msclr::interop::marshal_as< std::string >(input1);
		Output->Text = "The mass of your molecule " + Input1->Text + " is: \r\n" + Convert::ToString(getElements(moleculeString)) + " g/mol";
	}
	if (mode == 2) {
		// Stoichimoetry Solver

		if ((Input1->Text->Length != 0) && (Input2->Text->Length != 0) && (Input3->Text->Length != 0) && (Input4->Text->Length != 0)) {
			String^ input1 = Input1->Text;
			std::string moleculeString = msclr::interop::marshal_as< std::string >(input1);
			String^ input2 = Input2->Text;
			std::string qnty = msclr::interop::marshal_as< std::string >(input2);
			String^ input3 = Input3->Text;
			std::string unit = msclr::interop::marshal_as< std::string >(input3);
			String^ input4 = Input4->Text;
			std::string productString = msclr::interop::marshal_as< std::string >(input4);

			double massLimiting = getElements(moleculeString);
			//Console::Writeline("massLimiting = " + Convert::ToString(massLimiting));
			double massProduct = getElements(productString);
			//Console::Writeline("massProduct = " + Convert::ToString(massProduct));
			double coefficientLimiting = getCoefficients(moleculeString);
			//Console::Writeline("coefficientLimiting = " + Convert::ToString(coefficientLimiting));
			double coefficientProduct = getCoefficients(productString);
			//Console::Writeline("coefficientProduct = " + Convert::ToString(coefficientProduct));
			double yMols;
			double yMass;

			if ((unit == "mols") | (unit == "mol") | (unit == "moles") | (unit == "mole") | (unit == "Mols") | (unit == "Mol") | (unit == "Moles") | (unit == "Mole")) {

				yMols = (atof(qnty.c_str()) * (coefficientProduct / coefficientLimiting));
				yMass = (yMols / massProduct);

				//Console::Writeline("yieldMols = " + Convert::ToString(yMols) + " | yieldMass = " + Convert::ToString(yMass));
			}
			if ((unit == "grams") | (unit == "gram") | (unit == "g") | (unit == "Grams") | (unit == "Gram") | (unit == "G")) {

				yMols = ((atof(qnty.c_str()) / massLimiting) * (coefficientProduct / coefficientLimiting));
				yMass = (yMols / massProduct);

				//Console::Writeline("yieldMols = " + Convert::ToString(yMols) + " | yieldMass = " + Convert::ToString(yMass));
			}

			Output->Text = "The yield of " + Input4->Text + " is:\r\n" + Convert::ToString(yMols) + " mols\r\n" + Convert::ToString(yMass) + " grams\r\nWith " + Convert::ToString(Input2->Text) + " " + Convert::ToString(Input3->Text) + " of " + Convert::ToString(Input1->Text);
		}
	}
	if (mode == 3) {
		//Permutations and Combinations
		bool cp = 0;
		unsigned long long int n = 1;
		if (!(Input1->Text->Length == 0)) {
			unsigned long long int n = int::Parse(Input1->Text) % 26;
		}
		unsigned long long int r = 1;
		unsigned long long int k = 1;
		if (Input2->Text->Length == 0) {
			r = n;
			k = n;
		}
		else {
			r = int::Parse(Input2->Text);
			k = int::Parse(Input2->Text);
			if (r > n) {
				int temp = r;
				r = n;
				n = temp;
			}
		}

		if ((Input3->Text == "Combination") | (Input3->Text == "combination") | (Input3->Text == "combine") | (Input3->Text == "Combine") | (Input3->Text == "C") | (Input3->Text == "c")) {
			cp = 0;
		}
		if ((Input3->Text == "Permutation") | (Input3->Text == "permutation") | (Input3->Text == "permute") | (Input3->Text == "Permute") | (Input3->Text == "P") | (Input3->Text == "p")) {
			cp = 1;
		}

		unsigned long long int combinations = (factorial(n) / (factorial(r) * factorial(n - r)));
		unsigned long long int permutations = (factorial(n) / (factorial(n - k)));

		if ((r > n) | (k > n)) {
			Output->Text = "You've entered invalid data, please review your entries and try again.";
		}
		else {
			if (cp == 0) {
				Output->Text = "There are " + Convert::ToString(combinations) + " combinations when you pick " + Convert::ToString(r) + " elements a time from " + Convert::ToString(n) + " total elements.";
			}
			if (cp == 1) {
				Output->Text = "There are " + Convert::ToString(permutations) + " permutations when you pick " + Convert::ToString(k) + " elements a time from " + Convert::ToString(n) + " total elements.";
			}
		}
	
	}
	if (mode == 4) {
		// factors
		unsigned long long int number;
		if (Input1->Text->Length == 0) {
			number = 1;
		}
		else {
			number = int::Parse(Input1->Text);
		}

		if (!(isPrime(number))) {
			Output->Text = "The factors of " + Convert::ToString(number) + " are:\r\n" + factors(number) + "\r\nThe prime factors of " + Convert::ToString(number) + " are:\r\n" + pFactors(number) + ".";
		}
		else {
			Output->Text = "The factors of " + Convert::ToString(number) + " are:\r\n" + factors(number) + "\r\nThe number " + Convert::ToString(number) + " is prime.";
		}
	}
	if (mode == 5) {
		long double a; 
		if (!(Input1->Text->Length == 0)) {
			a = Double::Parse(Input1->Text);
		}
		long double b;
		if (!(Input2->Text->Length == 0)) {
			b = Double::Parse(Input2->Text);
		}
		long double c;
		if (!(Input3->Text->Length == 0) && !(Input4->Text->Length == 0)) {
			c = Double::Parse(Input3->Text) - Double::Parse(Input4->Text);
		}
		double root1;
		double root2;

		if (( b * b - 4 * a * c) >= 0) {
			root1 = (-b + sqrt(b*b - (4 * a*c))) / (2 * a);
			root2 = (-b - sqrt(b*b - (4 * a*c))) / (2 * a);

			if (root1 == root2) {
				Output->Text = "The quadratic function has only one root of order 2:" + "\r\n" + "x = " + Convert::ToString(root1);
			}
			else {
				Output->Text = "The quadratic function has 2 real roots of order 1:" + "\r\n" + "x = " + Convert::ToString(root1) + "\r\n" + "x = " + Convert::ToString(root2);
			}
		}

		if (( b * b - 4 * a * c ) < 0) {
			double realPart = -b / (2 * a);
			double complexPart = sqrt(abs(b * b - 4 * a * c)) / (2 * a);

			String^ rootComplex1 = Convert::ToString(realPart) + " + " + Convert::ToString(complexPart) + "i";
			String^ rootComplex2 = Convert::ToString(realPart) + " - " + Convert::ToString(complexPart) + "i";

			Output->Text = "The quadratic function has 2 complex roots of order 1:" + "\r\n" + "x = " + Convert::ToString(rootComplex1) + "\r\n" + "x = " + Convert::ToString(rootComplex2);

		}

	}
	if (mode == 6) {

		std::string name1 = "Player-1";
		std::string name3 = "Bot";
		std::string name2 = "X";
		std::string name4 = "O";

		if ((Input1->Text->Length != 0) && (Input2->Text->Length != 0) && (Input3->Text->Length != 0) && (Input4->Text->Length != 0)) {

			msclr::interop::marshal_context context;

			input1 = Input1->Text;
			std::string name1 = context.marshal_as<std::string>(input1);

			input2 = Input2->Text;
			std::string name2 = context.marshal_as<std::string>(input2);

			input3 = Input3->Text;
			std::string name3 = context.marshal_as<std::string>(input3);

			input4 = Input4->Text;
			std::string name4 = context.marshal_as<std::string>(input4);

		}

		std::ofstream playerData;
		playerData.open(".\\UtilityCube\\pdata.txt");
		playerData << name1 << std::endl;
		playerData << name3 << std::endl;
		playerData << name2 << std::endl;
		playerData << name4;
		playerData.close();

		Process::Start(".\\UtilityCube\\TTT.exe");
	}
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
