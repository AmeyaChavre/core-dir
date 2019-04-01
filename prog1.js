// this variable gets true if you are a topper!!
var isTopper = false;
// this prompts you to enter your marks.
var marksObtained=window.prompt('To find if you are a topper , please enter your marks :');
// this makes the judgement if you are a topper or not!!
if(marksObtained === NaN || marksObtained === null || marksObtained === '' || marksObtained === undefined)
{
	alert("Please a enter a valid number.");
}
else if (marksObtained>=0 && marksObtained<=100)
{
	marksObtained=Number(marksObtained);
	// calculate the percentage now if greater than 90 declare topper!!
	var totalMarks=100;
	percentageOfMarks=(marksObtained/totalMarks)*100;
	if(percentageOfMarks>=90)
	{
		isTopper=true;
	}
	else
	{
		isTopper=false;
	}
	if(isTopper)
	{
		alert("You have topped the Class!! Congratulations!!");
	}
	else
	{
		alert("Oops!! Better luck next time, try harder!!");
	}
}
else
{
	alert("Invalid Number Provided!! 0-100");
}