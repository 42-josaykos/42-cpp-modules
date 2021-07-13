#!/usr/bin/env bash

EXEC=accounts

make 1>/dev/null ; ./${EXEC} > results.log
sed -i "s/\[.*\]/\[19920104_091532\]/g" results.log
if [[ $(diff results.log 19920104_091532.log | wc -l) -eq 0 ]];
then
  echo "OK"
else
  diff results.log 19920104_091532.log > results.log
  echo "KO"
fi