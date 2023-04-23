### 用途
##### Minecraftのサーバーの状態などをdiscordのbotのオンライン状態やstatusメッセージで表示できるようにしています。

### 変更点

19行目  host: 'ww[.]xxx[.]net',　//各自のホスト名などに変更する。

41行目　client.login('BOT_TOKEN');　//Botのトークンを入力する


#### 簡単な説明

1.  node.jsを入れる

2.  discord, gamedigのライブラリーを入れる
(URL : https://www.npmjs.com/package/gamedig )

以下のように入力する

       npm install discord.js gamedig

3. 起動方法

pm2を用いた起動がおすすめです。
( URL : https://pm2.keymetrics.io/ )

まず、discordのbotのプログラム(discord-bot-bedrock.js, discord-bot-java.js)が置かれているディレクトリに移動し、そこで以下を実行してください。


        npm install pm2 -g
　
 
        pm2 start dicord-bot-bedrock.js --name minecraft-bedrock
       
　
 
        pm2 start dicord-bot-java.js --name minecraft-java
        
 
 ※pm2の詳しい使い方などはpm2のHPを見てください。


