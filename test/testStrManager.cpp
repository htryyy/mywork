/*
 * testStrManager.cpp
 *
 *  Created on: 2015Äê9ÔÂ3ÈÕ
 *      Author: Administrator
 */
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <unistd.h>
#include "../src/strManager.h"
using namespace std;

int main()
{
	InfoList info;
	InfoList infolist;
	char key[1024];
	char value[1024];
	char temp[1024];
	int conflist = getList("../conf/conf.ini",info);
	cout<<"length:"<<conflist<<endl;
	for(int i=0;i<info.size();i++)
	{
		cout<<info[i]<<endl;
	}
	cout<<"-----------------------------------------------------------"<<endl;
	info = disposeStr(info);
	for(int i=0;i<info.size();i++)
	{
		//cout<<info.size()<<endl;
		cout<<info[i]<<endl;
	}
	cout<<"-----------------------------------------------------------"<<endl;
	for(int i=0;i<info.size();i++)
	{
		memset(key,0,sizeof(key));
		memset(value,0,sizeof(value));
	    snprintf(temp,sizeof(temp),"%s",info[i].c_str());
		splitStr(temp,strlen(temp),infolist,'=');
		sprintf(key,"%s",infolist[0].c_str());
		sprintf(value,"%s",infolist[1].c_str());
		cout<<"splitStr:"<<key<<"   "<<value<<endl;
		memset(temp,0,sizeof(temp));
	}
	return 0;
}




