let arr = [150, 600, 500,320, 100];

const filterpurchaseHistory2 = arr.filter(function(currentelement){
    return currentelement<=200;
})
console.log(filterpurchaseHistory2);


// discounted pric eusing map

const discountedPriceUsingMap = arr.map(function(currentelement){
    if(currentelement>200){
        const calculateDiscount  = currentelement - currentelement*0.5;
        return calculateDiscount;

    }
    else{
        return currentelement;
    }
})

console.log(discountedPriceUsingMap);