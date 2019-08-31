FROM ubuntu:16.04
MAINTAINER Pritam Dash

RUN apt-get update && apt-get install -y git libtool-bin automake autoconf libexpat1-dev python-matplotlib python-serial python-wxgtk3.0 python-wxtools python-lxml python-scipy python-opencv ccache gawk git python-pip python-pexpect
RUN pip install future pymavlink MAVProxy

RUN git clone https://github.com/DependableSystemsLab/stealthy-attacks.git && cd stealthy-attacks/ardupilot && cd / 

ENV PATH=$PATH:/stealthy-attacks/ardupilot/Tools/autotest

EXPOSE 5762
