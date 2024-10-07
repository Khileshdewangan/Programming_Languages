import java.util.Calendar;
import java.util.GregorianCalendar;

public class GregorianClass {
    public static void main(String[] args) {
        GregorianCalendar obj = new GregorianCalendar();
        System.out.println(obj.isLeapYear(2020));
//         obj.roll(Calendar.YEAR, True);
         System.out.println(obj.getTime());
         System.out.println(obj.hashCode());
    }
}
