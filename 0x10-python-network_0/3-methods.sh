#!/bin/bash
# display all HTTP methods the server will accept using curl.
curl -s -I "$1" | grep "Allow" | cut -d " " -f 2-
