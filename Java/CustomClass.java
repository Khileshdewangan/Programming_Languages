class Employee{
    int id;
    String name;
    int salary;
    public void  display(){
        System.out.println(id);
        System.out.println(name);
    }
    public int getSalary(){
        return salary ;
    }
}
public class CustomClass {

    public static void main(String[] args) {
        Employee khil = new Employee();
        khil.id=10;
        khil.name ="dewangan";
        khil.salary =12;
        int sala = khil.getSalary();
        System.out.println(sala);
        khil.display();
    }
}
