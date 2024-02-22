
// p1
// const multiply = (a,b,c)=> a*b*c;

// console.log(multiply(2,3,4));

// const stuff =`I am a web developer
// I love to code
// I love to eat biryani`;

// console.log(stuff);

// const sum =(a,b=5)=> a+b;

// console.log(sum(5));

// p2

/*
const Name = ['Tuhin','Badar','Opu','Dip','Najibur','medh'];

const task = (Name) => {
    const updated = [];

    for(const nam of Name)
    {
        if(nam.length%2===0)
        {
            updated.push(nam);
        }
        
    }
    return updated;
}

console.log(task(Name));

*/


// p3


// const numbers = [2,4,5,6,10];

// const megaFunction = numbers =>{
//     let sum =0;
//     const size = numbers.length;
//     for(const number of numbers)
//     {
//         const sqr = number*number;
//         sum = sum+sqr;
//     }
//     return sum/size;
// }

// console.log(megaFunction(numbers));


// p4


const num1 =[-1000,1,2,3,4,5,6];
const num2 =[7,8,9,10,11,12];


const worker = (num1 ,num2)=>{
    
    const num3 = num1.concat(num2);
    const updated = [];
    for(const num of num3)
    {   
        updated.push(num);
        
    }

    return Math.min(...updated);
    

}

console.log(worker(num1,num2));