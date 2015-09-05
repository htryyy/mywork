cd ..

BUILD_PATH="$PWD"

export LD_LIBRARY_PATH="$BUILD_PATH/lib":$LD_LIBRARY_PATH
export LD_LIBRARY_PATH="/usr/local/lib":$LD_LIBRARY_PATH
cd ./shell
