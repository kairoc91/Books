const frm = document.querySelector("form");
const resp = document.querySelector("pre");

frm.addEventListener("submit", (e) => {
    e.preventDefault();

    let num = Number(frm.inChinchila.value);
    const anos = Number(frm.inAnos.value);

    let resposta = "";

    for (let i = 1; i <= anos; i++) {
        resposta += `${i}º ano: ${num} Chinchilas.\n`;
        num *= 3;
    }

    resp.innerText = resposta;
});
