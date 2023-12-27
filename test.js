function swap(num1, num2){
    num1 += num2;
    num2 = num1-num2;
    num1 -= num2;
    console.log(num1);
    console.log(num2);
    console.log("swap function exits now")
    return;
}
function main(){
    let num1 = 10;
    let num2 = 20;
    swap(num1,num2);
    console.log(num1);
    console.log(num2);
}
main();