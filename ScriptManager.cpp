/*
** EPITECH PROJECT, 2023
** GameEngine
** File description:
** ScriptManager
*/

#include "ScriptManager.hpp"

ScriptManager::ScriptManager() {}

void ScriptManager::addScript(std::shared_ptr<IScript> script) {
    _scripts.push_back(script);
}

bool ScriptManager::removeScript(int id) {
    for (std::size_t i = 0; i < _scripts.size(); i++) {
        if (_scripts[i]->getId() == id) {
            this->_scripts.erase(this->_scripts.begin() + i);
            return (true);
        }
    }
    return (false);
}

std::shared_ptr<IScript> &ScriptManager::getScript(int id) {
    for (std::size_t i = 0; i < _scripts.size(); i++) {
        if (_scripts[i]->getId() == id) {
            return (this->_scripts.begin() + i);
        }
    }
    //TODO THROW
}

std::shared_ptr<IScript> &ScriptManager::operator[](int index) {
    return _scripts[index];
}
