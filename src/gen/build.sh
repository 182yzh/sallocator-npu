#!/bin/bash
ACLNN_BUILD_DIR=../build/aclnn
ACLRT_BUILD_DIR=../build/aclrt

function build(){
    
    echo "build aclnn, output path is $ACLNN_BUILD_DIR"
    python total_gen.py aclnn 
    mv *.cpp $ACLNN_BUILD_DIR
    echo "create .cpp files finished."
    make -f aclnn.mak BUILD_DIR=$ACLNN_BUILD_DIR



    echo "build aclrt, output path is $ACLRT_BUILD_DIR"
    python total_gen.py aclrt
    mv *.cpp $ACLRT_BUILD_DIR
    echo "create cpp files finished."
    make -f aclrt.mak BUILD_DIR=$ACLRT_BUILD_DIR
}

function clean(){
    rm $ACLNN_BUILD_DIR/*.so 
    rm $ACLNN_BUILD_DIR/*.o
    rm $ACLNN_BUILD_DIR/*.cpp
    rm $ACLRT_BUILD_DIR/*.so
    rm $ACLRT_BUILD_DIR/*.cpp
    rm $ACLRT_BUILD_DIR/*.o
}

if [[ $# == 0 ]]
then 
    build
else 
    clean
fi



