#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "New branch!" << endl;
    cout << "---Программа для сравнения двух чисел---"<< endl;
    int A, B, max, min;
    cout << "Введите чило А: "; cin >> A;
    cout << "Введите чило B: "; cin >> B;
    cout << endl;



    cout << "--------------------------------------------------" << endl;
    cout << "\t\tВариант 1.1" << endl;
    max = (B > A) ? B : A;
    min = (B > A) ? A : B;
    cout << "Максимум равен: "<< max << "\t" << "Минимум равен: " << min << endl;
    cout << endl;



    cout << "\t\tВариант 1.2" << endl;
    max = (A > B) ? A : B;
    min = (A > B) ? B : A;
    cout << "Максимум равен: " << max << "\t" << "Минимум равен: " << min << endl;
    cout << endl;



    cout << "--------------------------------------------------" << endl;
    cout << "\t\tВариант 2.1" << endl;
    (B > A) ? cout << "Максимум равен: " << B << "\t" : cout << "Максимум равен: " << A << "\t";
    (B > A) ? cout << "Минимум равен: " << A << endl : cout << "Минимум равен: " << B << endl;
    cout << endl;

    cout << "\t\tВариант 2.2" << endl;
    (A > B) ? cout << "Максимум равен: " << A << "\t" : cout << "Максимум равен: " << B << "\t"; 
    (A > B) ? cout << "Минимум равен: " << B << endl : cout << "Минимум равен: " << A << endl;
    cout << endl;



    cout << "--------------------------------------------------" << endl;
    cout << "\t\tВариант 3.1" << endl;
    (B > A) ? cout << "Максимум равен: " << B << "\tМинимум равен: " << A << "\n" : cout << "Максимум равен: " << A << "\tМинимум равен: " << B << endl;
    cout << endl;

    cout << "\t\tВариант 3.2" << endl;
    (A > B) ? cout << "Максимум равен: " << A << "\tМинимум равен: " << B << "\n" : cout << "Максимум равен: " << B << "\tМинимум равен: " << A << endl;
}
