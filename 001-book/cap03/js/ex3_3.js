// DETALHES DO EXERCÍCIO:
// Inputs: salário, tempo de serviço
// Outputs: quantidade de quadriênios e salário final
// Regra: a cada 4 anos +1% no salário

const prompt = require("prompt-sync")();

const salario = Number(prompt("Salário R$: "));
const tempo = Number(prompt("Tempo de serviço em anos: "));

const reajuste = Math.floor(tempo / 4) * 0.01;

console.log(`Tem direito a ${Math.floor(tempo / 4)} quadriênio(s).`);
console.log(
  `Seu salário reajustado é de R$: ${(salario + salario * reajuste).toFixed(2)}`
);