

// 1st problem

// const arr = [1, 5, 3, 7];

// const arr2 = arr.map((Value) => {
//     return Value + 1;
// })

// console.log(arr2);

// const updatedArr = [];

// for (let i = 0; i < arr.length; i++) {
//     updatedArr.push(arr[i] + 1);
// }
// console.log(updatedArr);

// problem 2


// const arr =[33,50,79,80,90,101,30,89];

// const Array = arr.filter((value)=>value%10===0);
// console.log(Array);

// const arr = [1, 5, 3, 7];

// const updated =arr.filter((value)=>value%2===0);

// console.log(updated);

// problem3

// const instructor = [
//     { name: 'Nodi', age: 28, position: 'Senior' },
//     { name: 'Satranga', age: 27, position: 'Junior' },
//     { name: 'Ganga', age: 26, position: 'Senior' },


// ]


// const filtered = instructor.filter((Value) =>{
//     if(Value.position==='Senior')
//     {
//         return Value;
//     }
// })

// console.log(filtered);


const peoples = [
    { name: 'Meena', age: 20 },
    { name: 'Rina', age: 15 },
    { name: 'Suchorita', age: 22 },
];


// let sum =0;
// for(const people of peoples)
// {

//     sum+=people.age;

// }
// console.log(sum);

// doing the same task using array.reduce method


const sumPremium = peoples.reduce((pre,current)=>{
   
    return pre+current.age;
},0)
console.log(sumPremium);