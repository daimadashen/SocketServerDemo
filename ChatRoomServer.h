//
// Created by zhangfeng on 2019/8/5.
//

#ifndef SOCKETSERVERDEMOE_CHATROOMSERVER_H
#define SOCKETSERVERDEMOE_CHATROOMSERVER_H

#include <string.h>
#include "Common.h"

using namespace std;
class Server
{
public:
    Server();
    void Init();
    void Close();
    void Start();
private:
    int SendBroadcastMessage(int clientfd);
    struct sockaddr_in serverAddr;
    int listener;
    int epfd;
    list<int> clients_list;
};

#endif //SOCKETSERVERDEMOE_CHATROOMSERVER_H
