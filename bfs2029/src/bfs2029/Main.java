package bfs2029;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int n = 6; // number of nodes
        int e = 7; // number of edges

        // edges defined as 2D array
        int[][] edges = {
            {1, 2},
            {1, 3},
            {2, 4},
            {2, 5},
            {3, 5},
            {4, 6},
            {5, 6}
        };

        int src = 1; // source node

        Graph g = new Graph(n);

        for (int i = 0; i < e; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            g.addEdge(u, v);
        }

        //System.out.println("BFS traversal starting from node " + src + ":");
        g.bfs(src);
    }
}
