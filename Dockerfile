FROM busybox:latest


COPY main .
RUN chmod +x main

ENTRYPOINT ["./main"]
