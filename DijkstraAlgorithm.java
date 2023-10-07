import java.util.*;

public class DijkstraAlgorithm {
    static class Edge {
        int destination;
        int weight;

        Edge(int destination, int weight) {
            this.destination = destination;
            this.weight = weight;
        }
    }

    public static void main(String[] args) {
        int V = 6; // Number of vertices
        int source = 0; // Source vertex

        List<List<Edge>> graph = new ArrayList<>();

        // Initialize the adjacency list representation of the graph
        for (int i = 0; i < V; i++) {
            graph.add(new ArrayList<>());
        }

        // Add edges to the graph
        addEdge(graph, 0, 1, 4);
        addEdge(graph, 0, 2, 3);
        addEdge(graph, 1, 2, 1);
        addEdge(graph, 1, 3, 2);
        addEdge(graph, 2, 3, 4);
        addEdge(graph, 2, 4, 5);
        addEdge(graph, 3, 4, 1);
        addEdge(graph, 3, 5, 3);
        addEdge(graph, 4, 5, 7);

        int[] distances = dijkstra(graph, source, V);

        // Print the shortest distances from the source to all other vertices
        for (int i = 0; i < V; i++) {
            System.out.println("Shortest distance from source to vertex " + i + ": " + distances[i]);
        }
    }

    static void addEdge(List<List<Edge>> graph, int source, int destination, int weight) {
        graph.get(source).add(new Edge(destination, weight));
        graph.get(destination).add(new Edge(source, weight)); // For undirected graph
    }

    static int[] dijkstra(List<List<Edge>> graph, int source, int V) {
        int[] distances = new int[V];
        Arrays.fill(distances, Integer.MAX_VALUE);

        PriorityQueue<Edge> minHeap = new PriorityQueue<>(Comparator.comparingInt(edge -> edge.weight));
        distances[source] = 0;
        minHeap.offer(new Edge(source, 0));

        while (!minHeap.isEmpty()) {
            Edge current = minHeap.poll();
            int currentVertex = current.destination;

            for (Edge neighbor : graph.get(currentVertex)) {
                int newDistance = distances[currentVertex] + neighbor.weight;
                if (newDistance < distances[neighbor.destination]) {
                    distances[neighbor.destination] = newDistance;
                    minHeap.offer(new Edge(neighbor.destination, newDistance));
                }
            }
        }

        return distances;
    }
}
