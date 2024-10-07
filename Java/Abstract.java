abstract class Base2{
    public Base2(){
        System.out.println("mai base class ka constructor hu");
    }
    public void sayhello(){
        System.out.println("hello.............!");
    }
    abstract public void greet();
}
class Base55 extends Base2{
    public void greet(){
        System.out.println("Good morning...........!");
    }
}
// abstract  class base3 extends Base{
// }


public class Abstract {
    public static void main(String[] args) {
//        base b = new base();     ----error
//        base3 b = new base3();   ----error
        Base55 b2 =new Base55();
        b2.greet();
        b2.sayhello();
    }
}
