## Relatório

| Aluno | Matrícula |
| ----- |-----------|
| Daniel Maike Mendes Gonçalves | 16/0117003 | 
| Joberth Rogers Tavares Costa | 16/0128013 |

### 1) Explicação do algorítimo 

-

### 2) Possível Gargalos

### 3) Dados Coletados

#### 3.1) uf20-0819

Para essa medição é possível verificar que resultado conseguiu ser melhor que a baseline em apenas dois pontos durante as medições coletadas, são elas com 12 threads com timelimite de 60 segundos e com apenas 1 thread com timelimite de 240 segundos. Durante as medições que serão vistas mais abaixo, o algorítimo não se adequou muito bem a entradas muito pequenas, perdendo para o algorítimo do baseline. 

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1003022433&amp;format=interactive"></iframe> -->

#### 3.2) uf125-01

Nessa medição fica muito mais evidente que houve resultados bem parecidos com a baseline tirando a medição com 1 thread. Apesar de ter algumas medições que foram menores ainda sim a distância foi pouca da baseline atual para esse arquivo de teste. 

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=597760991&amp;format=interactive"></iframe> -->

#### 3.3) uf20-0216

Aqui houve medições discrepante em vários níveis com valores em diferentes patamares. Para esse arquivo de entrada, os valores que conseguiram bater o valores colhidos na baseline apenas com timelimit 10 e 60.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1104607473&amp;format=interactive"></iframe> -->

#### 3.4) uf20-0115

Novamente houve resultados muito variados em diferentes timelimits. Como são entradas muito pequenas comparadas as outras, conseguiram se sair bem em relação a baseline apenas em timelimits muito baixos. 

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=175686912&amp;format=interactive"></iframe> -->

#### 3.5) bmc-ibm-1

Os arquivos IBMs contém entradas medianas e tempos de execução medianos também, no bmc-ibm-1 os tempo de execução em relação a baseline foram bem parecidos, onde a partir do time limit 120 os tempos foram mais discrepantes, logo tendo um tempo maior que de baseline apenas para medições referentes apenas uma thread.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1396207879&amp;format=interactive"></iframe> -->

#### 3.6) flat30-36

Mais um exemplo de arquivo com entradas pequenas, onde não foi possível ter resultados positivos em relação a baseline, o único resultado considerado foi com time limit 240 segundos e 12 threads.


<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=678619816&amp;format=interactive"></iframe> -->

#### 3.7) flat175-44

Nesse gráfico é possível ver um crescimento linear de cada uma das medições. Mas é possível notar que apenas os algoritimos executados com 6, 8 e 12 threads conseguiu alcançar com valores muito proximo a baseline para diferentes time limits, como é possível verificar também o algoritimo usando apenas uma thread não consegue se aproximar o valor da baseline atual sendo o mais distante do valor desejado.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=916161926&amp;format=interactive"></iframe> -->

#### 3.8) uf20-012

Apesar de ser um arquivo com poucas entradas comparado aos outros, é legal notar que de acordo com o aumento do time limit, os resultados foram tendendo cada vez mais ao tempo zero. Nesse caso, o algorítimo conseguiu ultrapassou a baseline apenas nos primeiros time limits, e depois foram tendo tempos piores.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=141635386&amp;format=interactive"></iframe> -->

#### 3.9) uf20-012

Apesar de ser um arquivo com poucas entradas comparado aos outros, é legal notar que de acordo com o aumento do time limit, os resultados foram tendendo cada vez mais ao tempo zero. Nesse caso, o algorítimo conseguiu ultrapassou a baseline apenas nos primeiros time limits, e depois foram tendo tempos piores.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=620061916&amp;format=interactive"></iframe> -->

#### 3.10) uf250-01

É possível visualizar que o resultados começam bem próximos, por mais que alguns dos resultados não tenham sido esperados. Com o crescimento do time limit os resultados começaram a tender um valor melhor que o valor base, ocorrendo a partir do time limit de 60 segundos.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1441453107&amp;format=interactive"></iframe> -->

#### 3.11) simples

A partir dos resultados coletados, poucas foram as situações onde o algoritimo se sobressaiu da baseline, foram baterias de testes bem diferentes para cada time limit coletado. Houve resultados positivos apenas a partir de 60 segundos de time limit.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1335306425&amp;format=interactive"></iframe> -->

#### 3.12) uf20-095

Novamente com um arquivo com poucas entradas comparado aos outros. Os resultados positivos para essa bateria de testes foram persistidos apenas em time timits menores que 60 segundos, sendo eles com 1, 8 e 12 threads respectivamente. 

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=215760314&amp;format=interactive"></iframe> -->

#### 3.13) flat125-77

Para essa bateria de testes é possível ver que apesar dos resultados estarem bem perto da linha de baseline nos primeiros time limits, apenas a partir do time limit de 60 segundos que houve resultados mais visíveis de algorítimos que foram mais rápidos que o algorítimo sequencial. 

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1655543164&amp;format=interactive"></iframe> -->

#### 3.14) flat125-55

Para esses testes, apesar de não ser muito evidente os houve resultados acima de 60 segundo de time limits, mas com resultados muito próximo do de baseline, onde os algorítimos de 8 e 12 threads foram os que mais se sobressaíram para esse intervalo.  

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=599830308&amp;format=interactive"></iframe> -->

#### 3.15) Pombos-10

Esse arquivo de testes é um dos maiores dentro do conjunto e durante os testes foram os que mais demoraram a computar. Na bateria de testes, não foi possível ter resultados tão bons relacionado a linha de base, os únicos resultados evidentes foram com time limits de 120 segundo com 6 e 12 threads.  

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=2114830940&amp;format=interactive"></iframe> -->

#### 3.16) Pombos-10

Novamente não foi possível ter resultados tão bons relacionado a linha de base, os únicos resultados evidentes foram com time limits de 120 segundo com 6 e 12 threads.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1301772919&amp;format=interactive"></iframe> -->

#### 3.17) uf20-0462

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=800971577&amp;format=interactive"></iframe> -->

#### 3.18) flat175-34

Novamente é possível ver uma linearidade durante o crescimento do time limit, há apenas um valor muito discrepante dessa linearidade que é o teste com 1 thread para 240 segundos de time limit, de resto os valores foram bem perto do valor de baseline, mas é possível verificar que os testes com 6, 8 e 12 thread a partir de 120 segundos de time limit.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1705386601&amp;format=interactive"></iframe> -->

#### 3.19) uf20-01

Um ponto legal de se notar é que a linha de baseline formou praticamente uma reta e o valor quase se manteve constante no decorrer dos testes com time limit. Como comparação houve pequenos valores que conseguiram chegar ao objetivo, que são algortimos de 8 e 12 threads no decorrer das evolução de time limits.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=8650338&amp;format=interactive"></iframe> -->

#### 3.20) uf200-01

Nestes testes houve uma constância novamente, e é notável que a partir do time limit 120 segundo se sobressaiu melhor que a baseline, tirando o teste com 1 thread.

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1107491110&amp;format=interactive"></iframe> -->

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=565036008&amp;format=interactive"></iframe> -->

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1084260864&amp;format=interactive"></iframe> -->

<!-- <iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1493763510&amp;format=interactive"></iframe> -->

<!--<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=778424906&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=617773654&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=766840452&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1854174808&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1583537213&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=797540538&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=2095758512&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=16573194&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=1853672385&amp;format=interactive"></iframe>

<iframe width="600" height="371" seamless frameborder="0" scrolling="no" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vS8LXUSmB2GE1pE_fxmjhvw6-dMM0t0bCBnLWF0FXLnSwTgGbccIw91sfKJNfC9UdqqCnlj2UoQ6WDc/pubchart?oid=384088074&amp;format=interactive"></iframe> -->