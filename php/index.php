<?php
    include_once 'Engineer.php';

    // Data Hardcode 5 Objek Engineer (Atribut Photo di posisi akhir)
    $listEngineer = [
        new Engineer("Budi Santoso", "Jakarta", 28, "ENG-001", "TechCorp", 15000000, "Python, SQL", "VS Code, Git", "Backend Developer", "https://i.pravatar.cc/150?img=11"),
        new Engineer("Siti Aminah", "Bandung", 25, "ENG-002", "DataInc", 13500000, "Data Analysis, R", "Jupyter, Tableau", "Data Engineer", "https://i.pravatar.cc/150?img=5"),
        new Engineer("Alexander Budiarto", "Surabaya", 35, "ENG-003", "Mega Global Tech", 27500000, "Python, Java, Docker", "IntelliJ, VS Code", "Lead Software Engineer", "https://i.pravatar.cc/150?img=12"),
        new Engineer("Rian Hidayat", "Yogyakarta", 23, "ENG-004", "StartupYuk", 8500000, "HTML, CSS, JS, React", "VS Code, Figma", "Frontend Developer", "https://i.pravatar.cc/150?img=13"),
        new Engineer("Dewi Lestari", "Semarang", 30, "ENG-005", "CyberGuard", 19000000, "Penetration Testing", "Wireshark, Metasploit", "DevSecOps Engineer", "https://i.pravatar.cc/150?img=9")
    ];
?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Data Engineer</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        h2 {
            color: #333;
        }
        table {
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }
    </style>
</head>
<body>

    <h2>Daftar Engineer Terdaftar</h2>

    <?php
        // Pemanggilan Static Method
        Engineer::printTableHTML($listEngineer);
    ?>

</body>
</html>