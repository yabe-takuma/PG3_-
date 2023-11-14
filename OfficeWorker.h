#pragma once
#include"EverydayLife.h"
class OfficeWorker: public EverydayLife
{
public:
    void Commute() override;

    void Work() override;

    void GoingHome() override;
};

