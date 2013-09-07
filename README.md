GTKプロジェクトディレクトリ

WindowsとLinuxの両環境で、変更なしにGTKアプリケーションを開発可能なプロジェクトディレクトリです。

使用するには、gccとGTKライブラリの導入が必要です。
詳細な手順はブログ記事(http://blog.michinari-nukazawa.com/2013/07/windowsgtk.html )を参照してください。

Windows：
・MinGWを導入
・GTKライブラリをダウンロードしてプロジェクトフォルダ内に配置(gtk\ディレクトリを作成する)
・コンパイルおよび実行は!cons.batを実行して立ち上がるコマンドプロンプトから行う。

Linux:
・パッケージマネージャでgcc,makeおよびlibgtk+-2.0を導入。

コンパイルおよび実行のコマンド(Windows, Linux共通)：
make run
以上。


