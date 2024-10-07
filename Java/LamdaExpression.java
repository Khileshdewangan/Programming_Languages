interface Ano{
    void math(String s);
//    void math2();
}
// class Ano2 implements Ano{
//     public void math()
//     {
//         System.out.println("i am math1");
//     }
//     public void math2()
//     {
//         System.out.println("i am math22");
//     }
// }
    public class LamdaExpression {

    public static void main(String[] args) {
        //Anonymous class
//        Ano obj = new Ano(){
//            public void math()
//            {
//                System.out.println("i am math1");
//            }
//            public void math2()
//            {
//                System.out.println("i am math22");
//            }
//        };
//        obj.math2();
        Ano obj = (a) -> {
            System.out.println("khilesh hai "+a);};
        obj.math("DEWANGAN");
    }
}
