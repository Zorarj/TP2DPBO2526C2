#include <iostream>
#include "Engineer.cpp"
using namespace std;

int main() {
    Engineer listData[5]; // Array berkapasitas 5 objek

    cout << "=== PROGRAM INPUT DATA ENGINEER ===" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\n--- Input Data Baru ke-" << (i + 1) << " ---" << endl;

        string strInput;
        int intInput;

        cout << "Nama             : ";
        getline(cin, strInput);
        listData[i].setName(strInput);

        cout << "Alamat           : ";
        getline(cin, strInput);
        listData[i].setAddress(strInput);

        cout << "Umur             : ";
        cin >> intInput;
        listData[i].setAge(intInput);
        cin.ignore(); // Membersihkan buffer newline (seperti input.nextLine() di Java)

        cout << "ID Employee      : ";
        getline(cin, strInput);
        listData[i].setEmployeeId(strInput);

        cout << "Perusahaan       : ";
        getline(cin, strInput);
        listData[i].setCompany(strInput);

        cout << "Gaji (Rp)        : ";
        cin >> intInput;
        listData[i].setSalary(intInput);
        cin.ignore(); // Membersihkan buffer newline

        cout << "Skill            : ";
        getline(cin, strInput);
        listData[i].setSkill(strInput);

        cout << "Tools            : ";
        getline(cin, strInput);
        listData[i].setTools(strInput);

        cout << "Posisi           : ";
        getline(cin, strInput);
        listData[i].setPosition(strInput);
    }

    // Pemanggilan Static Method dari Class Engineer
    Engineer::printTable(listData, 5);

    return 0;
}