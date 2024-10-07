interface Main{
    int a=90;
    void firstMethod();
    void secondMethod();
    private void teramethod(){
        System.out.println("private method method.........");
    }
    default  void meramethod(){
        teramethod();
        System.out.println("Default method.........");
    }
}
interface Main2{
    void thirdMethod();
    void fourthMethod();
}
class template{
    void display(){
        System.out.println("display screen..........");
    }
}

class TestCase extends  template implements Main, Main2{
    public void firstMethod()
    {
        System.out.println("first method");
    }
    public void secondMethod(){
        System.out.println("second method");
    }
    public void thirdMethod()
    {
        System.out.println("third method");
    }
    public void fourthMethod(){
        System.out.println("fourth method");
    }
}
public class InterFace {
    public static void main(String[] args) {
        TestCase obj = new TestCase();
        obj.firstMethod();
        obj.secondMethod();
        obj.thirdMethod();
        obj.fourthMethod();
        obj.display();
//        obj.teramethod();
        obj.meramethod();

        System.out.println(obj.a);
    }
}
