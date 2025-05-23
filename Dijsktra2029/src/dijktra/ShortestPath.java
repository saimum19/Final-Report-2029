package dijktra;
public class ShortestPath {
    int V;
    public ShortestPath(int vertices) {
    	V=vertices;
    }
    int minDistance(int dist[],boolean sptSet[])
    {
    	int min=Integer.MAX_VALUE, min_index=-1;
    	for(int i=0;i<V;i++)
    	{ if (!sptSet[i] && dist[i] <= min) { 
    		min=dist[i];
    		min_index=i;}
    	}
    	return min_index;
    }
    void printSol(int dist[])
    {
    	System.out.println("Vertex \t\t Distance from Source");
    	for(int i=0;i<V;i++)
    	{
    		System.out.println(i+ "\t\t\t" + dist[i]);
    	}
    }


    void dijsktra(int graph[][],int src) {
    	int dist[] = new int[V];
    	boolean sptSet[]=new boolean [V];
    	
    	for(int i=0;i<V;i++)
    	{
    		dist[i]=Integer.MAX_VALUE;
    		sptSet[i]=false;
    	}
    	
    	dist[src]=0;
    	
    	for(int count=0;count<V-1;count++) {
    		int u = minDistance(dist,sptSet);
    		sptSet[u] = true;
    	
    	for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] != 0 &&
                dist[u] != Integer.MAX_VALUE &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
    	  }
    	}
    
    	printSol(dist);
    }
}
