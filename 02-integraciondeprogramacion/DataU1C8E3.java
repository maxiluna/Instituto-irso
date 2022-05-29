package irsovirtual.Unidad1Clase8;

public class DataU1C8E3 {
	private String producto;//(cadena de caracteres [10])
	private int codigo = 0; //
	private float precio = 0; //
	
	public DataU1C8E3() {
		producto = "";
		codigo = 0;
		precio = 0;
	}

	public DataU1C8E3(String prod, int codi, float prec) {
		// Valido dimensione producto
		if (prod.length() > 10) {
			prod = prod.substring(0, 10);
		}
		producto = prod;
		codigo = codi;
		precio = prec;
	}

	public String getProducto() {
		return producto;
	}

	public void setProducto(String producto) {
		this.producto = producto;
	}

	public int getCodigo() {
		return codigo;
	}

	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}

	public float getPrecio() {
		return precio;
	}

	public void setPrecio(float precio) {
		this.precio = precio;
	}

}
