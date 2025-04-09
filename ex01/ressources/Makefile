all: up

build:
	docker build -t john .

run:
	docker run -d --name john_container john:latest

stop:
	docker stop john_container

delete:
	docker rm john_container ; docker rmi john

restart: stop delete build run

enter:
	docker exec -it john_container bash

down: stop delete

up: build run

.PHONY: all build run stop delete restart down up