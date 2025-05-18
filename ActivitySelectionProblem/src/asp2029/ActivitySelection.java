package asp2029;
import java.util.*;
public class ActivitySelection {
	public static List<Activity> selectActivities(List<Activity>activities){
		Collections.sort(activities);
		List<Activity> selectActivities = new ArrayList<>();
		int lastEndTime = -1;
		
		for(Activity activity: activities)
		{
			if(activity.getStart()>=lastEndTime)
			{
				selectActivities.add(activity);
				lastEndTime = activity.getEnd();
			}
		}
		return selectActivities;
	}

}
