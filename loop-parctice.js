// Code for break statement

//Problem 1 -Write a loop 1 to 200. Use break to exit the loop once you find 100.
// let target=100;

// for(let i=0;i<=200;i++)
// {
//     console.log(i);
//     if(target==i)
//     {
//         console.log('The target is found');
//         break;
//     }
    
// }


//Problem 2 -Write a while loop that adds numbers starting from 1, but stops (using break) as soon as the sum reaches or exceeds 100

// let sum=0;

// let i=1;

// while(i<100)
// {

//     sum=sum+i;
//     if(sum>=100)
//     {
//         console.log("The sum is",sum);
//         break;
//     }
//     i++;

// }


// for(let i=1;i<100;i++)
// {

//     sum=sum+i;
//     if(sum>=100)
//     {
//         console.log("The sum is",sum);
//         break;
//     }

// }


//problem -Write a loop that goes from 1 to 100, but stops (using break) when it encounters the first square number (like 4, 9, 16, etc.)
/*
for(let i=1;i<=100;i++)
{
    const kb=i;
    const bom=i*i;
    if(bom % 2==0)
    {
        console.log("Found the first square number",kb);
        break;
    }
}
*/


//problem = Write a loop to print even numbers from 1 to 40. Use continue to skip odd numbers.

// for(let i=1;i<=40;i++)
// {
//     if(i%2===0)
//     {
//         console.log(i);
//     }
//     else{
//         continue;
//     }
// }


//problem =display odd number from 55 to 85 and skip the numbers divisible by 5.

// for(let i=55 ;i<=85;i++)
// {
//     if(i%5!=0)
//     {
//         if(i%2!=0)
//     {
//         console.log(i);
//     }
//     }

// }


//problem - print  the following problem 60 times

// for(let i =1; i<=60;i++)
// {
//     console.log("I will invest 6 hrs every single day!",i);
// }


//problem - Display sum of all the odd numbers from 91 to 129.


// let sum =0;

// for(let i=91;i<=129;i++)
// {
//     if(i%2!=0)
//     {
//         sum =sum+i;
//     }


// }

// console.log(sum);



//problem =Display sum of all the even numbers from 51 to 85.

// let sum2 =0;

// for(let i=51;i<=85;i++)
// {
//     if(i%2==0)
//     {
//         sum2 =sum2+i;
//     }


// }

// console.log(sum2);

//problem - This is the multiplication table of 9
// for(let i=1;i<=10;i++)
// {
//     console.log("9 X",i,"=",9*i);
// }


//problem - counting down

// for(let i= 85 ; i>=65 ;i--)
// {
//     console.log(i);
// }