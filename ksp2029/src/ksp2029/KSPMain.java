package ksp2029;
import java.util.*;

public class KSPMain {
    public static void main(String[] args) {
        ArrayList<Item> item = new ArrayList<>();
        
        item.add(new Item(2, 5, 1));
        item.add(new Item(1, 12, 3));
        item.add(new Item(3, 16, 4));
        item.add(new Item(4, 7, 2));
        item.add(new Item(6, 11, 4));
        item.add(new Item(7, 6, 3));
        item.add(new Item(5, 9, 9));
        
        Collections.sort(item,new FKPComparator());
        
        double capacity=15;
        double totalProfit=0.0;
        
        for(Item items: item)
        {
        	if(capacity>items.getWeight())
        	{
        		capacity -= items.getWeight();
        	    totalProfit += items.getProfits();
        	}
        	else
        	{
        		totalProfit += items.getProfits()*(capacity/items.getWeight());
        		break;
        	}
        }
        System.out.println("Maximum Profit: " + totalProfit);
        
}
}