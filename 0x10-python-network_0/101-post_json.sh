#!/bin/bash
# sends file as a post data
curl -s -X POST -d @"$2" -H "Content-Type: application/json" "$1"
