//
// Created by youba on 07/10/2023.
//

#include <iostream>
#include "Uniti.hpp"
#include "MouseMovement.hpp"
#include "ButtonNavigation.hpp"
#include "Animation.hpp"
#include "NetworkBase.hpp"
#include "MissileHandler.hpp"
#include "DisplayHP.hpp"
#include "Timer.hpp"
#include "Explosion.hpp"
#include "InputField.hpp"
#include "Parallax.hpp"

int main() {
    Uniti::Game::Core::initProject("../../json/project.json");

    Uniti::Game::Core::getScriptFactory().addScript<MouseMovement>("MouseMovement");
    Uniti::Game::Core::getScriptFactory().addScript<ButtonNavigation>("ButtonNavigation");
    Uniti::Game::Core::getScriptFactory().addScript<Animation>("Animation");
    Uniti::Game::Core::getScriptFactory().addScript<NetworkBase>("NetworkBase");
    Uniti::Game::Core::getScriptFactory().addScript<MissileHandler>("MissileHandler");
    Uniti::Game::Core::getScriptFactory().addScript<DisplayHP>("DisplayHP");
    Uniti::Game::Core::getScriptFactory().addScript<Timer>("Timer");
    Uniti::Game::Core::getScriptFactory().addScript<Explosion>("Explosion");
    Uniti::Game::Core::getScriptFactory().addScript<InputField>("InputField");
    Uniti::Game::Core::getScriptFactory().addScript<Parallax>("Parallax");

    std::cout << Uniti::Game::Core::getProjectInfo().name << std::endl;
    Uniti::Game::Core::start();
}