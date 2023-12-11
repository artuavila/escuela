package principal;

public enum TipoComida {
	
    FIDEOS("Fideos", 25, 5),
    MANZANA("Manzana", 15, 1),
    SUSHI("Sushi", 40, 10);

    private final String nombre;
    private final int hambre;
    private final int precio;

    TipoComida(String nombre, int hambre, int precio) {
        this.nombre = nombre;
        this.hambre = hambre;
        this.precio = precio;
    }

    public String getNombre() {
        return nombre;
    }

    public int getHambre() {
        return hambre;
    }

    public int getPrecio() {
        return precio;
    }
}
