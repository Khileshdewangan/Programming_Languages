class MyRunnable implements  Runnable {
    public void run(){
        int i=0;
        while(i<40000){
            System.out.println("1111111111111111111111111111");
        }

    }
}
class MyRunnable2 implements  Runnable {
    public void run(){
        int i=0;
        while(i<40000){
            System.out.println("222222222222222222222222222");
        }
    }
}
public class RunnableInterface {
    public static void main(String[] args) {
        MyRunnable obj1 = new MyRunnable();
        Thread t1 = new Thread(obj1);

        MyRunnable2 obj2 = new MyRunnable2();
        Thread t2 = new Thread(obj2);

        t1.start();
        t2.start();
    }
}
