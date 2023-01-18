#pragma once
#include<bits/stdc++.h>
// #include "Edge.h"
using namespace std;
class Edge;

class Vertex {
public:
    // Position attribute for drawing the vertex in the SFML window
    tuple<int,int> position;
    tuple<int,int,int> color;
    // list of neighboring vertices
    vector<pair<Vertex*, Edge*>> neighbors;
    void setColor(tuple<int,int,int>);
    // Other attributes, such as color and label
};