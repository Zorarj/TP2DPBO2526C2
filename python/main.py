from engineer import engineer
from engineer import print_table

if __name__ == "__main__":
    list_engineer = []

    print("=== PROGRAM INPUT DATA ENGINEER DINAMIS ===")
    i = 0
    for i in range(5):
        print("\n--- Input Data Baru ---")
        name = input("Nama             : ")
        address = input("Alamat           : ")
        age = int(input("Umur             : "))
        employe_id = input("ID Employee      : ")
        company = input("Perusahaan       : ")
        salary = int(input("Gaji (Rp)        : "))
        skill = input("Skill            : ")
        tools = input("Tools            : ")
        position = input("Posisi           : ")

        # Buat objek engineer baru dan tambahkan ke list
        eng = engineer(name, address, age, employe_id, company, salary, skill, tools, position)
        list_engineer.append(eng)
        
    print_table(list_engineer)