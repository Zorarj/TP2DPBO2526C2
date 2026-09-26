<?php
    include_once 'Person.php';
    class Employee extends Person{
        private $employeeId;
        private $company;
        private $salary;

        public function __construct($name,$address,$age,$employeeId,$company,$salary){
            parent::__construct($name,$address,$age);
            $this->employeeId = $employeeId;
            $this->company = $company;
            $this->salary = $salary;
        }

        public function setEmployeeId($employeeId){
            $this->employeeId = $employeeId;
        }
        public function getEmployeeId(){
            return $this->employeeId;
        }
        public function setCompany($company){
            $this->company = $company;
        }
        public function getCompany(){
            return $this->company;
        }
        public function setSalary($salary){
            $this->salary = $salary;
        }
        public function getSalary(){
            return $this->salary;
        }
    }
?>