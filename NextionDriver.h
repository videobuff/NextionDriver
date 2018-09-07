/*
 *   Copyright (C) 2017,2018 by Lieven De Samblanx ON7LDS
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(NextionDriver_H)
#define NextionDriver_H

<<<<<<< HEAD
#define NextionDriver_VERSION "1.02esh"
=======
#define NextionDriver_VERSION "1.04"
>>>>>>> on7lds/master

#define TRUE	1
#define FALSE	0

#define DEBUG	1

#define NEXTIONPORT			"/dev/ttyUSB0"
#define NEXTIONDRIVERLINK	"/dev/ttyNextionDriver"
#define CONFIGFILE			"/etc/mmdvmhost"
#define GROUPSFILE			"groups.txt"
#define USERSFILE			"stripped.csv"
#define MAXGROUPS			1500
#define MAXUSERS			120000

#define MODEM_DISPLAY 0
#define MMDVM_DISPLAY 1

#define BAUDRATE3	B9600
#define BAUDRATE4	B115200

char mux[100];
char mmdvmPort[100];
char nextionPort[100];
char nextionDriverLink[100];
char configFile[200];
char datafiledir[500];
char groupsFile[100],usersFile[100];
char location[200];
char rxoff[200];
char txoff[200];
int verbose, screenLayout;

typedef struct groupdata
{
    int   nr;
    char *name;
} group_t;

typedef struct userdata
{
    int   nr;
    char *data1;
    char *data2;
    char *data3;
    char *data4;
    char *data5;
} user_t;

int gelezen;
int check;
int page,changepages,removeDim;
char ipaddr[100];

unsigned int RXfrequency,TXfrequency,RXoffset,TXoffset;
	group_t groups[MAXGROUPS];
	user_t users[MAXUSERS];
	int nmbr_groups, nmbr_users;

int fd1,fd2;
int become_daemon;

int modeIsEnabled[20];
int netIsActive[10];

int transparentIsEnabled,sendFrameType;
char remotePort[10],localPort[10];

char TXbuffer[1024],RXbuffer[1024];

char* RGBtoNextionColor(int RGB);
void sendCommand(char *cmd);
void writelog(int level, char *fmt, ...);

#endif
