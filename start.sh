#!/bin/bash

helpFunction() {
  echo "Please, use -s to run source script and -c to run compose source script"
  exit 1
}

source()
{
  bash scripts/build.sh
  bash scripts/run.sh
}

compose()
{
  bash scripts/run-compose.sh
}

while getopts "s:c" opt
do
  case "$opt" in
    s ) source ;;
    c ) compose ;;
    ? ) helpFunction ;;
  esac
done


