#ifndef DotaAPI_h__
#define DotaAPI_h__

#include "stdafx.h"

namespace SteamParser{

	class DotaAPI
	{
	public:
		DotaAPI(std::string apiKey, std::string dotaVersion);
		~DotaAPI();

		void GetMatchHistoryBySeqNumber(const uint64_t &seqNum);
	};

}

#endif // DotaAPI_h__
