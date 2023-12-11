package principal;

import java.util.ArrayList;
import java.util.List;

import mascotas.Mascota;

public class Personaje {
	private Mascota mascota;

    private int monedas = 0;
    private List<Comida> comida = new ArrayList<>();


    public Personaje(Mascota m) {
        this.mascota = m;
    }

    public Mascota getMascota() {
        return mascota;
    }
    public void caraOSeca() {
    	Moneda eleccion;
        System.out.println("Tira la moneda");
        System.out.println("1) Cara");
        System.out.println("2) Seca");
        System.out.println("0) Salir");
        int opc = Utiles.ingresarEntero(0, 2);
        if (opc == 0) return;
        if(opc == 1) {
        	eleccion = Moneda.CARA;
        } else {
        	eleccion = Moneda.SECA;
        }
    	
        Moneda resultado = Moneda.lanzarMoneda();
        if (resultado.equals(eleccion)) {
        	System.out.println("Ganaste! :D");
            monedas += 3;
        } else {
        	System.out.println("Perdiste! :(");
        }
        mascota.jugar();
    }
    
    
    public void tienda() {
		 Comida[] comidasDisponibles = Comida.values();
	     if (monedas <= 0) {
	         System.out.println("No tenes monedas para comprar :(");
	         return;
	     }
	     System.out.println("Monedas: $"+monedas);
	     for (int i = 0; i < comidasDisponibles.length; i++) {
	         System.out.println((i+1) + ". " + comidasDisponibles[i].getNombre() + "$"+comidasDisponibles[i].getPrecio() );
	     }
	     System.out.println("0. Salir");
	     int opc = Utiles.ingresarEntero(0, comidasDisponibles.length);
	     if (opc == 0) return;
	     Comida comidaElegida = comidasDisponibles[opc-1];
	     if (comidaElegida.getPrecio() > monedas) {
	         System.out.println("No tienes las suficientes monedas para comprar esta comida");
	     } else {
	         comida.add(comidaElegida);
	         System.out.println("Compraste " + comidaElegida.getNombre());
	       }

    }
    
    
    public void comer() {
        if (comida.size() < 1) {
            System.out.println("No tienes comida. Ve a la tienda a comprar");
            return;
        }
        for (int i = 0; i < comida.size(); i++) {
            System.out.println((i+1) + " " + comida.get(i).getNombre());
        }
        System.out.println("0 Salir");
        int opcion = Utiles.ingresarEntero(0, comida.size());
        if (opcion == 0) return;
        Comida comerComida = comida.get(opcion-1);
        mascota.comer(comerComida);
        comida.remove(opcion-1);
    }
    
}