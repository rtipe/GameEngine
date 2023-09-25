/*
** EPITECH PROJECT, 2023
** GameEngine
** File description:
** Sound
*/

#pragma once

#include <SFML/Audio.hpp>
#include <string>

class Sound {

public:
    Sound();
    ~Sound();

    void playSound(const std::string& soundFilePath);
    void playMusic(const std::string& musicFilePath);

private:
    sf::SoundBuffer soundBuffer;
    sf::Sound sound;
    sf::Music music;
};
