#!/bin/sh
# vim: ft=sh ff=unix fenc=utf-8
# file: getegl.sh

for q in $(wget http://www.khronos.org/registry/egl/ -O /dev/stdout |\
	sed 's/"/\n/' | grep 'specs/eglspec' |\
	head -n 2 | awk -F '"' ' {print $1}');
do
	wget "http://khronos.org/registry/egl/${q}"
done

