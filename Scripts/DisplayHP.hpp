//
// Created by youba on 13/10/2023.
//

#pragma once

#include "AScript.hpp"

class DisplayHP : public Uniti::Game::AScript {
public:
    explicit DisplayHP(Uniti::Game::Object &gameObject);
    void start() override;
    void update() override;
    void awake(const Json::Value &value) override;
private:
    float _life = 0;
};
