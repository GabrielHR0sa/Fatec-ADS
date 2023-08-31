
public class Funcionario extends Pessoa {

	private String ctps;
	private String admissao;
	private double salario;
	
	public void setCtps(String ctps) {
		this.ctps = ctps;
	}
	
	public String getCtps() {
		return ctps;
	}
	
	public void setAdmissao(String admissao) {
		this.admissao = admissao;
	}
	
	public String getAdmissao() {
		return admissao;
	}
	
	public void setSalario(double salario) {
		this.salario = salario;
	}
	
	public double getSalario() {
		return salario;
	}
	
}
