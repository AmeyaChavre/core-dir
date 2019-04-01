let generateEmail = (name,...address) => {
	let emailMessage = `My name is ${name} . I live in ${address}`;
	return emailMessage;
}

// call the function

let emailOutput = generateEmail("John Cena","Boston , Massachusets","California");


alert(emailOutput);