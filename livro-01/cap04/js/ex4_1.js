const frm = document.querySelector("form");
const outResp1 = document.querySelector("#outResp1");
const outResp2 = document.querySelector("#outResp2"); 

frm.addEventListener("submit", (e) => {
    e.preventDefault()
    const nome = frm.inNome.value;
    const nota1 = Number(frm.inNota1.value);
    const nota2 = Number(frm.inNota2.value);
    const media = (nota1 + nota2) / 2;
    outResp1.innerText = `Média das notas: ${media.toFixed(2)}`

if (media >= 7) {
    outResp2.innerText = `Parabéns ${nome}! Você foi aprovado(a).`
    outResp2.style.color = "blue"
}
else {
    outResp2.innerText = `${nome}, você foi reprovado(a).`
    outResp2.style.color = "red"
}
});