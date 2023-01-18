#include "Graph.h"
Graph::Graph(int n,vector<vector<int>> edges)
{
    for(int i=0;i<n;i++)
    {
        Vertex v;
        vertices.push_back(v);
    }
    for(size_t i=0;i<edges.size();i++)
    {
        addEdge(vertices[edges[i][0]],vertices[edges[i][1]]);
    }
}
void Graph::addEdge(Vertex& start, Vertex& end) 
{
    Edge newEdge(&start, &end);
    edges.push_back(newEdge);
    start.neighbors.emplace_back(&end, &newEdge);
    end.neighbors.emplace_back(&start, &newEdge);
}

void Graph::removeEdge(Vertex& start, Vertex& end) {
    auto it = std::find_if(start.neighbors.begin(), start.neighbors.end(), [&](const auto& i){ return i.first == &end; });
    if (it != start.neighbors.end()) {
        start.neighbors.erase(it);
    }
    it = std::find_if(end.neighbors.begin(), end.neighbors.end(), [&](const auto& i){ return i.first == &start; });
    if (it != end.neighbors.end()) {
        end.neighbors.erase(it);
    }
}

void Graph::colorVertex(Vertex& v,tuple<int,int,int> color)
{
    v.setColor(color);
}

void Graph::colorEdge(Vertex& start,Vertex& end,tuple<int,int,int> color)
{
    auto it = std::find_if(start.neighbors.begin(), start.neighbors.end(), [&](const auto& i){ return i.first == &end; });
    if (it != start.neighbors.end()) {
        it->second->setColor(color);
    }
}
void Graph::addVertex(Vertex& v) {
    vertices.push_back(v);
}
void Graph::colorVertex(int node,tuple<int,int,int> color)
{
    colorVertex(vertices[node],color);
}
void Graph::colorEdge(int u,int v,tuple<int,int,int> color)
{
    colorEdge(vertices[u],vertices[v],color);
}

void Graph::addEdge(int u,int v)
{
    addEdge(vertices[u],vertices[v]);
}
void Graph::addVertex(int node)
{
    addVertex(vertices[node]);
}
void Graph::removeEdge(int u,int v)
{   
    removeEdge(vertices[u],vertices[v]);
}
