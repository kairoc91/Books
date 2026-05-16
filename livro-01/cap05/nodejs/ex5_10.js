const prompt = require("prompt-sync")();

const valor = Number(prompt("Valor da conta R$: "));
const parcelas = Number(prompt("Número de parcelas: "));
const valorParcelas = Math.floor(valor / parcelas);
const ultimaParcela = valorParcelas + (valor % parcelas);

for (let i = 1; i < parcelas; i++) {
console.log(`${i} parcela R$ ${valorParcelas.toFixed(2)}`);
}

console.log(`${parcelas} parcela R$ ${ultimaParcela.toFixed(2)}`);

