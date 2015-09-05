
CPPFLAGS = -Wall -g -D_DEBUG -m64 -fPIC -I /usr/local/log4cpius/include -L /usr/local/log4cplus/lib
#LDFLAGS = -m64 -lssl -lcrypto -lpthread   -liconv
LDFLAGS =  -lpthread -llog4cplus
OBJ = logTools.o strManager.o confparser.o main.o
		                         
BIN = client

all : $(BIN) 

$(BIN) : $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $^ -llog4cplus
	
	
.PHONY : clean build rebuild
clean :
	@ -rm -rf build
	@ -rm -f $(OBJ) $(BIN)
	
build :
	$(MAKE)
	
rebuild :
	$(MAKE)	clean
	$(MAKE) build
