class Box<T>{
    private T value;
    public T getValue() {
        return value;
    }

    public void setValue(T value) {
        this.value = value;
    }



}
public class Genrics {
    public static void main(String[] args) {
        Box<String> obj = new Box();
        obj.setValue("KHILESH DEWANGAN");
        String a = obj.getValue();
        System.out.println(a);

        Box<Integer> obj2 = new Box();
        obj2.setValue(5000);
        int b = obj2.getValue();
        System.out.println(b);
    }
}
