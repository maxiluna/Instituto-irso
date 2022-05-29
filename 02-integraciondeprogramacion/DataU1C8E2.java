package irsovirtual.Unidad1Clase8;

public class DataU1C8E2 {
	private String empresa; //(cadena de caracteres [30])
	private String domicilio; //(cadena de caracteres [40])
	private String codigopostal; //(cadena de caracteres [10])
	private String localidad; //(cadena de caracteres [20])
	private String pais; //(cadena de caracteres [15])
	
	public DataU1C8E2() {
		empresa = "";
		domicilio = "";
		codigopostal = "";
		localidad = "";
		pais = "";
	}

	public DataU1C8E2(String e, String d, String c, String l, String p) {
		// Valido dimensiones
		if (e.length() > 30) {
			e = e.substring(0, 30);
		}
		if (d.length() > 40) {
			d = d.substring(0, 40);
		}
		if (c.length() > 10) {
			c = c.substring(0, 10);
		}
		if (l.length() > 20) {
			l = l.substring(0, 20);
		}
		if (p.length() > 15) {
			p = p.substring(0, 15);
		}
		empresa = e;
		domicilio = d;
		codigopostal = c;
		localidad = l;
		pais = p;
	}

	public String getEmpresa() {
		return empresa;
	}

	public void setEmpresa(String empresa) {
		this.empresa = empresa;
	}

	public String getDomicilio() {
		return domicilio;
	}

	public void setDomicilio(String domicilio) {
		this.domicilio = domicilio;
	}

	public String getCodigopostal() {
		return codigopostal;
	}

	public void setCodigopostal(String codigopostal) {
		this.codigopostal = codigopostal;
	}

	public String getLocalidad() {
		return localidad;
	}

	public void setLocalidad(String localidad) {
		this.localidad = localidad;
	}

	public String getPais() {
		return pais;
	}

	public void setPais(String pais) {
		this.pais = pais;
	}
}
