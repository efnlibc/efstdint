#!/bin/sh

if [ -d bin ]; then
    rm -rf bin/*
fi

ninja -f build.ninja

if [ -f bin/test ]; then
    chmod +x bin/test
fi

