/*
** EPITECH PROJECT, 2023
** GameEngine
** File description:
** Sound
*/

#include "Sound.hpp"

Sound::Sound() {
}

Sound::~Sound() {
}

void Sound::playSound(const std::string& soundFilePath) {
    if (!soundBuffer.loadFromFile(soundFilePath)) {
        return;
    }

    sound.setBuffer(soundBuffer);
    sound.play();
}

void Sound::playMusic(const std::string& musicFilePath) {
    if (!music.openFromFile(musicFilePath)) {
        return;
    }

    music.play();
}
