let idades=[]

for (j=0;j<30;j++){
    idades.push(Math.round(Math.random()*80))
}
console.log(idades.filter((idade)=> idade>=18))
