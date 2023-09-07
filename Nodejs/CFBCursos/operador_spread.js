let n1=[10,20,30,40,50]
let n2=[11,22,33,44,55]
console.log("Para arrays é igual ao concat")
n3=[...n1,...n2]
console.log(n3)
console.log("Para dicionarios ele junta e sobreescreve")
const jogador1={nome:'Feijão',magia:10}
const jogador2={nome:'Vinícius',força:3}
const jogador3={...jogador1,...jogador2}
console.log(jogador3)
console.log("Com funções é igual ao unpack do python")
const soma=(a,b,c)=>{return a+b+c}
valores=[1,4,5]
console.log(soma(...valores))


