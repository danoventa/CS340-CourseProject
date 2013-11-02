#ifndef WORLDMAP_H
#define WORLDMAP_H

class WorldMap{
private:
    MapNode *current;
    MapNode *next;
    MapNode *previous;
    MapNode *alternate;
    string worldName;
public:
    WorldMap();
    ~WorldMap();
};

#endif // WORLDMAP_H
