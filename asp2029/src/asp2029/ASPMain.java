package asp2029;
import java.util.*;
public class ASPMain {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of Activities:");
		int n = sc.nextInt();
		sc.nextLine();
		
		List<Activity> activities = new ArrayList<>();
		
		System.out.println("Enter activiy name,start time, end times:");
		for(int i=0;i<n;i++)
		{
			String name = sc.next();
			int start = sc.nextInt();
			int end = sc.nextInt();
			activities.add(new Activity(name,start,end));
		}
		
	List<Activity> selected = ActivitySelection.selectActivities(activities);
	
	System.out.println("Selected activities:");
	for(Activity activity : selected) {
		System.out.println("Name:" + activity.getName() + ", Start: "+ activity.getStart() +", End: "+activity.getEnd());
	}

	}

}
