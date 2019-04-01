let allUserAddress = [];
// this array stores all the addresses
// below is function that introduces a new entry to array
let storeUserAddress = (userID,...userAddress) => 
{
	allUserAddress.push({userID:userID,userAddress:userAddress});
	console.log(allUserAddress);
	return allUserAddress;
}

firstAddress =
{
"street address" : "F-160",
"locality" : "Park Avenue",
"city" : "NYC",
"region" : "Americas"
}

secondAddress =
{
"street address" : "R-109",
"locality" : "Gray's Papaya",
"city" : "New Jersey",
"region" : "Americas"	
}
storeUserAddress("ac22874",firstAddress,secondAddress);