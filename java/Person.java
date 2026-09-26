public class Person{
    private String name;
    private String address;
    private int age;

    public Person(){
    }
    public Person(String name,String address,int age){
        this.name = name;
        this.address = address;
        this.age = age;
    }

    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return this.name;
    }
    public void setAddress(String address){
        this.address = address;
    }
    public String getAddress(){
        return this.address;
    }
    public void setAge(int age){
        this.age = age;
    }
    public int getAge(){
        return this.age;
    }
}