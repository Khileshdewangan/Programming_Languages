public class FinallyCode {
    public static int greet(){
        try{
            int a=50;
            int b=10;
            int c=a/b;
//            System.out.println(c);
            return  c;
        }
        catch (Exception e){
            System.out.println(e);
        }
        finally {
            System.out.println("I am a Final   this is the end of function.......");
        }
        return  -1;
    }
    public static void main(String[] args) {

//       int k = greet();
//       System.out.println(k);
        int a= 25;
        int b= 5;
       while(true){
           try{
               System.out.println(a/b);
           }
           catch(Exception e){
               System.out.println(e);
                       break;
           }
           finally {
               System.out.println("I am a Final   this is the end of function.......");
               b--;
           }
       }

    }
}
