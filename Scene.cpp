/*
** EPITECH PROJECT, 2023
** GameEngine
** File description:
** Scene
*/

#include "Scene.hpp"

Scene::Scene() {}

void Scene::addObject(std::unique_ptr<Object> object) {
    _objects.push_back(object);
}

bool Scene::removeObject(std::string name) {
    for (std::size_t i = 0; i < _objects.size(); i++) {
        if (_objects[i]->getName() == name) {
            this->_objects.erase(this->_objects.begin() + i);
            return (true);
        }
    }
    return (false);
}

void Scene::moveObjectTo(std::unique_ptr<Object> object, Scene &scene) {
    scene._objects.push_back(std::move(object));
}

void Scene::display(Transform transform) {
    //TODO 
}
