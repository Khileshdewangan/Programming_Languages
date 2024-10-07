import java.util.ArrayList;
import java.util.LinkedList;

public class CollectionFramework {
    public static void main(String[] args) {

//        Arraylist Example
        ArrayList<Integer> Myaar = new ArrayList<>();
        Myaar.add(25);
        Myaar.add(35);
        Myaar.add(45);
        Myaar.add(55);
        Myaar.add(0,105);
        Myaar.remove(3);
        System.out.println(Myaar);
        Myaar.clear();
        System.out.println(Myaar);

//        LinkedList example
        LinkedList<Integer> Mylink = new LinkedList<>();
    }
}
