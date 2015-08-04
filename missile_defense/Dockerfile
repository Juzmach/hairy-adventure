FROM ruby:2.2.2-onbuild
MAINTAINER Juuso Strömberg <juuso.stromberg@gmail.com>
RUN useradd -ms /bin/bash frank
USER frank
WORKDIR /usr/src/app
EXPOSE 5000
CMD ["foreman","start","-d","/usr/src/app"]