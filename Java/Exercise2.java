class Exerciseproblem extends Thread {
    public void run(){
//        while(true){
//            try{
//                Thread.sleep(20);
//            }
//            catch (Exception e){
//                System.out.println(e);
//            }
//            System.out.println("hellow world");
//        }
    }
}
class Exerciseproblem2 extends Thread {
    public void run(){
//        while(true){
//            try{
//                Thread.sleep(200);
//            }
//            catch (Exception e){
//                System.out.println(e);
//            }
//            System.out.println("welcome");
//        }
    }
}
public class Exercise2 {

    public static void main(String[] args) {
        Exerciseproblem obj = new Exerciseproblem();
        Exerciseproblem2 obj2 = new  Exerciseproblem2();
//        obj.setPriority(6);
//        obj2.setPriority(9);
        System.out.println(obj.getPriority());
        System.out.println(obj2.getPriority());
        System.out.println(obj2.getState());
//        obj.start();
        obj2.start();
        System.out.println(obj2.getState());
        System.out.println(Thread.currentThread().getState());

    }
}
