
public class Administrativo extends Funcionario {

	private String departamento;
	private double horaExtra;
	
	public void setDepartamento(String departamento) {
		this.departamento = departamento;
	}
	
	public String getDepartamento() {
		return departamento;
	}
	
	public void setHoraExtra(double horaExtra) {
		this.horaExtra = horaExtra;
	}
	
	public double getHoraExtra() {
		return horaExtra;
	}
	
}
