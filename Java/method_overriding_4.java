//  @Override this keyword is recommendend
class A{
    public void method(){
        System.out.println("i am method of class A ");
    }
    public void meth2(){
        System.out.println(" i am method of class A");
    }
}
class B extends  A{
    @Override
    public void meth2(){
        System.out.println(" i am method of class B");
    }
}
public class method_overriding_4 {
    public static void main(String[] args) {
//        A a = new A();
        B b = new B();
        b.meth2();
    }
}
