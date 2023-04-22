#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Record {
    string element1; // change datatype to string
    string element2; // change datatype to string
    int element3;
    int element4;
    Date date;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введите количество записей: ";
    cin >> n;

    Record* arr = new Record[n];
    for (int i = 0; i < n; i++) {
        cin.ignore(); // ignore any remaining characters from the previous input operation
        cout << "Введите element1: ";
        getline(cin, arr[i].element1);

        cout << "Введите element2: ";
        getline(cin, arr[i].element2);

        cout << "Введите element3: ";
        cin >> arr[i].element3;

        cout << "Введите element4: ";
        cin >> arr[i].element4;
        
        cout << "Введите дату (ДД ММ ГГГГ): ";
        cin >> arr[i].date.day >> arr[i].date.month >> arr[i].date.year;
    }
    int minIdx = 0; // Initialize index of minimum element
    for (int i = 1; i < n; i++) {
        if (arr[i].element3 < arr[minIdx].element3) {
            minIdx = i;
        }
    }
    // Вывод всех записей на экран
    cout << setw(10) << left << "Name" <<
        setw(10) << left << "Type" <<
        setw(15) << left << "Seed Area (ha)" <<
        setw(15) << left << "Yield (c/ha)" <<
        setw(15) << left << "Start Date" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(10) << left << arr[i].element1 <<
            setw(10) << left << arr[i].element2 <<
            setw(15) << left << arr[i].element3 <<
            setw(15) << left << arr[i].element4 <<
            setw(1) << left << arr[i].date.day << setw(0) << left << "." << arr[i].date.month << setw(0) << left << "." << arr[i].date.year << endl;
    }
    cout << "\nМинимальное: \n";
    cout << setw(10) << left << arr[minIdx].element1 <<
        setw(10) << left << arr[minIdx].element2 <<
        setw(15) << left << arr[minIdx].element3 <<
        setw(15) << left << arr[minIdx].element4 <<
        setw(1) << left << arr[minIdx].date.day << setw(0) << left << "." << arr[minIdx].date.month << setw(0) << left << "." << arr[minIdx].date.year << endl;
    

    return 0;
}