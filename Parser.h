#ifndef Parser_h__
#define Parser_h__

#include "stdafx.h"

namespace SteamParser{

	class DotaAPI;

	class Parser
	{
	public:
		Parser(SteamParser::DotaAPI *api);
		~Parser();

		void Start();

	private:
		SteamParser::DotaAPI *p_Api;
	};

}

#endif // Parser_h__