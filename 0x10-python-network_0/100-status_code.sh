#!/bin/bash
# curls just a response code
curl -so /dev/null -w "%{http_code}" "$1"
