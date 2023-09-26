//
// Created by youba on 26/09/2023.
//

#pragma once

#include <functional>
#include <memory>
#include <map>
#include <json/value.h>
#include "IScript.hpp"
#include "../UnitiGame.hpp"

namespace UnitiGameEngine {
    template<typename... Args>
    using creatorFunction = std::function<std::unique_ptr<IScript>(Uniti &game, IObject &object)>;
    class ScriptFactory {
        public:
            std::unique_ptr<IScript> createScript(const std::string &name, Uniti &game, IObject &object);
            template<typename OBJECT>
            creatorFunction<> addScript() {
                return [&](Uniti &game, IObject &object) -> std::unique_ptr<IScript> {
                    return std::make_unique<OBJECT>(game, object);
                };
            }
        private:
            std::map<std::string, creatorFunction<>> creators;
    };
}
