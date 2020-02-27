#pragma once
//#include "stdafx.h"
#include "Register.h"
namespace Deliverable10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Loginscreen
	/// </summary>
	public ref class Loginscreen : public System::Windows::Forms::Form
	{
	public:
		Loginscreen(void)
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
		~Loginscreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			this->label1->Click += gcnew System::EventHandler(this, &Loginscreen::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Loginscreen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Create account";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Loginscreen::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Forgot Password";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Loginscreen::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(195, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Loginscreen::button4_Click);
			// 
			// Loginscreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Loginscreen";
			this->Text = L"Loginscreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String^ constring = L"datasource= 127.0.0.1; port = 3306; username= root; password= brainwavE44";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from names.customers where Name='" + this->textBox1->Text + "'and Password='" + this->textBox2->Text + "';", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			int count = 0;
			while (myReader->Read())
			{
				count = count + 1;
			}

			if (count == 1)
			{
				MessageBox::Show("Username and Password are correct");
				System::Diagnostics::Process::Start("IExplore.exe", "https://ifrazahmed11.wixsite.com/p2pcar");
			}
			else if (count > 1)
			{
				MessageBox::Show("Duplicate password and username");
			}
			else
			{
				MessageBox::Show("Username and password is incorrect");
			}
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
			String ^ str = textBox1->Text;
			MessageBox::Show(str);
			label1->Text = str;
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) \
{
	//this->Hide();
	//Register^ L2 = gcnew Register();
	//L2 -> ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Application::Exit();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("That's Unfortunate");
}
};
}
