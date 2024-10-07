//in this code cover this & super keyword , constructor, constructor overloading , inheritance , constructor in inheritance
class Base{
    int x;
    public Base(){
        System.out.println("i am a  base class constructor");
    }public Base(int x){
        System.out.println("print  a in Base class : "+ x);
    }

    public int getX() {
        System.out.println("i am also Base class ");
        return x;
    }

    public void setX(int x) {
        System.out.println("i am Base class ");
        this.x = x;
    }
}
class Drive extends Base{
    int y;
    public Drive(){
        System.out.println("i am a Drive class constructor");
    }

    public Drive(int x, int y){
        super (x);
        System.out.println("print b in drived class : "+ y);
    }}

class child extends Drive{
    child(){
        System.out.println("i am a child class constructor");
    }

    child(int x, int y, int z){
        super(x,y);
        System.out.println("print C in chiid : "+ z);
    }
}
public class inheritance_3 {
    public static void main(String[] args) {
//        Base b = new Base();
//        Drive d =new Drive();
//        b.setX(55);
//        System.out.print(b.getX());
        child c = new child(55,66,77);
    }
}
