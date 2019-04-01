// write a simple sum function

let sumFunction = (x,y,z) => 
{
	let sum = x + y + z;
	return sum;
}

// pass the argument to check if it works!!

// declare an array to store exactly three values!!

let numArray = [1,2,3];

// let sum_out = sumFunction(numArray[0],numArray[1],numArray[2]);

// modify the above commented statement by including a SPREAD parameter

let sum_out = sumFunction(...numArray);

console.log("The sum of elements of array is : " + sum_out);