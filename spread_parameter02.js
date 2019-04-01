// write a simple program to concatanate two arrays using SPREAD parameters 

arrayA = [1,2,3];

arrayB = [4,5,6];

// now declare an array such that it consists of all the elements of arrayA and arrayB using arrayC

//arrayC = arrayA.concat(arrayB);

arrayC = [...arrayA,...arrayB];
console.log(arrayC);

