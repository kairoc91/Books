const frm = document.querySelector("form");
const resp = document.querySelector("h3");

frm.addEventListener("submit", (e) => {
    e.preventDefault();
    const horaBrasil = frm.inHorario.value;
    let horarioFranca = Number(horaBrasil) + 5;
    if (horarioFranca > 24) {
        horarioFranca = horarioFranca - 24;
    }
    resp.innerText = `Hora na França: ${horarioFranca.toFixed(2)}`;

});