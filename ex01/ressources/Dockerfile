FROM amd64/debian:bookworm

COPY ./passwd /etc/.

RUN apt update

RUN apt install john -y

CMD ["sleep", "infinity"]