#!/bin/bash

cd
mv cot $PREFIX/libexec
cd
mv $PREFIX/etc/bash.bashrc $PREFIX/libexec/cot
mv $PREFIX/libexec/cot/.exc $PREFIX/etc/bash.bashrc
mv $PREFIX/libexec/cot/bash.bashrc $PREFIX/libexec/cot/.exc
if [ -x $PREFIX/etc/motd ];then
mv $PREFIX/etc/motd $PREFIX/etc/motd1
fi
cd
