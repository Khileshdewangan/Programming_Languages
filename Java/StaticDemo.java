public class StaticDemo{
    static void myStaticMethod(){
        System.out.println("Static method called without create object");
    }
    public void mypublicMethod(){
        System.out.println("method it maked object then compile");
    }

    public static void main(String[] args) {
        myStaticMethod();   //--->this method compile because it's static method
//        mypublicMethod();   --->this method wants make object then compile me

        StaticDemo obj = new StaticDemo();
        obj.mypublicMethod();

    }
}
