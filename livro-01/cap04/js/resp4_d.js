const frm = document.querySelector("form");
const resp = document.querySelector("#outResp");

frm.addEventListener("submit", (e) => {
    e.preventDefault();

    const ladoA = Number(frm.inLadoA.value);
    const ladoB = Number(frm.inLadoB.value);
    const ladoC = Number(frm.inLadoC.value);

    if (ladoA == ladoB && ladoB == ladoC) {
        resp.innerText = "Triângulo Equilátero";
    }
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
        resp.innerText = "Triângulo Isósceles";

    }
    else {
        resp.innerText = "Triângulo Escaleno";
    }
});