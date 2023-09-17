# Rinha de Compiladores (C++)

![Logo](https://raw.githubusercontent.com/mr-soulfox/rinha-de-compiler/main/img/banner.png)

My participation in the 'Rinha de Compiladores (ou interpretadores)' created and mediated by [@aripiprazole](https://github.com/aripiprazole) & [@algebraic-sofia](https://github.com/algebraic-sofia).

## Tech Stack

**C++** | **CMake** | **Docker**

## Run from image ([pkg](https://github.com/mr-soulfox/soulrinha/pkgs/container/soulrinha))

Use to run container.

Note: replace the _<mount_point>_ with the path to directory with the files (**.rinha** or **.json**).

```bash
  docker run --mount type=bind,source="<mount_point>",target=/var/rinha -d --name soulrinha-compiler ghcr.io/mr-soulfox/soulrinha:latest
```

Use to run container with only 2 CPUs and 2GiB memory ram.

Note: replace the _<mount_point>_ with the path to directory with the files (**.rinha** or **.json**).

```bash
  docker run --cpus=2 -m 2048m --mount type=bind,source="<mount_point>",target=/var/rinha -d --name soulrinha-compiler rinha/soulrinha:latest
```

## Run from source (Docker Compose)

Clone repository and enter in directory.

```bash
  git clone https://github.com/mr-soulfox/soulrinha && cd soulrinha
```

Place the files you want to run (.rinha or .json) in **var/rinha** folder, and up container.

```bash
  docker-compose up
```

## Run from source

Clone repository and enter in directory.

```bash
  git clone https://github.com/mr-soulfox/soulrinha && cd soulrinha
```

Place the files you want to run (.rinha or .json) in **var/rinha** folder, and run the **start.sh** script to initialize.

```bash
  bash ./start.sh
```

## Authors

[@mr-soulfox](https://www.github.com/mr-soulfox)

## License

[AGPL v3.0](https://choosealicense.com/licenses/agpl-3.0/)
