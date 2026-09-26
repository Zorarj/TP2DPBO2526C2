
```markdown
# Tugas Praktikum 2 - Desain Pemrograman Berbasis Objek (DPBO)

## Janji Kejujuran
> Saya **Zora Riyadhul Jinan** dengan **NIM 2509722** mengerjakan TP 2 DPBO dalam mata kuliah Struktur Data. Untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

## 📌 Deskripsi Program

Program ini menerapkan konsep **Multilevel Inheritance** dalam Pemrograman Berbasis Objek (OOP) yang diimplementasikan ke dalam empat bahasa pemograman (Python, Java, C++, dan PHP). 

Struktur pewarisan bertingkat terdiri dari tiga kelas utama:

```text
  [ Person ]
      │
      ▼
  [ Employee ]
      │
      ▼
  [ Engineer ]

```

1. **`Person` (Parent Class):**
Memiliki 3 atribut dasar entitas manusia:
* `name`
* `address`
* `age`


2. **`Employee` (Intermediate Class):**
Mewarisi `Person` dan menambahkan 3 atribut kepegawaian:
* `employeeId`
* `company`
* `salary`


3. **`Engineer` (Child Class / Leaf Class):**
Mewarisi `Employee` (sekaligus mewarisi `Person`) dan menambahkan atribut spesifik profesi:
* `skill`
* `tools`
* `position`
* `photo` *(khusus pada implementasi PHP)*



Setiap kelas dilengkapi dengan method **Setter dan Getter** untuk mengimplementasikan *encapsulation*. Kelas `Engineer` memiliki fungsi tambahan berupa *static method* untuk mencetak daftar data ke dalam format tabel secara dinamis.

---

## 🔄 Alur Program

1. **Terminal / CLI (Python, Java, C++):**
* Program meminta pengguna menginput data sebanyak **5 objek `Engineer**` secara berurutan.
* Setiap objek diisi nilai atributnya melalui *setter/constructor*.
* Setelah perulangan input selesai, program menghitung lebar kolom terpanjang secara otomatis (*dinamis*) agar garis pembatas tabel tercetak rapi dan presisi.


2. **Web Browser (PHP):**
* Data 5 objek `Engineer` diisi secara *hardcode*.
* Program menampilkan tabel HTML berformat rapi lengkap dengan foto profil masing-masing *engineer*.



---

## 🚀 Cara Menjalankan Program

### Python

```bash
python main.py

```

### Java

```bash
javac Person.java Employee.java Engineer.java Main.java
java Main

```

### C++

```bash
g++ Person.cpp Employee.cpp Engineer.cpp main.cpp -o main
./main

```

### PHP

1. Pindahkan folder proyek ke directory server lokal (contoh: `htdocs` untuk XAMPP/Laragon).
2. Jalankan Apache Server.
3. Buka browser dan akses `http://localhost/folder_proyek/index.php`.

```

```

![alt](<dokumentasi/Screenshot 2026-09-26 125305.png>)
![alt](<dokumentasi/Screenshot 2026-09-26 153125.png>) 
![alt](<dokumentasi/Screenshot 2026-09-26 153408.png>) 