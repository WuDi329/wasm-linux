function* countdown(index){
    while(index > 0)
    yield (index--)
}

for (let i of countdown(10)){
    console.log(i)
}

function* test(){
    yield 'a'
    yield 'b'
    yield 'c'
    yield 'd'
}

for (let i of test()){
    console.log(i)
}