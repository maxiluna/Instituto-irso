package irsovirtual.Unidad1Clase8;

public class DataU1C8E4 {
	private String nombre; //(cadena de caracteres [10])
	private int nota = 0; //
	
	public DataU1C8E4() {
		nombre = "";
		nota = 0;
	}

	public DataU1C8E4(String nom, int not) {
		// Valido dimensione producto
		if (nom.length() > 10) {
			nom = nom.substring(0, 10);
		}
		nombre = nom;
		nota = not;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public int getNota() {
		return nota;
	}

	public void setNota(int nota) {
		this.nota = nota;
	}
}
