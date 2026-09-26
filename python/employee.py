from person import person

class employee(person):
    def __init__(self,name,address,age,employee_id,company,salary):
        super().__init__(name,address,age)
        self.__employee_id = employee_id
        self.__company = company
        self.__salary = salary
        
    #getter setter
    def set_employee_id(self,employee_id):
        self.__employee_id = employee_id
    def get_employee_id(self):
        return self.__employee_id
    
    def set_company(self,company):
        self.__company = company
    def get_company(self):
        return self.__company
    
    def set_salary(self,salary):
        self.__salary = salary
    def get_salary(self):
        return self.__salary