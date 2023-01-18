#include <unordered_map>
#include "Vertex.h"
#include "Edge.h"
using namespace std;
class Graph {
    private:
        // Vector to store the edges
        std::vector<Edge> edges;
        std::vector<Vertex> vertices;

        // Methods for adding and removing edges
        void addEdge(Vertex&, Vertex&);
        void removeEdge(Vertex&, Vertex&);
        void addVertex(Vertex &);
        void colorEdge(Vertex&,Vertex&,tuple<int,int,int>);
        void colorVertex(Vertex&,tuple<int,int,int>);
    public:
        Graph(int n,vector<vector<int>> edges);
        void addEdge(int,int);
        void removeEdge(int,int);
        void addVertex(int);
        void removeVertex(int);
        void colorEdge(int,int,tuple<int,int,int>);
        void colorVertex(int,tuple<int,int,int>);

    // friend class GraphViewer;
};
