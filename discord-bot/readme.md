### 用途
##### Minecraftのサーバーの状態などをdiscordのbotのオンライン状態やstatusメッセージで表示できるようにしています。

仕様は以下の画像のよう...

- Onlineのとき

<img src="https://github.com/siso5/siso5/blob/main/discord-bot/online-1.png" width="30%" /> <img src="https://github.com/siso5/siso5/blob/main/discord-bot/online-2.png" width="30%" />


- Offlineのとき

<img src="https://github.com/siso5/siso5/blob/main/discord-bot/offline-1.png" width="30%" /> <img src="https://github.com/siso5/siso5/blob/main/discord-bot/offline-2.png" width="30%" />



## 変更点

19行目 
`host: 'ww[.]xxx[.]net',    //各自のホスト名などに変更する`

41行目 
`client.login('BOT_TOKEN'); //BotのトークンをBOT_TOKEN'この中に入力する`


## 簡単な説明

### 1.  node.jsを入れる

```
※注意
node.jsのバージョンはdiscord.jsを使うため、
Node.js 16.11.0 or newer is required.
上記の要件を満たしていることを確認してください。

node -vで確認できます...
```

`node -v`

`v19.2.0`

```
このバージョン(v19.2.0)がv16.11.0以上なら次に進む.
```


### 2.  discord, gamedigのライブラリーを入れる

以下のように入力する

`npm install discord.js gamedig`

- 「discord.js」について

URL : [https://www.npmjs.com/package/discord.js?activeTab=readme](https://www.npmjs.com/package/discord.js)

- 「gamedig」について

URL : [https://www.npmjs.com/package/gamedig](https://www.npmjs.com/package/gamedig)

### 3. 起動方法

pm2を用いた起動がおすすめです。

**まず、discordのbotのプログラム(discord-bot-bedrock.js, discord-bot-java.js)が置かれているディレクトリに移動し、そこで以下を実行してください。**

`npm install pm2 -g`

`pm2 start discord-bot-bedrock.js --name minecraft-bedrock`

`pm2 start discord-bot-java.js --name minecraft-java`


PM2について...

URL : [https://pm2.keymetrics.io/](https://pm2.keymetrics.io/)

