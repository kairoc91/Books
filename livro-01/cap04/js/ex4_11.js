const frm = document.querySelector("form");
const resp = document.querySelector("h3");

frm.addEventListener("submit", (e) => {
    e.preventDefault();

    const velPermitida = Number(frm.inVelPermitida.value);
    const velCondutor = Number(frm.inVelCondutor.value);

    const multa = velCondutor <= velPermitida ? "Sem multa" :
        velCondutor <= velPermitida * 1.20 ? "Multa leve" : 
            "Multa grave";

    resp.innerText = `${multa}`;
});