pizzaIngredients =

[
"pepperoni",
"mushrooms",
"onions",
"tomatoes",
"bell peppers",
"corn",
"olives",
"pineapple",
"jalapenos",
"capsicum",
"broccoli"
]

// Demo# 1 Array to String conversion
//alert(pizzaIngredients.toString());
//alert(typeof(pizzaIngredients.toString()));

// Demo#2 push() and pop()
/*
for(var i = 0; i<pizzaIngredients.length ; i++)
{
		pizzaIngredients.pop();
		alert(pizzaIngredients);
		if(pizzaIngredients[i]==="corn")
		{
			break;
		}


}

pizzaIngredients.push("cottage cheese");
alert(pizzaIngredients);


//pizzaIngredients.shift();

pizzaIngredients.unshift("cottage cheese");
alert(pizzaIngredients);

pizzaIngredients[1]="lettuce";
alert(pizzaIngredients);
delete pizzaIngredients[1];
alert(pizzaIngredients);
*/

var pizzaBase = 
[
"wheat thin crust",
"classic hand tossed",
"cheese burst"
]

var newPizza = pizzaIngredients.concat(pizzaBase);
alert(newPizza); 





