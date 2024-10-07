class Mythread extends Thread {
    Mythread(String name){
        super(name);
    }
    public void run(){
        int i=0;
        while(i<400){
            System.out.println("555555555");
        }
    }

}
public class ThreadConstructor {
    public static void main(String[] args) {
        Mythread m1 = new Mythread("khilesh");
        Mythread m2 = new Mythread("Dewangan");
//        m1.start();

        System.out.println("itb give id : "+ m1.getId());
        System.out.println("the of Thread is : "+ m1.getName());
        System.out.println("itb give id : "+ m2.getId());
        System.out.println("the of Thread is : "+ m2.getName());
    }
}
