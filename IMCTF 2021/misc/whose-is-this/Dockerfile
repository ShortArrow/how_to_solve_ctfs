FROM python:3.9.2-alpine

ENV appname="helhel"
RUN apk --no-cache add socat
WORKDIR /home/${appname}

COPY ./app.py ./
RUN mkdir ./dist
COPY ./dist/helmet.enc ./dist
COPY ./dist/helmet.list ./dist

RUN chmod 755 -R /home/${appname}
RUN adduser -D ${appname}
USER ${appname}

CMD socat TCP-L:55555,fork,reuseaddr EXEC:"python3 ./app.py",stderr