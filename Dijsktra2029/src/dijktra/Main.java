package dijktra;

import java.util.*;

public class Main {
    public static void main(String[] args) {
    	Scanner sc=new Scanner(System.in);
    	System.out.print("Enter number of vertices:");
    	int V = sc.nextInt();
    	int [][]graph = new int[V][V];
    	System.out.print("Enter adjacency Matrix:");
    	for(int i=0;i<V;i++)
    	{
    		for(int j=0;j<V;j++)
    		{
    			graph[i][j]=sc.nextInt();
    		}
    	}
      System.out.print("Enter the source vertex:");
      int src = sc.nextInt();
      ShortestPath sp = new ShortestPath(V);
      sp.dijsktra(graph,src);
}
}