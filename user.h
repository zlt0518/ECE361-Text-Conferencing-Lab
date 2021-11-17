#ifndef USER_H
#define USER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <signal.h>

void init_database();

bool login(int sfd, unsigned char* un, unsigned char* pw, unsigned char* reply, unsigned char* source );

void logout(unsigned char* un);

bool joinSession(unsigned char* un, unsigned char* sessionID, unsigned char* reply);

void createSession(unsigned char* un, unsigned char* sessionID, unsigned char* reply);

void leaveSession(unsigned char* un);

bool send_txt(unsigned char* un, unsigned char* txt);

void listUserSession(unsigned char* reply);

#endif