package principal;

public enum Comida {
    MANZANA("Manzana", 1,15),
    FIDEOS("Fideos", 5,25),
    SUSHI("Sushi", 10,40);
    private int precio,hambre;
    private String nombre;
    Comida(String nombre, int precioCompra, int hambre) {
        this.nombre = nombre;
        this.precio = precioCompra;
        this.hambre = hambre;
    }

    public String getNombre() {
        return nombre;
    }

    public int getPrecio() {
        return precio;
    }

    public int getHambre() {
        return hambre;
    }

}
