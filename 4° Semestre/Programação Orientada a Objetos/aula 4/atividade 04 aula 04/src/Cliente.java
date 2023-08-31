
public class Cliente extends Pessoa {

	private double saldo;
	private String conta;
	
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}
	
	public double getSaldo() {
		return saldo;
	}
	
	public void setConta(String conta) {
		this.conta = conta;
	}
	
	public String getConta() {
		return conta;
	}
	
}
