//inheritance in interface & polymorphism in interface
// it's best understanding Code for polymorphism and inheritance in java
interface Camera{
    void takepicture();
    void makevideo();

}
interface Video extends Camera{
    void video4k();
}
interface GPS{
    void network();
}
class phone{
    void takecall(){
        System.out.println("connect person");
    }
    void pickcall(){
        System.out.println("pick call ");
    }
}

class SmartPhone extends  phone implements  Camera, Video, GPS{
    public  void takepicture()
    {
        System.out.println("click picture");
    }
    public void makevideo(){
        System.out.println("make video ");
    }
    public void network()
    {
        System.out.println("connecting network ");
    }
    public void video4k(){
        System.out.println("make 4k video ");
    }
}
public class InterfaceInherit {
    public static void main(String[] args) {
//        SmartPhone vivo = new SmartPhone();
//        vivo.takepicture();
//        vivo.makevideo();
//        vivo.video4k();
//        vivo.network();
//        vivo.takecall();
//        vivo.pickcall();


        phone V = new SmartPhone();
        Camera V2 = new SmartPhone();
        Video V3 = new SmartPhone();
        GPS V4 = new SmartPhone();
        V2.takepicture();
        V2.makevideo();
        V3.takepicture();
        V3.makevideo();
        V3.video4k();
        V4.network();
        V.takecall();
        V.pickcall();

        phone nokia = new phone();
        nokia.takecall();
        nokia.pickcall();

        Video v6=new Video() {
            @Override
            public void video4k() {
                System.out.println(" OverRide make 4k video");
            }

            @Override
            public void takepicture() {
                System.out.println(" OverRide click picture");
            }

            @Override
            public void makevideo() {
                System.out.println(" OverRide make video");
            }
        };

        v6.makevideo();
        v6.takepicture();
        v6.video4k();


        GPS G = new GPS() {
            @Override
            public void network() {
                System.out.println("OverRide connecting network ");
            }
        };
    G.network();
    }
}
