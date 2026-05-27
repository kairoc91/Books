const prompt = require("prompt-sync")();

const inNome = prompt("Nome do produto: ");
const inNumero = Number(prompt("Número de etiquetas: "));

for (let i = 1; i <= inNumero / 2; i++) {
    console.log(`${inNome.padEnd(30, " .")} ${inNome.padEnd(30)}`);
}

if (inNumero % 2 == 1) {
    console.log(inNome);
}