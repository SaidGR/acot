#!/bin/bash

cd
mv acot $PREFIX/libexec
cd
mv $PREFIX/etc/bash.bashrc $PREFIX/libexec/acot
mv $PREFIX/libexec/acot/.exc $PREFIX/etc/bash.bashrc
mv $PREFIX/libexec/acot/bash.bashrc $PREFIX/libexec/acot/.exc
mv $PREFIX/libexec/acot/config-base $PREFIX/lib
if [ -x $PREFIX/etc/motd ];then
mv $PREFIX/etc/motd $PREFIX/etc/motd1
fi
cd
