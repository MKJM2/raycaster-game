#include <iostream>
#include <fstream>
#include <algorithm>
#include <string.h>
using namespace std;

#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"


class Game : public olc::PixelGameEngine
{
public:
	Game()
	{
		sAppName = "Game";
	}

public:
	bool OnUserCreate() override
	{

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		return true;
	}
};


int main()
{
	Game demo;
	if (demo.Construct(640, 480, 2, 2))
		demo.Start();
	return 0;
}

