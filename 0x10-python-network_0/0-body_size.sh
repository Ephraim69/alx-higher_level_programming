#!/bin/bash
# Bash script that displays size of a HTTP response body
curl -s -w '%{size_download}\n' -o /dev/null "$1"
