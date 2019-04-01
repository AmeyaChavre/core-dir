// people search engine simulation


var findPeople = window.prompt("Please enter the name to search in Ppl.com database");

var listOfPerson = ["John","Sam","Bob","Mark","Rob","Jack","Fred"];

for (var i = 0 ; i < listOfPerson.length ; i++)
{
	if (findPeople === listOfPerson[i])
	{
		alert("Person Found : " + listOfPerson[i] + " !! " + " at position " + i);
		break;
	} 
}
alert("Out of For Loop");
