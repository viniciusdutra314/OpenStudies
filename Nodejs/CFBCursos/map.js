let numeros=[1,2,3,4,5,6,7,8,9,10]
console.log(numeros.map(x => x*x))
console.log(numeros.map((x,index)=>index%2))
function funcao_complicada(x){
    return x*x -5*x +6 +Math.exp(x)}
console.log(numeros.map(funcao_complicada))