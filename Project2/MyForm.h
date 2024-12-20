#pragma once

float a, b, c, d;
const float pi = 3.14;

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

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
    private: System::Windows::Forms::ComboBox^ comboBox1;
    protected:
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ Sa;


    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ Formula_S;
    private: System::Windows::Forms::Label^ Formula_V;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label4;



    private: System::Windows::Forms::Label^ label5;



    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;



    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->Sa = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->Formula_S = (gcnew System::Windows::Forms::Label());
            this->Formula_V = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // comboBox1
            // 
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"Cone", L"Cube", L"Cylinder", L"Parallelepiped",
                    L"Pyramid", L"Sphere"
            });
            this->comboBox1->Location = System::Drawing::Point(39, 50);
            this->comboBox1->Margin = System::Windows::Forms::Padding(2);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(410, 47);
            this->comboBox1->TabIndex = 0;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(38, 110);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(410, 440);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 1;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // Sa
            // 
            this->Sa->AutoSize = true;
            this->Sa->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Sa->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->Sa->Location = System::Drawing::Point(475, 50);
            this->Sa->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->Sa->Name = L"Sa";
            this->Sa->Size = System::Drawing::Size(391, 39);
            this->Sa->TabIndex = 2;
            this->Sa->Text = L"Surface area (S):";
            this->Sa->Click += gcnew System::EventHandler(this, &MyForm::Sa_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label1->Location = System::Drawing::Point(475, 193);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(259, 39);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Volume (V):";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label2->Location = System::Drawing::Point(475, 258);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(193, 39);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Formula:";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label3->Location = System::Drawing::Point(475, 110);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(193, 39);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Formula:";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // Formula_S
            // 
            this->Formula_S->AutoSize = true;
            this->Formula_S->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Formula_S->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->Formula_S->Location = System::Drawing::Point(662, 110);
            this->Formula_S->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->Formula_S->Name = L"Formula_S";
            this->Formula_S->Size = System::Drawing::Size(0, 39);
            this->Formula_S->TabIndex = 6;
            this->Formula_S->Click += gcnew System::EventHandler(this, &MyForm::Formula_S_Click);
            // 
            // Formula_V
            // 
            this->Formula_V->AutoSize = true;
            this->Formula_V->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Formula_V->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->Formula_V->Location = System::Drawing::Point(662, 258);
            this->Formula_V->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->Formula_V->Name = L"Formula_V";
            this->Formula_V->Size = System::Drawing::Size(0, 39);
            this->Formula_V->TabIndex = 7;
            this->Formula_V->Click += gcnew System::EventHandler(this, &MyForm::Formula_V_Click);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::SystemColors::Window;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->textBox1->Location = System::Drawing::Point(667, 391);
            this->textBox1->Margin = System::Windows::Forms::Padding(2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(56, 46);
            this->textBox1->TabIndex = 8;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label4->Location = System::Drawing::Point(475, 391);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 39);
            this->label4->TabIndex = 9;
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label5->Location = System::Drawing::Point(475, 449);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 39);
            this->label5->TabIndex = 10;
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label6->Location = System::Drawing::Point(475, 504);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(0, 39);
            this->label6->TabIndex = 11;
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(667, 449);
            this->textBox2->Margin = System::Windows::Forms::Padding(2);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(56, 46);
            this->textBox2->TabIndex = 12;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(667, 504);
            this->textBox3->Margin = System::Windows::Forms::Padding(2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(56, 46);
            this->textBox3->TabIndex = 13;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label7->Location = System::Drawing::Point(845, 456);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(105, 39);
            this->label7->TabIndex = 14;
            this->label7->Text = L"S = ";
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label8->Location = System::Drawing::Point(845, 511);
            this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(105, 39);
            this->label8->TabIndex = 15;
            this->label8->Text = L"V = ";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label9->Location = System::Drawing::Point(475, 561);
            this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(0, 39);
            this->label9->TabIndex = 16;
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(666, 558);
            this->textBox4->Margin = System::Windows::Forms::Padding(2);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(56, 46);
            this->textBox4->TabIndex = 17;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label10->Location = System::Drawing::Point(954, 456);
            this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(105, 39);
            this->label10->TabIndex = 18;
            this->label10->Text = L"S = ";
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label11->Location = System::Drawing::Point(954, 511);
            this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(105, 39);
            this->label11->TabIndex = 19;
            this->label11->Text = L"S = ";
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->ClientSize = System::Drawing::Size(1377, 662);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->Formula_V);
            this->Controls->Add(this->Formula_S);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Sa);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->comboBox1);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    if (comboBox1->Text == L"Cube")
    {
        pictureBox1->Image = System::Drawing::Bitmap::FromFile("Cube.jpg");
        Formula_S->Text = L"S = 6a^2";
        Formula_V->Text = L"V = a^3";
        label4->Text = L"a:";
        label5->Text = L"";
        label6->Text = L"";
        label9->Text = L"";

        textBox1->BackColor = System::Drawing::Color::White;
        textBox1->ForeColor = System::Drawing::Color::Black;

        textBox2->BackColor = System::Drawing::Color::Black;
        textBox2->ForeColor = System::Drawing::Color::White;
        textBox2->Text = L"";
        textBox3->BackColor = System::Drawing::Color::Black;
        textBox3->ForeColor = System::Drawing::Color::White;
        textBox3->Text = L"";
        textBox4->BackColor = System::Drawing::Color::Black;
        textBox4->ForeColor = System::Drawing::Color::White;
        textBox4->Text = L"";
    }
    else if (comboBox1->Text == L"Cone")
    {
        pictureBox1->Image = System::Drawing::Bitmap::FromFile("Cone.jpg");
        Formula_S->Text = L"S = πrl + πr^2";
        Formula_V->Text = L"V = (1/3)πr^2h";
        label4->Text = L"r:";
        label5->Text = L"l:";
        label6->Text = L"h:";
        label9->Text = L"";
        textBox1->BackColor = System::Drawing::Color::White;
        textBox1->ForeColor = System::Drawing::Color::Black;
        textBox2->BackColor = System::Drawing::Color::White;
        textBox2->ForeColor = System::Drawing::Color::Black;
        textBox3->BackColor = System::Drawing::Color::White;
        textBox3->ForeColor = System::Drawing::Color::Black;

        textBox4->BackColor = System::Drawing::Color::Black;
        textBox4->ForeColor = System::Drawing::Color::White;
        textBox4->Text = L"";

    }
    else if (comboBox1->Text == L"Cylinder")
    {
        pictureBox1->Image = System::Drawing::Bitmap::FromFile("Cylinder.jpg");
        Formula_S->Text = L"S = 2πrh + 2πr^2";
        Formula_V->Text = L"V = πr^2h";
        label4->Text = L"r:";
        label5->Text = L"h:";
        label6->Text = L"";
        label9->Text = L"";
        textBox1->BackColor = System::Drawing::Color::White;
        textBox1->ForeColor = System::Drawing::Color::Black;
        textBox2->BackColor = System::Drawing::Color::White;
        textBox2->ForeColor = System::Drawing::Color::Black;

        textBox3->BackColor = System::Drawing::Color::Black;
        textBox3->ForeColor = System::Drawing::Color::White;
        textBox3->Text = L"";
        textBox4->BackColor = System::Drawing::Color::Black;
        textBox4->ForeColor = System::Drawing::Color::White;
        textBox4->Text = L"";

    }
    else if (comboBox1->Text == L"Parallelepiped")
    {
        pictureBox1->Image = System::Drawing::Bitmap::FromFile("Paral.jpg");
        Formula_S->Text = L"S = 2(ab + bc + ac)";
        Formula_V->Text = L"V = abc";
        label4->Text = L"a:";
        label5->Text = L"b:";
        label6->Text = L"c:";
        label9->Text = L"";
        textBox1->BackColor = System::Drawing::Color::White;
        textBox1->ForeColor = System::Drawing::Color::Black;
        textBox2->BackColor = System::Drawing::Color::White;
        textBox2->ForeColor = System::Drawing::Color::Black;
        textBox3->BackColor = System::Drawing::Color::White;
        textBox3->ForeColor = System::Drawing::Color::Black;

        textBox4->BackColor = System::Drawing::Color::Black;
        textBox4->ForeColor = System::Drawing::Color::White;
        textBox4->Text = L"";

    }
    else if (comboBox1->Text == L"Pyramid")
    {
        pictureBox1->Image = System::Drawing::Bitmap::FromFile("Pyramid.jpg");
        Formula_S->Text = L"S = (1/2)Pl + a^2";
        Formula_V->Text = L"V = (1/3)a^2h";
        label4->Text = L"P:";
        label5->Text = L"l:";
        label6->Text = L"a:";
        label9->Text = L"h:";
        textBox1->BackColor = System::Drawing::Color::White;
        textBox1->ForeColor = System::Drawing::Color::Black;
        textBox2->BackColor = System::Drawing::Color::White;
        textBox2->ForeColor = System::Drawing::Color::Black;
        textBox3->BackColor = System::Drawing::Color::White;
        textBox3->ForeColor = System::Drawing::Color::Black;
        textBox4->BackColor = System::Drawing::Color::White;
        textBox4->ForeColor = System::Drawing::Color::Black;
    }
    else if (comboBox1->Text == L"Sphere")
    {
        pictureBox1->Image = System::Drawing::Bitmap::FromFile("Sphere.jpg");

        Formula_S->Text = L"S = 4πr^2";
        Formula_V->Text = L"V = (4/3)πr^3";
        label4->Text = L"r:";
        label5->Text = L"";
        label6->Text = L"";
        label9->Text = L"";
        textBox1->BackColor = System::Drawing::Color::White;
        textBox1->ForeColor = System::Drawing::Color::Black;

        textBox2->BackColor = System::Drawing::Color::Black;
        textBox2->ForeColor = System::Drawing::Color::White;
        textBox2->Text = L"";
        textBox3->BackColor = System::Drawing::Color::Black;
        textBox3->ForeColor = System::Drawing::Color::White;
        textBox3->Text = L"";
        textBox4->BackColor = System::Drawing::Color::Black;
        textBox4->ForeColor = System::Drawing::Color::White;
        textBox4->Text = L"";
    }
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Sa_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Formula_S_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Formula_V_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (comboBox1->Text == L"Cube")
    {
        a = Convert::ToInt32(textBox1->Text);
        float S = a * a * a;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Cone")
    {
        a = Convert::ToInt32(textBox1->Text); // r
        b = Convert::ToInt32(textBox2->Text); // l
        float S = pi * a * b + pi * a * a;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Cylinder")
    {
        a = Convert::ToInt32(textBox1->Text); // r
        b = Convert::ToInt32(textBox2->Text); // h
        float S = 2 * pi * a * b + 2 * pi * a * a;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Parallelepiped")
    {
        a = Convert::ToInt32(textBox1->Text); // a
        b = Convert::ToInt32(textBox2->Text); // b
        c = Convert::ToInt32(textBox3->Text); // c
        float S = 2 * (a * b + a * c + b * c);
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Pyramid")
    {
        a = Convert::ToInt32(textBox1->Text); // P
        b = Convert::ToInt32(textBox2->Text); // l
        c = Convert::ToInt32(textBox3->Text); // a
        float S = 0.5 * a * b + c * c;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Sphere")
    {
        a = Convert::ToInt32(textBox1->Text); // r
        float S = 4 * pi * a * a;
        label10->Text = S.ToString();
    }

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {

    if (comboBox1->Text == L"Cube")
    {
        a = Convert::ToInt32(textBox1->Text);
        float S = a * a * 6;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Cone")
    {
        a = Convert::ToInt32(textBox1->Text); // r
        b = Convert::ToInt32(textBox2->Text); // l
        float S = pi * a * b + pi * a * a;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Cylinder")
    {
        a = Convert::ToInt32(textBox1->Text); // r
        b = Convert::ToInt32(textBox2->Text); // h
        float S = 2 * pi * a * b + 2 * pi * a * a;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Parallelepiped")
    {
        a = Convert::ToInt32(textBox1->Text); // a
        b = Convert::ToInt32(textBox2->Text); // b
        c = Convert::ToInt32(textBox3->Text); // c
        float S = 2 * (a * b + a * c + b * c);
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Pyramid")
    {
        a = Convert::ToInt32(textBox1->Text); // P
        b = Convert::ToInt32(textBox2->Text); // l
        c = Convert::ToInt32(textBox3->Text); // a
        float S = 0.5 * a * b + c * c;
        label10->Text = S.ToString();
    }
    else if (comboBox1->Text == L"Sphere")
    {
        a = Convert::ToInt32(textBox1->Text); // r
        float S = 4 * pi * a * a;
        label10->Text = S.ToString();
    }

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}