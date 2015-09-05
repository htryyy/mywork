/*
 * strManager.h
 *
 *  Created on: 2015Äê9ÔÂ3ÈÕ
 *      Author: Administrator
 */

#ifndef SRC_STRMANAGER_H_
#define SRC_STRMANAGER_H_

#include <string>
#include <vector>
using namespace std;

typedef vector<string> InfoList;

int getList(char *filepath,InfoList &infolist);
InfoList disposeStr(InfoList infolist);
void splitStr(char *inbuf,int strlen,InfoList &str,char delimiter);




#endif /* SRC_STRMANAGER_H_ */
