/*If you are using uWebSockets,
  remember to change this to uwebsockets_websocket.h*/
#include "sleepy_discord/websocketpp_websocket.h"

class MyClientClass : public SleepyDiscord::DiscordClient {
public:
	using SleepyDiscord::DiscordClient::DiscordClient;
	void onMessage(SleepyDiscord::Message message) override {
		if (message.startsWith("whcg hello"))
			sendMessage(message.channelID, "Hello " + message.author.username);
	}
};

int main() {
	MyClientClass client("TOKEN", 2);
	client.run();
}
