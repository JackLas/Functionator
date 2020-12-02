#!/bin/sh

build_dir=build

if [ "$1" = "-clean" ]; then
	rm -rf $build_dir
fi

if [ "$1" != "-bin" ]; then
	cmake -B${build_dir} -H.
fi

cmake --build ${build_dir}