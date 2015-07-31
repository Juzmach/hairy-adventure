FROM ubuntu
MAINTAINER Juuso Strömberg <juuso.stromberg@gmail.com>
RUN provision/basic.sh && provision/ruby.sh
COPY . /opt/sinatra/
RUN gem install bundler
EXPOSE 5000
RUN cd /opt/sinatra && git pull && bundle install
CMD ["/usr/local/bin/foreman","start","-d","/opt/sinatra"]