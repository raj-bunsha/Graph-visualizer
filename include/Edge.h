#pragma once
#include<bits/stdc++.h>
#include"Vertex.h"

class Edge {
public:
    // Pointers to the vertices that the edge connects
    Vertex* start;
    Vertex* end;
    tuple<int,int,int> color;
    int thickness;
    Edge(Vertex *,Vertex *);
    // Other attributes, such as color and weight
    void setColor(tuple<int,int,int>);
    void setWeight(int weight);

};