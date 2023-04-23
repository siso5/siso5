function updateServerStatus() {
  Gamedig.query({
    type: 'minecraft',
    host: 'ww[.]xxx[.]net',　///19行目のここは各自のホスト名などに変更する。
    port: 19132

///

// ボットをログインさせる
41行目　client.login('BOT_TOKEN');　//Botのトークンを入力する


#### 簡単な説明

1.  node.jsを入れる
2.　discord, gamedigのライブラリーを入れる
(URL : https://www.npmjs.com/package/gamedig )

以下のように入力する

       npm install discord.js gamedig


pm2を用いた起動がおすすめです。
( URL : https://pm2.keymetrics.io/ )

まず、discordのbotのプログラム(discord-bot.js)が置かれているディレクトリに移動し、そこで以下を実行してください。


        npm install pm2 -g
     
        pm2 start di


