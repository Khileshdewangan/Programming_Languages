import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileCreate {
    public static void main(String[] args) {

//        code to create new fle
        /*
        File obj = new File("Dewangan.txt");

        try {
            obj.createNewFile();
        } catch (IOException e) {
            System.out.println("Unable to craete this file ");
            throw new RuntimeException(e);
        }

//        code to write a file
        try {
            FileWriter obj2 = new FileWriter("Dewangan.txt");
            obj2.write("this is first file writing\nnew line ");
            obj2.close();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }


//Reading a file
        File myfile = new File("Dewangan.txt");
        try {
            Scanner sc= new Scanner(myfile);
            while(sc.hasNextLine()){
                String line = sc.nextLine();
                System.out.println(line);
            }
            sc.close();
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        }
        */

        //  deleting a file
        File myfile = new File("Dewangan.txt");
        if(myfile.delete()){
            System.out.println("i have deleted " + myfile.getName());
        }
        else{
            System.out.println("Some problem occurred while deleting a file ");
        }
    }
}
