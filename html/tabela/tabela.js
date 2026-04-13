const tabela = document.getElementById("tabela");

tabela.addEventListener("mousemove", (e) => {
    const rect = tabela.getBoundingClientRect();

    const x = e.clientX - rect.left;
    const y = e.clientY - rect.top;

    // brilho
    tabela.style.setProperty("--x", x + "px");
    tabela.style.setProperty("--y", y + "px");

    // leve inclinação (efeito 3D)
    const rotateX = (y / rect.height - 0.5) * 10;
    const rotateY = (x / rect.width - 0.5) * -10;

    tabela.style.transform = `rotateX(${rotateX}deg) rotateY(${rotateY}deg)`;
});

// reset quando sai
tabela.addEventListener("mouseleave", () => {
    tabela.style.transform = "rotateX(0deg) rotateY(0deg)";
});