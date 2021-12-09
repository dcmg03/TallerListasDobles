//
// Created by Deisy Carolina Monroy on 8/12/2021.
//

#ifndef TALLERLISTASDOBLES_SIM_H
#define TALLERLISTASDOBLES_SIM_H
#include <string>
#include <ostream>

using namespace std;
class Sim {
private:
    string id;
    string number;
    string mark;
public:
    Sim();

    Sim(const string &id, const string &number, const string &mark);

    const string &getId() const;

    void setId(const string &id);

    const string &getNumber() const;

    void setNumber(const string &number);

    const string &getMark() const;

    void setMark(const string &mark);

    string toString();

    friend ostream &operator<<(ostream &os, const Sim &sim);

    virtual ~Sim();
};


#endif //TALLERLISTASDOBLES_SIM_H
