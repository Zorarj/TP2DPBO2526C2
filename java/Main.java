import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Engineer listData[] = new Engineer[5];
        Scanner input = new Scanner(System.in);

        for(int i = 0; i < 5; i++){
            System.out.println("\n--- Input Data Baru ke-" + (i + 1) + " ---");

            Engineer eng = new Engineer();

            System.out.print("Nama             : ");
            eng.setName(input.nextLine());

            System.out.print("Alamat           : ");
            eng.setAddress(input.nextLine());

            System.out.print("Umur             : ");
            eng.setAge(input.nextInt());
            input.nextLine(); // Membersihkan buffer newline enter

            System.out.print("ID Employee      : ");
            eng.setEmployeeId(input.nextLine());

            System.out.print("Perusahaan       : ");
            eng.setCompany(input.nextLine());

            System.out.print("Gaji (Rp)        : ");
            eng.setSalary(input.nextInt());
            input.nextLine(); // Membersihkan buffer newline enter

            System.out.print("Skill            : ");
            eng.setSkill(input.nextLine());

            System.out.print("Tools            : ");
            eng.setTools(input.nextLine());

            System.out.print("Posisi           : ");
            eng.setPosition(input.nextLine());

            listData[i] = eng;
        }
        input.close();
        Engineer.printTable(listData);
    }
}
