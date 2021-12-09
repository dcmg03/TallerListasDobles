//
// Created by Deisy Carolina Monroy on 8/12/2021.
//


#ifndef TALLERLISTASDOBLES_NODE_H
#define TALLERLISTASDOBLES_NODE_H
#include <cstdlib>

template <class T> class LinkedDouble;
template <class T>
class Node {
    friend class LinkedDouble<T>;


private:
    T info;
    Node<T>* next;
    Node<T>* previous;
public:
    Node(){
        next = NULL;
        previous = NULL;
    }

    Node(T info) : info(info){
        next=NULL;
        previous=NULL;
    }

    virtual ~Node() {

    }
};


#endif //TALLERLISTASDOBLES_NODE_H
