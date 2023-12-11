package mascotas;

import principal.Comida;
import principal.Tipo;

public abstract class Mascota implements Acciones {
    private String nombre;
    private int suciedad;
    private int hambre;
    private int sueño;
    private int felicidad;
    private Tipo tipo;

    public Mascota(String nombre, Tipo tipo) {
        this.nombre = nombre;
        this.tipo= tipo;
        this.felicidad = 100;
        this.suciedad = 0;
        this.hambre = 0;
        this.sueño = 0;
    }
    public void verInformacion() {
        System.out.println("Felicidad: " + felicidad);
        System.out.println("Hambre: " + hambre);
        System.out.println("Sueño: " + sueño);
        System.out.println("Suciedad: " + suciedad);
    }
    
    public void comer(Comida comida) {
        hambre -= comida.getHambre();
        suciedad += 5;
        sueño += 7;
    }
    public void jugar(){
        sueño +=  5;
        felicidad += 15;
        suciedad += 5;
        hambre += 7;
    }

    public void bañar() {
        suciedad -= tipo.getLimpiarse();
        hambre += 5;
        felicidad += -7;
    }

    public void comer() {
        sueño += 7;
        suciedad += 5;
    }

    public void dormir() {
        sueño = 0;
    }



}
