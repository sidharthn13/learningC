let originalValue = [1,2,3,4,5] ;
function change(value){
    value.push(6)
}

console.log(originalValue);
change(originalValue);
console.log(originalValue);

assignedValue = originalValue;
console.log(originalValue)
originalValue.push(7)
console.log(assignedValue)