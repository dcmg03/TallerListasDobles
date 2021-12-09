//
// Created by Deisy Carolina Monroy on 8/12/2021.
//

#ifndef TALLERLISTASDOBLES_GESTION_H
#define TALLERLISTASDOBLES_GESTION_H

#include "Sim.h"
#include "LinkedDouble.h"
#include "Gestion.h"
class Gestion {
private:
    LinkedDouble<Sim>* linked;

public:
    Gestion() {
        linked = new LinkedDouble<Sim>();
        linked->addNodeFirst(Sim("2","3163049613","Movistar"));
        linked->addNodeFirst(Sim("1","3163049913","Claro"));
        linked->addNodeLast(Sim("3","3183274799","Tigo"));
        linked->addNodeLast(Sim("4","3153048613","Movi"));
    }

    void addNodeFirst(Sim);

    void addNodeLast(Sim);

    bool contNode(std::string);

    string findNode(std::string);

    bool addNodeAfterTo(string,Sim);

    bool addNodeBeforTo(string,Sim);

    void addNodeSorted(Sim info){
        linked->addNodeSorted(info);
    }

    string viewList();


    virtual ~Gestion();
};


#endif //TALLERLISTASDOBLES_GESTION_H
