const frm = document.querySelector("form");
const resp1 = document.querySelector("#outResp1");
const resp2 = document.querySelector("#outResp2");

frm.addEventListener("submit", (e) => {
    const produto = frm.inProduto.value;
    const preco = Number(frm.inPreco.value)
    const promocao = (preco * 2) + (preco * 0.50)

    resp1.innerText = `Promoção de ${produto} - Leve 3 por R$ ${promocao.toFixed(2)}`
    resp2.innerText = `O terceiro produto sai por apenas R$: ${(preco * 0.50).toFixed(2)}`

    e.preventDefault()
});