import java.util.Calendar;

public class CalenderClass {
    public static void main(String[] args) {
        Calendar c = Calendar.getInstance();

        System.out.println(c.getTime());
        System.out.println(c.getTimeZone());
        System.out.println(c.getFirstDayOfWeek());
        System.out.println(c.get(Calendar.MONTH));
        System.out.println(c.get(Calendar.YEAR));
        System.out.println(c.get(Calendar.DAY_OF_WEEK));
        System.out.println(c.get(Calendar.DAY_OF_MONTH));
        System.out.println(c.get(Calendar.AM));

    }
}
