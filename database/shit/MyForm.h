#pragma once

#include <stdlib.h>
#include <msclr\marshal_cppstd.h>
#include "Header.h"
#include <vector>

namespace shit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	begginer be;        // Создаём список

	std::string tostd(System::String^ fstr)
	{
		return msclr::interop::marshal_as<std::string>(fstr);
	}

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void gUpdate() // Обновление таблицы в форме
		{
			dataGridView1->Rows->Clear(); // Чистим таблицу

			auto viki = be.toArrayo(); // Переводим список в массив
			int schet = be.count(); // Считаем количество элементов списка
			
						
			for (int i = 0; i < schet; ++i) { // Загружаем массив в DataGridView
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = gcnew System::String(viki[i][0].c_str());
				dataGridView1->Rows[i]->Cells[1]->Value = gcnew System::String(viki[i][1].c_str());
				dataGridView1->Rows[i]->Cells[2]->Value = gcnew System::String(viki[i][2].c_str());
				dataGridView1->Rows[i]->Cells[3]->Value = gcnew System::String(viki[i][3].c_str());
				dataGridView1->Rows[i]->Cells[4]->Value = gcnew System::String(viki[i][4].c_str());
				dataGridView1->Rows[i]->Cells[5]->Value = gcnew System::String(viki[i][5].c_str());
			}
		}
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(555, 169);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &MyForm::dataGridView1_DoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 143);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Номер рейса\r\n\r\nПункт отправления  \r\n\r\nПункт назначения\r\n\r\nВремя в пути \r\n\r\nТип са"
				L"молета  \r\n\r\nСтоимость билета";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(148, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(148, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(148, 277);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(148, 303);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(174, 20);
			this->textBox5->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(148, 329);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 20);
			this->textBox6->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(362, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 37);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Записать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(362, 277);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 37);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(362, 320);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 37);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Доп";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(420, 321);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 36);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Запуск";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(576, 383);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"I Airlines";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		gUpdate(); // Кнопка обновления
		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox4->Visible = true;
		textBox5->Visible = true;
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		button5->Visible = false;
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((textBox1->Text == "") || (textBox2->Text == "") || (textBox3->Text == "") || (textBox4->Text == "") || (textBox5->Text == "") || (textBox6->Text == ""))
	{
		return; // Проверяем, ввел ли пользователь что-то
	}

	try { Convert::ToInt32(textBox1->Text); } // Проверяем, написан ли номер рейса числами
	catch (...) { return; }
	try { Convert::ToInt32(textBox6->Text); } // и стоимость тоже
	catch (...) { return; }

	if (be.doesElExists(tostd(textBox1->Text))) // Если вдруг есть такой номер рейса то изменяем его
	{
		be.editElement(tostd(textBox1->Text), tostd(textBox1->Text), tostd(textBox2->Text), tostd(textBox3->Text), tostd(textBox4->Text), tostd(textBox5->Text), tostd(textBox6->Text));
	}
	else // Иначе созадем новое
	{
		be.addElement(tostd(textBox1->Text), tostd(textBox2->Text), tostd(textBox3->Text), tostd(textBox4->Text), tostd(textBox5->Text), tostd(textBox6->Text));
	}

	textBox1->Text = ""; // Чистка
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";

	gUpdate(); // Обновление
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") //удаляем данные с определенным номером рейса
	{
		be.deleteElement(tostd(textBox1->Text));
		gUpdate();
	}
}
 private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	   {
		   if ((dataGridView1->SelectedRows->Count > 0) && (dataGridView1->SelectedRows[0]->Cells[0]->Value != nullptr)) // Защита от дураков, вдруг даблклик будет по пустой строке
		   {
			   textBox1->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
			   textBox2->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			   textBox3->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			   textBox4->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
			   textBox5->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
			   textBox6->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		   }
	   }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->ColumnCount = 6; // Количество столбцов в DataGridView
	be.addElement("666", "Москва", "Петрозаводск", "1", "Эконом", "1500");
	be.addElement("777", "Петрозаводск", "Москва", "1", "Эконом", "1500");
	

	gUpdate();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// кнопочка допа, на этом этапе просто убирает видимость ввода ненужного и ненужных кнопок
	textBox1->Visible = false;
	textBox2->Visible = false;
	textBox4->Visible = false;
	textBox5->Visible = false;
	button2->Visible = false;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = true;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int pprice;
	string ssecond;
	try
	{
		pprice = Convert::ToInt32(textBox6->Text);
		ssecond = tostd(textBox3->Text); 
	} // Попытка перевести цену в инт, а пункт назначения в стринг
	catch (...) { return; }

	vector<vector<std::string>> viki = be.dop(ssecond, pprice);

	dataGridView1->Rows->Clear();

	for (int i = 0; i < viki.size(); ++i) { // Загружаем массив в DataGridView
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = gcnew System::String(viki[i][0].c_str());
		dataGridView1->Rows[i]->Cells[1]->Value = gcnew System::String(viki[i][1].c_str());
		dataGridView1->Rows[i]->Cells[2]->Value = gcnew System::String(viki[i][2].c_str());
		dataGridView1->Rows[i]->Cells[3]->Value = gcnew System::String(viki[i][3].c_str());
		dataGridView1->Rows[i]->Cells[4]->Value = gcnew System::String(viki[i][4].c_str());
		dataGridView1->Rows[i]->Cells[5]->Value = gcnew System::String(viki[i][5].c_str());
	}
}
};

}
