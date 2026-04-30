# Insight-News
# Sobre o Projeto: Vivemos em uma sociedade onde a informação é constante e rápida. Saber compreender e resumir notícias é essencial para se manter informado de forma eficiente, além de desenvolver o pensamento crítico e a capacidade de comunicação.
**Projeto:RESUMO DE NOTÍCIAS
**Problema que resolve:** [A dificuldade de filtrar e resumir o grande volume de notícias do RSS e Reddit de forma eficiente]
## Integrantes
| Nome | GitHub |
|------|--------|
| [Henrique bortolo] | [@henrique19vls] |
| [Davi Bandin] | [@davibandin] |
| [Pedro Beirigo] | [@marquesphb13-collab] |


## Arquitetura
```mermaid
graph TD
Start((Início: Agendador)) --> Crawler[Crawler: Monitora RSS/Sitemaps]
Crawler --> Check{Notícia Nova?}

Check -- Não --> End((Fim do Ciclo))
Check -- Sim --> Fetch[Extração do Conteúdo Completo]
    
Fetch --> AI[IA: Gerar Título Curto + 3 Bullet Points]
AI --> Categorize[Classificação Automática: Esportes, Tech, etc.]
    
Categorize --> DB[(Banco de Dados)]
DB --> Frontend[Atualização do Feed em Tempo Real]
    
Frontend --> End
    
subgraph "Pipeline de Automação"
Crawler
Fetch
AI
Categorize
end
```
