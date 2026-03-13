#pragma once
#include "raylib-cpp/raylib-cpp.hpp"

class SoundManager {
    public:
    static inline Sound attack;
    static inline Sound dead;
    static inline Music bgMusic;
    static inline Sound gameOver;
    static inline Sound hit;
    static inline Sound shoot;

    static void Load() {
        attack = LoadSound("audio/attack.mp3");
        dead = LoadSound("audio/dead.mp3");
        bgMusic = LoadMusicStream("audio/music.mp3");
        SetMusicVolume(bgMusic, 0.5f);
        gameOver = LoadSound("audio/gameOver.mp3");
        hit = LoadSound("audio/hit.mp3");
        shoot = LoadSound("audio/shoot.mp3");
    }

    static bool MusicLoaded() {
        return bgMusic.ctxData != nullptr;
    }

    static void Unload() {
        UnloadSound(attack);
        UnloadSound(dead);
        UnloadMusicStream(bgMusic);
        UnloadSound(gameOver);
        UnloadSound(hit);
        UnloadSound(shoot);
    }
};
