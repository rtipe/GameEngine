/*
** EPITECH PROJECT, 2023
** GameEngine
** File description:
** ScriptManager
*/

#pragma once
#include <vector>
#include <memory>

class IScript{};


class ScriptManager {
    public:
        ScriptManager();
        void addScript(std::shared_ptr<IScript> script);
        bool removeScript(int id);
        std::shared_ptr<IScript> &getScript(int id);
        std::shared_ptr<IScript> &operator[](int);

    private:
        std::vector<std::shared_ptr<IScript>> _scripts;
};
