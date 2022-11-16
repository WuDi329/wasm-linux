class MyList{
    constructor(list){
        this.list = list
        this[Symbol.iterator] = function*(){
            let index = 0;
            let that = this;
            while(index < that.list.length){
                yield that.list[index++]
            }
        }
    }
}

let myList = new MyList([1,2,3,4,5])
for(let i of myList){
    console.log(i)
}