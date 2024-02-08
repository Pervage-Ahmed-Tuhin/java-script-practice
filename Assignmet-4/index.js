
function calculateMoney(ticketSale) {

    if (ticketSale < 0) {
        return "“Invalid Number”"
    }
    else {

        const value = (ticketSale * 120) - (500 + (8 * 50));

        return value;
    }

}


function checkName(name) {

    if (typeof name === 'string') {
        let str = name.toLocaleLowerCase();
        let arr = str.split('');

        let size = arr.length;

        if (arr[size - 1] === 'a' || arr[size - 1] === 'e' || arr[size - 1] === 'i' || arr[size - 1] === 'o' || arr[size - 1] === 'u' || arr[size - 1] === 'w' || arr[size - 1] === 'y') {
            return 'Good Name';
        }
        else {
            return 'Bad Name';
        }


    }
    else {
        return "invalid";
    }
}


function deleteInvalids(array) {

    if (Array.isArray(array)) {
        let size = array.length;
        let array2 = [];
        for (let i = 0; i < size; i++) {
            if (typeof array[i] === 'number' && !isNaN(array[i])) {
                array2.push(array[i]);
            }
        }
        return array2;
    }
    else {
        return '“Invalid Array”';
    }

}


function password(obj) {
    if (obj.hasOwnProperty('name') && obj.hasOwnProperty('birthYear') && obj.hasOwnProperty('siteName')) {
        let str = String(obj.birthYear);

        if (str.length < 4) {
            return 'invalid';
        }
        else {

            let str = obj.siteName[0].toUpperCase() + obj.siteName.slice(1);

            let pass = str + '#' + obj.name + '@' + obj.birthYear;

            return pass;
        }
    }
    else {
        return 'invalid';
    }
}


function monthlySavings(arr, livingCost) {

    if (Array.isArray(arr) && typeof livingCost === 'number') {

        let sum = 0;

        for (let num of arr) {
            if (num >= 3000) {
                let value = num * 20 / 100;

                num = num - value;

            }
            sum = sum + num;
        }

        let totalSum = sum - livingCost;

        if (totalSum < 0) {
            return "“earn more”";
        }
        else {
            return (sum - livingCost);
        }


    }
    else {
        return 'invalid input';
    }

}

