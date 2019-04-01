let firstName = "Mike";
let lastName = "Jackson";

let fullName =

{
	firstName:firstName,
	lastName:lastName,
	calculateFullName() // do not call it function!! it's a method as it is declared within an object
	{
		return firstName + " " + lastName;
	}
} 

console.log(fullName.calculateFullName());