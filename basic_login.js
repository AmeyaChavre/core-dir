var Users=
[
	{
		'email': 'samuel_jackson@gmail.com',
		'password':'pass123',
		'firstName': 'Samuel',
		'lastName': 'Jackson',
		'mobileNumber': 123456789,
		'isVerified': true,
		'isPaid': true
	},
	{
		'email':'bruce_willis@gmail.com',
		'password':'pass123',
		'firstName': 'Bruce',
		'lastName': 'Willis',
		'mobileNumber': 123456789,
		'isVerified': true,
		'isPaid': true
	},
	{
		'email':'quentin_tarantino@gmail.com',
		'password':'pass123',
		'firstName':'Quentin',
		'lastName':'Tarantino',
		'mobileNumber':123456789,
		'isVerified':true,
		'isPaid':true
	}
]

var checkLogin = function(email,password,allUsers)
{
	var isUserFound = false;
	var passwordCorrect = false;
	for ( currentUser in allUsers)
	{
		console.log(currentUser);
		if(allUsers[currentUser]['email'] == email)
		{
			if(allUsers[currentUser]['password']==password)
				{
					isUserFound = true;
					passwordCorrect = true;
					break;
				}
			else
				{
					isUserFound = true;
					passwordCorrect = false;
					break;
				}
		}
		else
			{
				isUserFound = false;	
			}
	}
	// end of for - in loop
	if ( isUserFound == true && passwordCorrect == true)
		{
			alert("You are sucessfully logged in!!");
		}
	else if ( isUserFound == true && passwordCorrect == false)
		{
			alert("The password is incorrect.");
		}
	else
		{
			alert("The user was not found in the database.");
		}
}

var email = window.prompt("Please enter your email-id :");
var password = window.prompt("Please enter your password :");
checkLogin(email,password,Users);