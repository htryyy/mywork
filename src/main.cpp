/*
 * main.cpp
 *
 *  Created on: 2015年9月4日
 *      Author: Administrator
 */
#include <stdio.h>
#include <sys/epoll.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <getopt.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "logTools.h"
#include "strManager.h"
#include "confparser.h"

using namespace std;
static void version()
{
	cout<<"MySpider:\n		Version: 1.0"<<endl;
}

static void usage()
{
	cout<<"Usage: ./spider [Options]\n"
			<<"\nOptions:\n"
			<<" -h\t: Help\n"
			<<" -v\t: Version\n"
			<<" -d\t run program as a daemon process\n"<<endl;
}

int main(int argc,char *argv[])
{
	int daemonsized = 0;
	char ch;
	vector<string> test1,test2;
/*	while((ch = getopt(argc,(char* const*)argv,"vhd")) != -1)
	{
		switch(ch)
		{
		case 'v':
			version();break;
		case 'd':
			daemonsized =1;
			break;
		case 'h':

		case '?':
		default:
			usage();
		}
	}*/

	ConfigParser parser;
	parser.loadConf("../conf.ini");//加载配置文件

	return 0;
}




