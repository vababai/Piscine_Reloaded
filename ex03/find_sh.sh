#!/bin/sh
basename $(find . -type f -name "*.sh") | sed "s/\.sh$//g"
