public class Employee extends Person{
    private String employeeId;
    private String company;
    private int salary;

    public Employee(){
    }
    public Employee(String name,String address,int age,String employeeId,String company,int salary){
        super(name, address, age);
        this.employeeId = employeeId;
        this.company = company;
        this.salary = salary;
    }

    public void setEmployeeId(String employeeId){
        this.employeeId = employeeId;
    }
    public String getEmployeeId(){
        return this.employeeId;
    }
    public void setCompany(String company){
        this.company = company;
    }
    public String getCompany(){
        return this.company;
    }
    public void setSalary(int salary){
        this.salary = salary;
    }
    public int getSalary(){
        return this.salary;
    }
}