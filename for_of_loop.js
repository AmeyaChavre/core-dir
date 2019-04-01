let wrestlerInfo =

[
{
	"name" : "John Cena",
	"age" : 40,
	"finisher" : "F5"
},
{
	"name" : "Ric Flair",
	"age" : 60,
	"finisher" : "figure 8"
},
{
	"name" : "Undertaker",
	"age" : 52,
	"finisher" : "Tombstone"
}
]

// now using the for of loop iterate through the array

for ( wrestler of wrestlerInfo) // FOR OF loop ONLY work on Arrays!!NOT objects!!
{
	console.log(wrestler);
}