#!/bin/bash

cd
mv acot $PREFIX/libexec
cd $PREFIX/etc
mv bash.bashrc $PREFIX/libexec/acot
cd $PREFIX/libexec/acot
mv .exc $PREFIX/etc
cd $PREFIX/etc 
mv .exc bash.bashrc
cd $PREFIX/libexec/acot
mv bash.bashrc .exc
cd $PREFIX/libexec/acot
mv config-base $PREFIX/lib
if [ -x $PREFIX/etc/motd ];then
cd $PREFIX/etc
mv motd motd1
fi
cd
if [ -x $PREFIX/bin/act ];then
cd
else
cd $PREFIX/libexec/acot
chmod 777 act
mv act $PREFIX/bin
cd
fi
if [ -x $PREFIX/bin/evo12 ];then
cd
else
cd $PREFIX/libexec/acot
chmod 777 evo12
mv evo12 $PREFIX/bin
cd
fi
