#include <iostream>
#include <algorithm>
#include <iomanip>
#include "Employee.cpp"
using namespace std;

class Engineer : public Employee{
    private:
        string skill;
        string tools;
        string position;
    
    public:
        Engineer(){
        }
        Engineer(string name,string address,int age,
            string employeeId,string company,int salary,
            string skill,string tools,string position) : Employee(name,address,age,employeeId,company,salary){
                this->skill = skill;
                this->tools = tools;
                this->position = position;
            }

        void setSkill(string skill){
            this->skill = skill;
        }
        string getSkill(){
            return this->skill;
        }
        void setTools(string tools){
            this->tools = tools;
        }
        string getTools(){
            return this->tools;
        }
        void setPosition(string position){
            this->position = position;
        }
        string getPosition(){
            return this->position;
        }

        static void printTable(Engineer listData[], int count) {
            if (count <= 0) {
                cout << "\nTidak ada data untuk ditampilkan." << endl;
                return;
            }

            string hId = "ID", hName = "Nama", hPos = "Posisi", hComp = "Perusahaan", hSal = "Gaji (Rp)", hSkill = "Skill", hTools = "Tools";

            // Hitung Lebar Kolom Terpanjang (Dinamis)
            int wId = hId.length();
            int wName = hName.length();
            int wPos = hPos.length();
            int wComp = hComp.length();
            int wSal = hSal.length();
            int wSkill = hSkill.length();
            int wTools = hTools.length();

            for (int i = 0; i < count; i++) {
                wId = max(wId, (int)listData[i].getEmployeeId().length());
                wName = max(wName, (int)listData[i].getName().length());
                wPos = max(wPos, (int)listData[i].getPosition().length());
                wComp = max(wComp, (int)listData[i].getCompany().length());
                wSal = max(wSal, (int)to_string(listData[i].getSalary()).length());
                wSkill = max(wSkill, (int)listData[i].getSkill().length());
                wTools = max(wTools, (int)listData[i].getTools().length());
            }

            // Buat Garis Pembatas Dinamis
            string border = "+" + string(wId + 2, '-') + "+" 
                                + string(wName + 2, '-') + "+" 
                                + string(wPos + 2, '-') + "+" 
                                + string(wComp + 2, '-') + "+" 
                                + string(wSal + 2, '-') + "+" 
                                + string(wSkill + 2, '-') + "+" 
                                + string(wTools + 2, '-') + "+";

            // Cetak Header
            cout << "\n" << border << "\n";
            cout << "| " << left << setw(wId) << hId
                << " | " << left << setw(wName) << hName
                << " | " << left << setw(wPos) << hPos
                << " | " << left << setw(wComp) << hComp
                << " | " << left << setw(wSal) << hSal
                << " | " << left << setw(wSkill) << hSkill
                << " | " << left << setw(wTools) << hTools << " |\n";
            cout << border << "\n";

            // Cetak Isi Data
            for (int i = 0; i < count; i++) {
                cout << "| " << left << setw(wId) << listData[i].getEmployeeId()
                    << " | " << left << setw(wName) << listData[i].getName()
                    << " | " << left << setw(wPos) << listData[i].getPosition()
                    << " | " << left << setw(wComp) << listData[i].getCompany()
                    << " | " << left << setw(wSal) << listData[i].getSalary()
                    << " | " << left << setw(wSkill) << listData[i].getSkill()
                    << " | " << left << setw(wTools) << listData[i].getTools() << " |\n";
            }

            cout << border << endl;
        }
};