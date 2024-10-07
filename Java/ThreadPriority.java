class PriorityThread extends Thread{
    PriorityThread(String name){
        super(name);
    }
    public void run(){
        while(true){
            System.out.println("the name of  thread is : "+ getName());
        }
    }
}
public class ThreadPriority {
    public static void main(String[] args) {
        PriorityThread t1 = new PriorityThread("khilesh ( most priority ) ");
        PriorityThread t2 = new PriorityThread("dewangan  () kam hai () ");
        PriorityThread t3 = new PriorityThread("Satish");
        PriorityThread t4 = new PriorityThread("Ramsay");
        PriorityThread t5 = new PriorityThread("Rahul");
        t1.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();

    }
}
