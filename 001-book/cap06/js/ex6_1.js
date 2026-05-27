const frm = document.querySelector("form");
const respNome = document.querySelector("span");
const respLista = document.querySelector("pre");

const pacientes = [];

//Submit

frm.addEventListener("submit", (e) => { //(e) recebe todos os parâmetros do formulário
    e.preventDefault(); 

    const nome = frm.inPaciente.value; //a variável nome recebe o valor declarado no input inPaciente
    pacientes.push(nome); //adiciona no vetor a variável nome que acabou de ser enviada pelo usuário

    let lista = "";

    for (let i = 0; i < pacientes.length; i++) { //i = 0, se i < que o vetor pacientes, soma +1
        lista += `${i + 1}.${pacientes[i]}\n`; //declara na variável lista o valor de i+1 e o paciente na ordem i dentro do vetor
    }
    respLista.innerText = lista;
    frm.inPaciente.value = "";
    frm.inPaciente.focus();
});

//Urgência

frm.btUrgencia.addEventListener("click", () => {
    if (!frm.checkValidity()) {
        alert("Informe o nome do paciente a ser atendido em caráter de urgência.");
        frm.inPaciente.focus();
        return;
    }

    const nome = frm.inPaciente.value;
    pacientes.unshift(nome);
   
    let lista = "";
   
    pacientes.forEach((paciente, i) => (lista += `${i + 1}.${paciente}\n`)); //forEach (paciente, i) faz uma varredura para identificar cada string e sua posição no index
    respLista.innerText = lista;
    frm.inPaciente.value = "";
    frm.inPaciente.focus();
});

//Atender

frm.btAtender.addEventListener("click", () => {
    if (pacientes.length == 0) { //se a quantidade de pacientes == 0
        alert("Não há pacientes na lista de espera"); 
        frm.inPaciente.focus(); //retorna o cursor para o input
        return;
    }
    const atender = pacientes.shift();
    respNome.innerText = atender;
    
    let lista = "";
    
    pacientes.forEach((paciente, i) => (lista += `${i + 1}.${paciente}\n`));
    respLista.innerText = lista;
});