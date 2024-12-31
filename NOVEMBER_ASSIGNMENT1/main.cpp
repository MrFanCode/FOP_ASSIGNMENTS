#include <iostream>

using namespace std;


/*
	TRIED SOLVE THE ASSIGNMENT WITH C++
	JUST A SIMPLE SCRIPT.
*/



int main() {
	// Assigning empty variable
	
	const float KOREAN_STRAWBERRY_PRICE = 165.00;
	const float CHILEAN_CHERRIES_PRICE = 220.00;
	const float GIANT_BLUEBERRY_PRICE = 145.00;

	float koreanStrawberryWeight;
	float chileanCherriesWeight;
	float giantBlueberryWeight;

	float customerPayment;


	// Greet user and displaying info
	cout << "Hello there, Welcome to Fun Fruits Sdn Bhd shop." << "\n";
	cout << "There are 3 fruits in the list, choose each fruits by specifying the weight of prefered fruit in gram" << "\n" << "\n";
	
	// Start to handle input from user to get fruit weights in gram.
	cout << "So the first fruit is Korean Strawberry RM165.00 per KG (enter weight in gram): ";
	cin >> koreanStrawberryWeight;
	
	cout << "The second fruit is Chilean Cherries RM220.00 per KG (enter weight in gram): ";
	cin >> chileanCherriesWeight;
	
	cout << "The third fruit is Giant Blueberry RM145.00 per KG (enter weight in gram): ";
	cin >> giantBlueberryWeight;


	// Calculate the itemized bill and total bill
	float koreanStrawberryBill = ((KOREAN_STRAWBERRY_PRICE / 1000) * koreanStrawberryWeight);
	float chileanCherriesBill = ((CHILEAN_CHERRIES_PRICE / 1000) * chileanCherriesWeight);
	float giantBlueberryBill = ((GIANT_BLUEBERRY_PRICE / 1000) * giantBlueberryWeight);

	float totalBill = koreanStrawberryBill + chileanCherriesBill + giantBlueberryBill;


	// Display the itemized bill and the total bill and ask for payment.
	cout << "Korean Strawberry total bill is: RM" << koreanStrawberryBill << "\n";
	cout << "Chilean Cherries total bill is: RM" <<  chileanCherriesBill << "\n";
	cout << "Giant Blueberry total bill is: RM"  <<  giantBlueberryBill << "\n";

	cout << "The total bill is: RM" << totalBill << "\n";

	cout << "Please enter your payment amount: \n";
	cin >> customerPayment;

	// Handle balance if there are any with simple method:
	float customerBalance = customerPayment - totalBill;

	//cout << "Here is your balance: RM" << customerBalance;
	
	// Handle balance if there are any with a bit more advance method:
	///*	
	if (customerPayment == totalBill) { 
		cout << "Payment success, Thank you for the payment." << "\n";
	} else if ( customerPayment > totalBill ) {
		cout << "Thank you for the payment, Here is your balance: RM" << customerBalance << "\n";
	} else if ( customerPayment < totalBill ) {
		cout << "Sorry the entered amount is not enough, PAYMENT REJECTED." << "\n";
		cout << "PLEASE TRY AGAIN" << "\n";
	} else {
		cout << "Something went wrong, Please try again later." << "\n";
	}
	//*/
	
}

