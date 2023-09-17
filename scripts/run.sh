#!/bin/bash

if [ ! "$(docker ps -a -q -f name=soulrinha)" ]; then
    if [ "$(docker ps -aq -f status=exited -f name=soulrinha)" ]; then
        # cleanup
        docker rm soulrinha
    fi

    # run your container
    docker run --cpus=2 -m 2048m --mount type=bind,source="$(pwd)/var/rinha",target=/var/rinha -d --name soulrinha compiler/soulrinha
fi
