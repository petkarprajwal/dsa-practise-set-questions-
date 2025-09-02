
class Payment
{
	void makePayment()
	{
		System.out.println("Processing payment using generic method");
	}
}
//subclass hema

class UpiPayment extends  Payment
{
	void makePayment()
	{
		System.out.println("Payment made using UPI");
	}
}
//sumanth
class CardPayment extends Payment
{
	void makePayment()
	{
		System.out.println("Payment made using Credit/debit card");
	}
}

//nikitha

class Walletpayment extends Payment
{
	void makePayment()
	{
		System.out.println("Payment made using Digital Wallet");
	}
}



