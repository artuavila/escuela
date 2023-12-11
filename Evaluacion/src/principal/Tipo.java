package principal;

public enum Tipo {

    FUEGO("Fuego",50),
    AIRE("Aire",70),
    AGUA("Agua",90);

    private String nombre;
    private int limpiarse;

    Tipo(String nombre, int limpiarse){
        this.nombre = nombre;
        this.limpiarse = limpiarse;
    }

    public String getNombre() {
        return nombre;
    }

    public int getLimpiarse() {
        return limpiarse;
    }
}
