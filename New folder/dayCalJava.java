import java.util.*;
import java.time.*;


class dayCalJava{
	public static void main(String[] args) {
		Map<Integer,String> dayOfWeek = new HashMap<>();
		for(int i=0;i<=6;i++){
			dayOfWeek.put(i,DayOfWeek.of(i+1).toString());
		}

		 System.out.println(dayOfWeek.values());
		// System.out.println(dayOfWeek.get(2));



	}
}