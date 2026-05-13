const frm = document.querySelector("form");
const resp1 = document.querySelector("#outResp1");
const resp2 = document.querySelector("#outResp2");

frm.addEventListener("submit", (e) => {
    e.preventDefault();

    const valor = Number(frm.inValor.value);
    
    if (valor < 1) {
        alert(`Valor insuficiente`);
        frm.inValor.focus()
        return;
    }

    if (valor >= 1 && valor < 1.75) {
        resp1.innerText = `Tempo: 30 minutos`;
        resp2.innerText = `Troco R$: ${valor -1}`;
        return;
    }

    if (valor >= 1.75 && valor < 3) {
        resp1.innerText = `Tempo: 60 minutos`;
        resp2.innerText = `Troco R$: ${valor -1.75}`;
        return;
    }

    if (valor >= 3) {
        resp1.innerText = `Tempo: 120 minutos`;
        resp2.innerText = `Troco R$: ${valor -3}`;
        return;
    }

});