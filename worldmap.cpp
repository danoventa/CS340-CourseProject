#include "worldmap.h"

WorldMap::WorldMap(){
    Console.WriteLine("World has been created");
    MapNode **level = new (MapNode*)MapNode(MapNode);


}

WorldMap::~WorldMap(){
    Console.WriteLine("World has been completed.")
    foreach(MapNode node in level){
        delete(node);
    }
    delete(level);
}
