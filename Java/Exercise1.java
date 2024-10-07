class circle{
    circle(){
        System.out.println("i am non parameterize circle constructor");
    }
    circle(int r){
        System.out.println("i am parameterize circle constructor : "+r);
    }
}
class cylinder extends circle{
    cylinder(){
        System.out.println("i am non parameterize cylinder constructor");
    }
    cylinder(int r, int n){
//        super(r);
        System.out.println("i am parameterize cylinder constructor : "+n);
    }
}
public class Exercise1 {
    public static void main(String[] args) {
        cylinder obj = new cylinder(100,200);
//        cylinder obj = new cylinder();
    }
}
