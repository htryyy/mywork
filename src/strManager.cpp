/*
 * strManager.cpp
 *
 *  Created on: 2015Äê9ÔÂ3ÈÕ
 *      Author: Administrator
 */

#include "strManager.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <unistd.h>

int getList(char *filepath,InfoList &infoList)
{
	fstream infile;
	char buf[2048];
	infoList.clear();
	if(strlen(filepath) <= 0)
	{
		return -1;
	}
	infile.open(filepath, std::ios::in);
	if (infile==NULL)
	{
		return 0;
	}
	while(!infile.eof())
	{
		memset(buf, 0, sizeof(buf));
		infile.getline(buf, sizeof(buf), '\n');
		for(int i = 0; i < (int)strlen(buf); i++)
		{
			if(buf[i] == 9)
			{
				buf[i] = 0;
				break;
			}
		}
		if(strlen(buf) < 0)
		{
			continue;
		}
		else
		{
			infoList.push_back(buf);
		}
	}
	infile.close();
	return infoList.size();
}

InfoList disposeStr(InfoList infolist)
{
	char temp[1024];
	vector<string> list;
	for(int i=0;i<infolist.size();i++)
	{
		memset(temp,0 ,sizeof(temp));
		sprintf(temp,"%s",infolist[i].c_str());
		if(temp[0]=='#'||strlen(temp)<2||temp[0]==' ')
			continue;
		list.push_back(temp);
	}
	return list;
}

void splitStr(char *inbuf,int inlen,InfoList &str,char delimiter)
{
	int i=0,j=0;
	char temp[inlen];
	str.clear();
	memset(temp,0,sizeof(temp));
	if((int)strlen(inbuf)!= inlen)
	{
		cout<<"error"<<endl;
	}
	for(;i<inlen;i++)
	{
		if(inbuf[i] == delimiter)
		{
			if(j==0)
				continue;
			else
			{
				str.push_back(temp);
				memset(temp,0,sizeof(temp));
				j=0;
			}
			continue;
		}
		temp[j++] = inbuf[i];
	}
	if(j>0)
	{
		str.push_back(temp);
	}
}
