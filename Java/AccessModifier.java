class Access{
    public int a=45;
    protected int b=55;
    int c=66;
    private int d=77;
    void math(){
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
    }
}
class Access2 extends  Access{

}
public class AccessModifier {
    public static void main(String[] args) {
//        Access X2 = new Access();
        Access2 X = new Access2();
        System.out.println(X.a);
        System.out.println(X.b);
        System.out.println(X.c);
//        System.out.println(X.d);   //----> not accessable
//        X.math();

    }
}
