class Person{
    constructor (list){
        this.list = list
    }
    [Symbol.iterator](){
        let index = 0
        let that = this
        return {
            next(){
                return that.list.length > index? {value: that.list[index++], done: false} : {done: true}
            }
        }
    }
}

let person = new Person([123, 456, 789])
for(let i of person){
    console.log(i)
}