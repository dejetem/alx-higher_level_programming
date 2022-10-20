#!/bin/bash
# shows allowed a methods
curl -sI "$1" | grep Allow | cut -d' ' -f2-
