#pragma once


namespace FastFoodChooser
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary> 
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class Form1 : public System::Windows::Forms::Form
	{	
	public:
		Form1(void)
		{
			InitializeComponent();
		}
  
	protected:
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}
	private: System::Windows::Forms::TextBox *  textBox1;
	private: System::Windows::Forms::Button *  button1;
	private: System::Windows::Forms::Button *  button2;
	private: System::Windows::Forms::Label *  label1;
	private: System::Random * int_random;  // Create a random number.

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container * components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Resources::ResourceManager *  resources = new System::Resources::ResourceManager(__typeof(FastFoodChooser::Form1));
			this->textBox1 = new System::Windows::Forms::TextBox();
			this->button1 = new System::Windows::Forms::Button();
			this->button2 = new System::Windows::Forms::Button();
			this->label1 = new System::Windows::Forms::Label();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 24);
			this->textBox1->Name = S"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = S"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 48);
			this->button1->Name = S"button1";
			this->button1->Size = System::Drawing::Size(56, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = S"Go!";
			this->button1->Click += new System::EventHandler(this, button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(72, 48);
			this->button2->Name = S"button2";
			this->button2->Size = System::Drawing::Size(56, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = S"Exit";
			this->button2->Click += new System::EventHandler(this, button2_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(8, 8);
			this->label1->Name = S"label1";
			this->label1->Size = System::Drawing::Size(128, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = S"Restaurant Name:";
			// 
			// Form1
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(136, 76);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (__try_cast<System::Drawing::Icon *  >(resources->GetObject(S"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = S"Form1";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"Fast Food Chooser";
			this->Load += new System::EventHandler(this, Form1_Load);
			this->ResumeLayout(false);

		}	
	private: System::Void button2_Click(System::Object *  sender, System::EventArgs *  e)
			 {
				 Application::Exit(); // Exit the application.
			 }

	private: System::Void button1_Click(System::Object *  sender, System::EventArgs *  e)
			 {
                int random_integer; // Container for output of int_random.

				random_integer = int_random->Next( 21 ) + 1; // Set random_integer to a random number.
				textBox1->Text = "Choosing..."; // Set textbox test to Choosing... Unless this is ran on a slow computer this will never be seen.

				// Set textbox text to the appropriate text depending on random number.
				switch ( random_integer ) 
				{
				case 1:
					textBox1->Text = "Arby\'s";
					break;
				case 2:
					textBox1->Text = "Burger King";
					break;
				case 3:
					textBox1->Text = "Carl\'s Jr.";
					break;
				case 4:
					textBox1->Text = "Chipotle Mexiacan Grill";
					break;
				case 5:
					textBox1->Text = "Church\'s Chicken";
					break;
				case 6:
					textBox1->Text = "Dairy Queen";
					break;
				case 7:
					textBox1->Text = "Domino's Pizza";
					break;
				case 8:
					textBox1->Text = "Hogi Yogi";
					break;
				case 9:
					textBox1->Text = "Jack in the Box";
					break;
				case 10:
					textBox1->Text = "Little Caesars Pizza";
					break;
				case 11:
					textBox1->Text = "Long John Silver\'s";
					break;
				case 12:
					textBox1->Text = "McDonald\'s";
					break;
				case 13:
					textBox1->Text = "Papa John\'s";
					break;
				case 14:
					textBox1->Text = "Pizza Hut";
					break;
				case 15:
					textBox1->Text = "Popeye\'s Chicken and Biscuits";
					break;
				case 16:
					textBox1->Text = "Rally\'s Drive-In";
					break;
				case 17:
					textBox1->Text = "Sonic Drive-In";
					break;
				case 18:
					textBox1->Text = "Subway";
					break;
				case 19:
					textBox1->Text = "Taco Bell";
					break;
				case 20:
					textBox1->Text = "Wendy\'s";
					break;
				case 21:
					textBox1->Text = "Whataburger";
					break;
				default:
					textBox1->Text = "Try again";  // default text to use if random_integer is out of range.  should never see it.
					break;
				}
			 }

	private: System::Void Form1_Load(System::Object *  sender, System::EventArgs *  e)
			 {
				 int_random = new System::Random(); // initialize random number.
			 }

};
}
