::動的ライブラリのパスおよび、pkg-configへのパスを設定する
set PATH=gtk\bin\;%PATH%


::makeを使いやすくする
doskey make = mingw32-make $*
::make cleanを使えるようにする
doskey rm = del $*


cmd.exe