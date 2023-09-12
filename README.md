
![Logo](https://raw.githubusercontent.com/mr-soulfox/rinha-de-compiler/main/img/banner.png)


# Rinha de Compiladores (C++)

Minha participação Minha participação na Rinha de compiladores (ou interpretadores) criado e mediado  por [@aripiprazole](https://github.com/aripiprazole) & [@algebraic-sofia](https://github.com/algebraic-sofia)


## Tech Stack

**C++** | **CMake** | **Shell**

## Run from image ([ghrc.io](https://ghrc.io))

Adicione a imagem ao Docker

```bash
  docker push ghcr.io/mr-soulfox/soulrinha:latest
```

Agora rode a imagem.

Obs.: troque o _<mount_point>_ pelo caminho até o diretorio com os arquivos (**.rinha** ou **.json**) 

```bash
  docker run --mount type=bind,source="<mount_point>",target=/var/rinha -d --name soulrinha-compiler rinha/soulrinha:latest
```

Caso queira rodar limitando a quantidade de CPU e a quantidade de  memoria. 

Obs.: troque o _<mount_point>_ pelo caminho até o diretorio com os arquivos (**.rinha** ou **.json**) 

```bash
  docker run --cpus=2 -m 2048m --mount type=bind,source="<mount_point>",target=/var/rinha -d --name soulrinha-compiler rinha/soulrinha:latest
```
    
## Run from source

Clone o repositório

```bash
  git clone https://github.com/mr-soulfox/rinha-de-compiladores-cpp
```

Entre no diretório do projeto 

```bash
  cd rinha-de-compiladores-cpp
```

Rode o _Script_ para criar e rodar a imagem Docker

```bash
  bash ./start.sh
```


## Authors

- [@mr-soulfox](https://www.github.com/mr-soulfox)


## License

[MIT](https://choosealicense.com/licenses/mit/)

