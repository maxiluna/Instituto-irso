package irsovirtual.Unidad1Clase8;

public class DataU1C8E1 {
	private String nombre; 
	private int legajo; 
	private int dependencia; 
	private float horas;
	
	public DataU1C8E1() {
		legajo = 0;
		dependencia = ' ';
		horas = 0;
	}

	public DataU1C8E1(String n, int l, int d, float h) {
		// Valido dimension maxima de 10 en nombre
		if (n.length() > 10) {
			n = n.substring(0, 10);
			}
		nombre = n;
		legajo = l;
		dependencia = d;
		horas = h;
	}
	
	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public int getLegajo() {
		return legajo;
	}

	public void setLegajo(int legajo) {
		this.legajo = legajo;
	}

	public int getDependencia() {
		return dependencia;
	}

	public void setDependencia(int dependencia) {
		this.dependencia = dependencia;
	}

	public float getHoras() {
		return horas;
	}

	public void setHoras(float horas) {
		this.horas = horas;
	}
}
