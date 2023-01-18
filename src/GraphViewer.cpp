#include "GraphViewer.h"

GraphViewer::GraphViewer(Graph* graph)
{
    this->graph = graph;
}
void GraphViewer::createWindow(int width,int height)
{
    this->window = new sf::RenderWindow(sf::VideoMode(width, height), "SFML works!");
}
void GraphViewer::update()
{
    // while (this->window->isOpen())
    // {
        // sf::Event event;
        // while (this->window->pollEvent(event))
        // {
        //     if (event.type == sf::Event::Closed)
        //         this->window->close();
        // }

    // this->window->clear();
    // this->window->draw(shape);
    // this->window->display();
    // }
}