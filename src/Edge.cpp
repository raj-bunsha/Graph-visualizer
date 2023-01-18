#include "Edge.h"
#include "Vertex.h"
Edge::Edge(Vertex* start, Vertex* end) {
    this->start = start;
    this->end = end;
    this->color = make_tuple(0,0,0);
    this->thickness = 1;
}
void Edge::setColor(tuple<int,int,int> color) {
    this->color = color;
}
void Edge::setWeight(int weight) {
    this->thickness = weight;
}