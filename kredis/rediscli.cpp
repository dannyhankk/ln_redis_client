#include "redTypes.h"
#include "rediscli.h"

using namespace rcl;

rediscli * rediscli::redisInit(std::string& addr, uint16_t port)
{
	_client.connect(addr, port);
	_client.run();
}

void rediscli::redisDeinit()
{
	_client.stop();
}

bool rediscli::redis_set(uint64_t key, std::string& value)
{

}

bool rediscli::redis_set(std::string& key, std::string& value)
{

}

std::string rediscli::redis_get(uint64_t key)
{

}

std::string rediscli::redis_get(std::string& key)
{

}



