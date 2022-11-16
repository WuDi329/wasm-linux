let arr = [100, 200, 300]
let str = "merry christmas"
let book = new Map()
book.set('py', 'python')
book.set('js', 'javascript')

for(let num of arr){
    console.log(num)
}

for(let letter of str){
    console.log(letter)
}

for(let [key, value] of book){
    console.log(value)
}

let vas = book.values()
let tmp
while(tmp = vas.next()){
    if(tmp.done) break;
    console.log(tmp.value, tmp.done)
}