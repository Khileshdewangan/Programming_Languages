//we can overload in constructor
class myEmployee2{
    private  int id;
    private String name;

    public myEmployee2(String myname){
    id =9999;
    name=myname;
    }


    public myEmployee2(){
    id =9999;
    name="myname";
    }
    public void setdata(int a, String b){
        this.id= a;
        this.name= b;
    }
    public void getdata(){
        System.out.println(id);
        System.out.println(name);
//        return id;
    }
}




public class Constractor_2 {
    public static void main(String[] args) {
        myEmployee2 khilesh =new myEmployee2();
//        myEmployee2 khilesh =new myEmployee2("RAMSAY");
//        System.out.println(khilesh.getdata());
        khilesh.getdata();
    }

}
