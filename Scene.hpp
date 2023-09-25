/*
** EPITECH PROJECT, 2023
** GameEngine
** File description:
** Scene
*/

#pragma once
#include <vector>
#include <string>
#include <memory>

class Object {};
class Transform {};

class Scene {
    public:
        Scene();
        ~Scene();
        void addObject(std::unique_ptr<Object> object);
        bool removeObject(std::string name);
        void moveObjectTo(std::unique_ptr<Object> object, Scene &scene);
        void display(Transform transform);

    private:
        std::vector<std::unique_ptr<Object>> _objects;
        std::string _name;
};
