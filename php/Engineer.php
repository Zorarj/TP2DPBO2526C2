<?php
    include_once 'Employee.php';

    class Engineer extends Employee{
        public $skill;
        public $tools;
        public $position;
        private $photo; 

        public function __construct($name, $address, $age, $employeeId, $company, $salary, $skill, $tools, $position, $photo = "default.jpg"){
            parent::__construct($name, $address, $age, $employeeId, $company, $salary);
            $this->skill = $skill;
            $this->tools = $tools;
            $this->position = $position;
            $this->photo = $photo;
        }

        public function setSkill($skill){
            $this->skill = $skill;
        }
        public function getSkill(){
            return $this->skill;
        }
        public function setTools($tools){
            $this->tools = $tools;
        }
        public function getTools(){
            return $this->tools;
        }
        public function setPosition($position){
            $this->position = $position;
        }
        public function getPosition(){
            return $this->position;
        }
        public function setPhoto($photo){
            $this->photo = $photo;
        }
        public function getPhoto(){
            return $this->photo;
        }

        // Method Static Cetak Tabel HTML
        public static function printTableHTML($dataList){
            if (empty($dataList)) {
                echo "<p>Tidak ada data untuk ditampilkan.</p>";
                return;
            }

            echo "<table border='1' cellpadding='8' cellspacing='0' style='border-collapse: collapse; width: 100%; text-align: left;'>";
            echo "<tr style='background-color: #f2f2f2;'>
                    <th>Foto</th>
                    <th>ID</th>
                    <th>Nama</th>
                    <th>Posisi</th>
                    <th>Perusahaan</th>
                    <th>Gaji (Rp)</th>
                    <th>Skill</th>
                    <th>Tools</th>
                  </tr>";

            foreach ($dataList as $eng) {
                echo "<tr>";
                echo "<td style='text-align: center;'><img src='" . htmlspecialchars($eng->getPhoto()) . "' alt='Foto' style='width: 50px; height: 50px; object-fit: cover; border-radius: 50%;'></td>";
                echo "<td>" . htmlspecialchars($eng->getEmployeeId()) . "</td>";
                echo "<td>" . htmlspecialchars($eng->getName()) . "</td>";
                echo "<td>" . htmlspecialchars($eng->getPosition()) . "</td>";
                echo "<td>" . htmlspecialchars($eng->getCompany()) . "</td>";
                echo "<td>Rp " . number_format($eng->getSalary(), 0, ',', '.') . "</td>";
                echo "<td>" . htmlspecialchars($eng->getSkill()) . "</td>";
                echo "<td>" . htmlspecialchars($eng->getTools()) . "</td>";
                echo "</tr>";
            }

            echo "</table>";
        }
    }
?>