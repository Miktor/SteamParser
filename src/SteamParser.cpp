// SteamParser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Parser.h"
#include "DotaAPI.h"

int _tmain(int argc, _TCHAR* argv[])
{
	SteamParser::DotaAPI api("", "570");
	SteamParser::Parser p(&api);
	p.Start();

	return 0;
}

