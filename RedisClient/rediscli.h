#ifndef _REDIS_CLI_
#define _REDIS_CLI_

#include "redTypes.h"
#include <iostream>
#include <string>

namespace rcl{
	class rediscli
	{
	public:
		rediscli() = default;
		rediscli(const rediscli& other) = delete;
		rediscli * redisInit(std::string& addr, uint16_t port);
		void redisDeinit();
		~rediscli();

		// string operation
		bool redis_set(uint64_t key, std::string& value);
		bool resis_set(std::string& key, std::string& value);

		std::string redis_get(uint64_t key);
		std::string redis_get(std::string& key);
	private:
		

	};
};
#endif