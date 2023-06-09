INICIANDO REPOSITÓRIO PARA O GITHUB A

[1] Criar o repositório no git e copiar o link 'Clone' da aba 'HTTPS'
Exemplo: https://github.com/calebetx/beecrowd.git

[2] Iniciar o terminal GIT BASH na ÁREA DE TRABALHO

[3] Utilizar os seguintes comandos:
1) git clone 'URL' // Cria pasta do repositório no desktop
Exemplo: git clone https://github.com/calebetx/beecrowd.git
2) cd 'nome' // Acessa a pasta
Exemplo: cd beecrowd
3) code . // Abre o VS Code com essa pasta
EXTRA) ls // Lista todos os arquivos na pasta
4) git status // Lista o que tem de diferente no local para o github
5) git add . // PREPARA(ADICIONA) quais os arquivos do local para o github(Sim o '.' é todos)
6) git commit -m "DESCRIÇÃO" // PREPARA O ENVIO os arquivos do local para o github
Exemplo: git commit -m "fix de arquivos"
7) git checkout -b 'DESCRIÇÃO' // -b cria uma nova branch e já vai para ela
Exemplo: git checkout -b correios
8) git push origin 'branch' // ENVIA os arquivos para o github
Exemplo: git push origins correios
9) Vai até o repositório do github e segue os passos