#!/bin/bash

apt-get update
apt-get upgrade
apt-get install -y git \
				   apt-transport-https \
				   autoconf \
				   bison \
				   build-essential \
				   libssl-dev \
				   libyaml-dev \
				   libreadline6-dev \
				   zlib1g-dev \
				   libncurses5-dev \
				   libffi-dev \
				   libgdbm3 \
				   libgdbm-dev \
				   libpq-dev \
				   libxslt-dev \
				   libxml2-dev \
				   curl \
				   wget