#pragma once
#include"EverydayLife.h"
class GameProgrammer:public EverydayLife
{
public:
    void Commute() override;

    void Work() override;

    void GoingHome() override;
};

