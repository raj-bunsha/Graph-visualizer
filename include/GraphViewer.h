#include "Graph.h"
#include <SFML/Graphics.hpp>
class GraphViewer
{
    private:
        Graph *graph;
        sf::RenderWindow *window;
    public:
        GraphViewer(Graph *);
        void createWindow(int width,int height);
        // void defineVertexColor(int id, string color);
        // void defineEdgeColor(int id, string color);
        // void defineEdgeCurved(int id, bool curved);
        // void defineEdgeDashed(int id, bool dashed);
        // void defineEdgeThickness(int id, int thickness);
        // void defineVertexLabel(int id, string label);
        // void defineVertexSize(int id, int size);
        // void rearrange();
        // void reposition();
        // void closeWindow();
        // void join(int id1, int id2);
        // void setEdgeLabel(int id, string label);
        // void setVertexLabel(int id, string label);

        void update();
        // void removeEdge(int id);
        // void removeVertex(int id);
        //make graph a friend class of GraphViewer
    
};