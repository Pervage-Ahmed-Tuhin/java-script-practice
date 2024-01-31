
//p-Write a JavaScript code to reverse the array colors without using the reverse method.

/*
const colors = ['red', 'blue', 'green', 'yellow', 'orange'];

const colorsReverse=[];
for(let i=colors.length-1;i>=0;i--)
{
    colorsReverse.push(colors[i]);
}
console.log(colorsReverse);
*/


//p-Write a js code to find the even numbers from the given array using looping method

/*
const numbers = [12, 98, 5, 41, 23, 78, 46];

const numbersEven=[];

for(let i=0;i<numbers.length;i++)
{
    if(numbers[i]%2==0)
    {
        numbersEven.push(numbers[i]);
    }
}


console.log(numbersEven);

*/

//p-Use a for...of loop to concatenate all the elements of an array into a single string.
/*
let result='';
let numbers = ['Tom', 'Tim', 'Tin', 'Tik'];

for(let i=0;i<numbers.length;i++)
{
     result=result+numbers[i];
}

console.log("'",result,"'");

*/

//p-Reverse the words of a sentence. Only the position of the word will be reversed. check out the output
let inputSentence = "I am a hard working person";

let words = inputSentence.split(' ');

let reversedWords = words.reverse();

let outputSentence = reversedWords.join(' ');

console.log(outputSentence);
