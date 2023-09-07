quadrados=[]
for (j=0;j<=10;j++){
    quadrados.push(j*j)
}
console.log(quadrados)
let num_quadrados=0

//usando continue
for (j=0;j<=100;j++){
    if (!quadrados.includes(j)){continue}
    num_quadrados++
}
console.log(num_quadrados)
num_quadrados=0
//usando break
for (j=0;j<=100;j++){
    if (quadrados.includes(j)){num_quadrados++}
}
console.log(num_quadrados)