const frm = document.querySelector("form");
const respErros = document.querySelector("#outErros");
const respChances = document.querySelector("#outChances");
const respDica = document.querySelector("#outDica");

//Estas variáveis permanecem na memória principal do computador
const erros = []; //array
const sorteado = Math.floor(Math.random() * 100) + 1;
const CHANCES = 6;

//Estas variáveis são locais, ou seja, funcionam enquanto a função estiver em execução
frm.addEventListener("submit", (e) => {
    e.preventDefault();

    const numero = Number(frm.inNumero.value); //recebe o número no formulário
    if (numero == sorteado) { //se o número for igual ao sorteado, acertou
        respDica.innerText = `Parabéns! Número sorteado: ${sorteado}`;
        frm.btSubmit.disabled = true;
        frm.btNovo.className = "exibe";
    } else {
        if (erros.includes(numero)) { //verifica se o número que já consta no array
            alert(`Você já apostou o número ${numero}. Tente outro número.`);
        } else {
            erros.push(numero); //se não consta, adiciona no array
            const numErros = erros.length; //verifica o index do array
            const numChances = CHANCES - numErros; //diminui as chances

            respErros.innerText = `${numErros} (${erros.join(", ")})`; //exibe o array
            respChances.innerText = numChances;
            if (numChances == 0) { //se zerar as chances
                alert("Suas chances acabaram.");
                frm.btSubmit.disabled = true;
                frm.btNovo.className = "exibe";
                respDica.innerText = `Game over! Número sorteado: ${sorteado}`;
            } else {
                const dica = numero < sorteado ? "maior" : "menor";
                respDica.innerText = `Dica: tente um número ${dica} que ${numero}.`;
            }
        }
    }
    frm.inNumero.value = "";
    frm.inNumero.focus();
});

frm.btNovo.addEventListener("click", () => {
    location.reload();
});
