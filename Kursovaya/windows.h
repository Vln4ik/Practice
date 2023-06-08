#pragma once

#include <cmath>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

// Класс для решения квадратного уравнения
ref class EquationSolver {
public:
    // Метод для решения квадратного уравнения методом дискриминанта
    static void solveQuadraticEquationByDiscriminant(double a, double b, double c, TextBox^ resultTextBox) {
        double discriminant = b * b - 4 * a * c;
        String^ result;

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            result = "Уравнение имеет два различных корня:\nКорень 1: " + root1 + "\nКорень 2: " + root2;
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            result = "Уравнение имеет один корень:\nКорень: " + root;
        }
        else {
            result = "Уравнение не имеет действительных корней.";
        }

        resultTextBox->Text = result;
    }
};

// Класс для пользовательского интерфейса
ref class MainForm : public System::Windows::Forms::Form {
private:
    System::Windows::Forms::TextBox^ textBoxA;
    System::Windows::Forms::TextBox^ textBoxB;
    System::Windows::Forms::TextBox^ textBoxC;
    System::Windows::Forms::Button^ solveButton;
    System::Windows::Forms::TextBox^ resultTextBox;

public:
    MainForm() {
        InitializeComponents();
    }

private:
    void InitializeComponents() {
        this->textBoxA = gcnew System::Windows::Forms::TextBox();
        this->textBoxB = gcnew System::Windows::Forms::TextBox();
        this->textBoxC = gcnew System::Windows::Forms::TextBox();
        this->solveButton = gcnew System::Windows::Forms::Button();
        this->resultTextBox = gcnew System::Windows::Forms::TextBox();

        this->textBoxA->Location = System::Drawing::Point(10, 10);
        this->textBoxA->Name = "textBoxA";
        this->textBoxA->Size = System::Drawing::Size(100, 20);
        this->textBoxA->TabIndex = 0;
        this->textBoxA->Text = "Коэффициент a";

        this->textBoxB->Location = System::Drawing::Point(10, 40);
        this->textBoxB->Name = "textBoxB";
        this->textBoxB->Size = System::Drawing::Size(100, 20);
        this->textBoxB->TabIndex = 1;
        this->textBoxB->Text = "Коэффициент b";

        this->textBoxC->Location = System::Drawing::Point(10, 70);
        this->textBoxC->Name = "textBoxC";
        this->textBoxC->Size = System::Drawing::Size(100, 20);
        this->textBoxC->TabIndex = 2;
        this->textBoxC->Text = "Коэффициент c";

        this->solveButton->Location = System::Drawing::Point(10, 100);
        this->solveButton->Name = "solveButton";
        this->solveButton->Size = System::Drawing::Size(100, 30);
        this->solveButton->TabIndex = 3;
        this->solveButton->Text = "Решить";
        this->solveButton->Click += gcnew System::EventHandler(this, &MainForm::solveButton_Click);

        this->resultTextBox->Location = System::Drawing::Point(120, 10);
        this->resultTextBox->Multiline = true;
        this->resultTextBox->Name = "resultTextBox";
        this->resultTextBox->ReadOnly = true;
        this->resultTextBox->Size = System::Drawing::Size(200, 120);
        this->resultTextBox->TabIndex = 4;
        this->resultTextBox->Text = "";

        this->Controls->Add(this->textBoxA);
        this->Controls->Add(this->textBoxB);
        this->Controls->Add(this->textBoxC);
        this->Controls->Add(this->solveButton);
        this->Controls->Add(this->resultTextBox);

        this->Text = "Quadratic Equation Solver";
        this->ClientSize = System::Drawing::Size(340, 150);
    }

    void solveButton_Click(System::Object^ sender, System::EventArgs^ e) {
        double a, b, c;

        try {
            a = Double::Parse(this->textBoxA->Text);
            b = Double::Parse(this->textBoxB->Text);
            c = Double::Parse(this->textBoxC->Text);

            EquationSolver::solveQuadraticEquationByDiscriminant(a, b, c, this->resultTextBox);
        }
        catch (FormatException^) {
            this->resultTextBox->Text = "Ошибка: некорректный ввод коэффициентов.";
        }
    }
};
