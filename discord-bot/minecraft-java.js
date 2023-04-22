const path = require('path');
const { Client, Intents } = require('discord.js');
const Gamedig = require('gamedig');

const client = new Client({
    intents: [
        Intents.FLAGS.GUILDS,
        Intents.FLAGS.GUILD_MESSAGES
    ]
});

client.on('ready', () => {
  console.log(`Logged in as ${client.user.tag}!`);
  updateServerStatus();
});

function updateServerStatus() {
  Gamedig.query({
    type: 'minecraft',
    host: 'www[.]xxx[.]net',
    port: 25565
  }).then((state) => {
    console.log(`Minecraft Java is UP `);
    client.user.setPresence({
      activities: [{ name: Minecraft Java available }],
      status: 'online'
    });
  }).catch((error) => {
    console.log('Minecraft Java is DOWN', error);
    client.user.setPresence({
      activities: [{ name: 'Minecraft Java unavailable' }],
      status: 'dnd'
    });
  }).finally(() => {
    setTimeout(updateServerStatus, 10 * 1000);
  });
}


// ボットをログインさせる
client.login('BOT_TOKEN');
