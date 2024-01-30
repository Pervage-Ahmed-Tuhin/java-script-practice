// const array = [0,0,0,0,0,0,0,0,0];

// const stringRandom ='9822215469871523';

// for(let i=0;i<stringRandom.length;i++)
// {
//     const currentElement = stringRandom[i];
//     array[currentElement]++;
// }

// console.log(array);

const number = [10,20,55,65,45,27];

let target=55;


while(true)
{
    const firstElement = number[0];

    if(firstElement==target)
    {
        break;
    }
    else
    {
        const extractedElement = number.shift();
        number.push(extractedElement);
    }
}

console.log(number);