//
// Created by Alex Tian on 9/30/2022.
//

#ifndef ANTARESCHESSENGINE_UCI_H
#define ANTARESCHESSENGINE_UCI_H

#include "position.h"
#include "search.h"

class UCI {

public:
    UCI() = default;

    std::string msg;
    std::vector<std::string> tokens;

    Engine engine;
    Position position;

    void initialize_uci();
    void parse_position();
    void parse_go();
    void uci_loop();
};



#endif //ANTARESCHESSENGINE_UCI_H