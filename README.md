# 🚰 Monitoramento de Nível de Água com Arduino

Este projeto simples e funcional foi desenvolvido para **monitorar o nível de água** em reservatórios ou caixas d’água, utilizando sensores analógicos e **LEDs indicadores**.
A proposta é **antecipar situações críticas**, ajudando na prevenção de problemas como transbordamentos ou escassez de água.

## ⚙️ Como Funciona

O sistema utiliza um sensor analógico conectado à porta A0 do Arduino para medir a **variação de tensão de acordo com o nível de água**. 
Com base nos valores lidos, **até 4 LEDs são acesos**, representando os seguintes níveis:

- 🔴 **LED 1 (Porta 2)** – Nível mínimo (⚠️ Baixo)
- 🟠 **LED 2 (Porta 3)** – Nível moderado (⚠️ Atenção)
- 🟡 **LED 3 (Porta 4)** – Nível alto (✅ Bom)
- 🟢 **LED 4 (Porta 5)** – Nível máximo (✅ Excelente)

O valor analógico do sensor é impresso via `Serial Monitor`, facilitando a calibração e o acompanhamento em tempo real.

## 📦 Componentes Utilizados

- 1 × Arduino UNO (ou similar)
- 1 × Sensor de nível de água analógico (pode ser substituído por outro sensor analógico)
- 4 × LEDs (vermelho, laranja, amarelo e verde)
- 4 × Resistores de 220Ω (para os LEDs)
- Jumpers
- Protoboard

