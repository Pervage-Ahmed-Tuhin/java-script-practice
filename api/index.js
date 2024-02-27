
let count = 0;

//this is one way in which we can use api
const id = document.getElementById('log');
id.addEventListener('click', function () {
    mega();
})

const mega = async () => {

    const stuff = await fetch('https://jsonplaceholder.typicode.com/users');
    const data1 = await stuff.json();
    pusher(data1);

}

function pusher(data) {

    try {

        const ul = document.getElementById('bob-top');
        const li = document.createElement('li');
        li.innerText = data[count].phone;
        ul.appendChild(li);
        count++;
    }
    catch (error) {
        console.log('data load error');
        count++;
    }

}

// this is the second method in which we can access api

function bob() {
    fetch('https://jsonplaceholder.typicode.com/users')
        .then(req => req.json())
        .then(json => pusher2(json));

}


function pusher2(data) {

    try {

        const ul = document.getElementById('bob-top');
        const li = document.createElement('li');
        li.innerText = data[count].email;
        ul.appendChild(li);
        count++;
    }
    catch (error) {
        console.log('data load error');
        count++;
    }

}
