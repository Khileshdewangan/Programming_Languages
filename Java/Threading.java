class Cookguy extends Thread{
   public void run(){
       while(true){
           System.out.println("cook is making food");
       }
    }
}class Chattingguy extends Thread{
    public void run(){
        while(true){
            System.out.println("Chatting ho rahi h");
        }
    }
}
public class Threading {
    public static void main(String[] args) {
        Cookguy khilesh = new Cookguy();
        Chattingguy rumendra = new Chattingguy();
        khilesh.start();
        rumendra.start();
    }
}
