class myEmployee{
    private  int id;
    private String name;
    public void setdata(int a, String b){
        this.id= a;
        this.name= b;
    }
    public int getdata(){
        System.out.println(id);
        System.out.println(name);
        return id;
    }
}
public class getter_setter {
    public static void main(String[] args) {
    myEmployee khilesh = new myEmployee();
    khilesh.setdata(55,"dewangan");
    System.out.print(khilesh.getdata());
    }
}
