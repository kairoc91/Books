//DETAHES DO EXERCÍCIO:
// Inputs: Peso da ração em kg, consumo diário em gramas
// Outputs: número de dias que durará a ração (em gramas)

const prompt = require("prompt-sync")();

const peso = Number(prompt("Peso da ação (Kg): "));
const consumo = Number(prompt("Consumo diário (g): "));
const duracao = peso * 1000 / consumo;

console.log(`Duração: ${Math.floor(duracao)} dia(s)`);
console.log(`Sobra: ${peso * 1000 % consumo} g`);