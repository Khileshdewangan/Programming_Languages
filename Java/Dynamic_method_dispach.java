class One{
    One(){
        System.out.println("i am constructor in base class");
    }
    void Fun1(){
        System.out.println("this is fun-1 method in Base class");
    }
    void Fun2(){
        System.out.println("this is fun-2 method in Base class");
    }
}
class Two extends One{
    Two(){
        System.out.println("i am constructor in Drive class");
    }
    void Fun2(){
        System.out.println("this is fun-2 method in Drived class");
    }
    void Fun3(){
        System.out.println("this is fun-2 method");
    }
}
public class Dynamic_method_dispach {
    public static void main(String[] args) {
        One obj = new Two();
//        Two obj = new One();  // not allowed
        obj.Fun1();
        obj.Fun2();             //only overriding methods is allowed
//        obj.Fun3();           // not allowed

    }
}
