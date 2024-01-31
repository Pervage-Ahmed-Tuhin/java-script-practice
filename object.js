
//p-Access the golden rod color in the object
/*
const colors = {
    red: "#ff0000",
    green: "#00ff00",
    blue: "#0000ff",
    "golden rod": '#daa520'
};

console.log(colors[ 'golden rod']);
*/

//p-Add passenger capacity to the following object
/*
const car = {
    make: "Toyota",
    model: "Corolla",
    year: 2020
};

car['passenger capacity']=50;

console.log(car);
*/


//p-Display the physics marks as output.

/*
const student = {
    name: "Hamim Sakep",
    id: 5421,
    physics: {
        subject: "HSC Physics",
        author: "Shahjahan Tapan",
        marks: 30
    }
};

console.log(student.physics.marks);

*/


//p-Count the number of properties

/*
let student = {
    name: 'Ariana Grande',
    age: 21,
    city: 'Gaibandha',
    isStudent: true
};


let count=0;

for(const prop in student)
{
    count++;
}

console.log("The  Number of property is:",count);

*/


//p-Loop through the object and print the key value pair of the object

let myObject = {

    name: 'John Doe',
    age: 25,
    city: 'Example City',
    isStudent: true
};

for(const prop in myObject)
{
    console.log("key:",prop,"|","type:",typeof(myObject[prop]));
}