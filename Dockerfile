FROM gcc:latest
WORKDIR /usr/src/proiectmap
COPY main.c .
RUN gcc -o main main.c
CMD ["./main"]
