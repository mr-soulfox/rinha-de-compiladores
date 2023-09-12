#!/bin/bash

if [ ! "$(docker ps -a -q -f name=soulrinha-compiler)" ]; then
    if [ "$(docker ps -aq -f status=exited -f name=soulrinha-compiler)" ]; then
        # cleanup
        docker rm soulrinha-compiler
    fi

    # run your container
    docker run --mount type=bind,source="$(pwd)/var/rinha",target=/var/rinha -d --name soulrinha-compiler rinha/soulrinha
fi
