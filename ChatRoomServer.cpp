//
// Created by zhangfeng on 2019/8/5.
//
#include <iostream>
#include "ChatRoomServer.h"

Server::Server() {
    serverAddr.sin_family=PF_INET;
    serverAddr.sin_port = htons(SERVER_PORT);
    serverAddr.sin_addr.s_addr = inet_addr(SERVER_IP);

    listener = 0;

    epfd = 0;
}


void Server::Init() {
    cout<<"Init Server ..."<<endl;
}

