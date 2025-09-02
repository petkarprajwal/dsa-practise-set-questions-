public class MethodOverridingDemo {

	public static void main(String[] args) {
		Payment payment;//reference of parent class
		
		payment=new UpiPayment();
		payment.makePayment();
		
		payment =new CardPayment();
		payment.makePayment();
		
		payment=new Walletpayment();
		payment.makePayment();
	}

} 
    

